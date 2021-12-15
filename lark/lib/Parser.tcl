# Ich, Doktor Josef Grosch, Informatiker, 5.8.1996

proc draw_parser parser {
   global gCanvas gParser dy item_font
   set gParser $parser
   wm geometry	. 800x500
   wm title	. $gParser
   wm iconname	. $gParser
   wm minsize	. 30 10

   frame .menue -relief flat
   menubutton .menue.break -text "break" -menu .menue.break.m -width 5 \
      -relief raised -underline 0
   menu .menue.break.m
   .menue.break.m add command -label "token"	-command "token"   -underline 0
   .menue.break.m add command -label "stack"	-command "stack"   -underline 4
   .menue.break.m add command -label "rule"	-command "rule"    -underline 1
   .menue.break.m add command -label "state"	-command "state"   -underline 2
   .menue.break.m add command -label "position" -command "pos"     -underline 1
   .menue.break.m add command -label "dynamic"	-command "dynamic" -underline 0
   .menue.break.m add command -label "dynamic all" -command "halt D; update_show" -underline 1
   .menue.break.m add command -label "error"  -command "halt e; update_show" -underline 0
   .menue.break.m add command -label "accept" -command "halt a; update_show" -underline 1 -state disabled
   .menue.break.m add command -label "fail"   -command "halt f; update_show" -underline 0 -state disabled

   button .menue.exit  -text "exit"  -width 6 -padx 0 -command "exit"  -underline 1
   button .menue.print -text "print" -width 6 -padx 0 -command "print" -underline 0
   button .menue.help  -text "help"  -width 6 -padx 0 -command "help"  -underline 0
   button .menue.item  -text "item"  -width 6 -padx 0 -command "item0" -underline 0
   button .menue.show  -text "show"  -width 6 -padx 0 -command "show0" -underline 3
   button .menue.run   -text "run"   -width 6 -padx 0 -command "run"   -underline 0
   button .menue.step  -text "step"  -width 6 -padx 0 -command "step"  -underline 0
#  button .menue.info  -text "info"  -width 6 -padx 0 -command "my_info"

   bind . q "exit"
   bind . x "exit"
   bind . b " "
   bind . p "print"
   bind . h "help"
   bind . i "item0"
   bind . w "show0"
   bind . d "dynamic"
   bind . o "pos"
   bind . a "state"
   bind . u "rule"
   bind . k "stack"
   bind . t "token"
   bind . r "run"
   bind . s "step"
   bind . j "my_info"
   bind . e "halt e; update_show"
   bind . c "halt a; update_show"
   bind . f "halt f; update_show"
   bind . y "halt D; update_show"

   pack .menue.exit	-side right -padx 0 -pady 5
   pack .menue.print	-side right -padx 0 -pady 5
   pack .menue.help	-side right -padx 0 -pady 5
   pack .menue.item	-side right -padx 0 -pady 5
   pack .menue.show	-side right -padx 0 -pady 5
   pack .menue.break	-side right -padx 2 -pady 5
   pack .menue.run	-side right -padx 0 -pady 5
   pack .menue.step	-side right -padx 0 -pady 5
#  pack .menue.info	-side right -padx 0 -pady 5
   pack .menue -side top -fill both

   frame .msg -relief flat
   frame .msg.p -relief ridge -bd 2
   frame .msg.l -relief ridge -bd 2
   frame .msg.a -relief ridge -bd 2
   message .msg.p.pos	 -width 200 -textvariable Position
   message .msg.l.token	 -width 300 -textvariable Token
   message .msg.a.action -width 800 -textvariable Action -justify left -anchor w
   pack .msg.p.pos
   pack .msg.l.token
   pack .msg.a.action -anchor w
   pack .msg.p -side left
   pack .msg.l -side left
   pack .msg.a -side left -expand yes -fill x
   pack .msg -side top -fill x

   frame .can -relief flat
   set gCanvas .can.canvas
   canvas $gCanvas -scrollregion {0 -3000 300 0} \
      -yscrollcommand ".can.vscroll set" -width 300 -yscrollincrement $dy
   scrollbar .can.vscroll -relief sunken -command "$gCanvas yview"
   pack .can.vscroll -side right -fill y
   pack $gCanvas -side left -fill y
   pack .can -side left -fill y

   frame .box -relief flat
   listbox .box.list -width 36 -height 24 -relief flat -font $item_font \
      -yscroll ".box.yscroll set" -xscroll ".box.xscroll set"
   scrollbar .box.yscroll -relief sunken -command ".box.list yview"
   scrollbar .box.xscroll -relief sunken -command ".box.list xview" \
      -orient horizontal
   pack .box.yscroll -side right  -fill y
   pack .box.xscroll -side bottom -fill x
   pack .box.list -side left -fill both -expand yes
   pack .box -side left -fill both -expand yes
   bind .box.list <ButtonRelease-1> click
}

proc push {state symbol} {
   global StackPtr gCanvas dy Width Height Stack State InfoType stack_font
   set x 100
   set y [expr $StackPtr * $dy]
   set Stack($StackPtr) [$gCanvas create rect $x $y [expr $x + $Width] [expr $y + $Height]]
   $gCanvas create text [expr $x + $Width / 2] [expr $y + $Height / 2] \
      -text [string range $symbol 0 24] -font $stack_font
   set x 50
   $gCanvas create rect $x $y [expr $x + 50] [expr $y + $Height]
   $gCanvas create text [expr $x + 50 / 2] [expr $y + $Height / 2] \
      -text $state -font $stack_font
   set StackPtr [expr $StackPtr - 1]
   set State $state
   if {$InfoType == "j"} item0
   adjust_view
}

proc pop n {
   global StackPtr gCanvas Stack
   while {$n > 0} {
      set StackPtr [expr $StackPtr + 1]
      set id $Stack($StackPtr)
      $gCanvas delete $id [expr $id + 1] [expr $id + 2] [expr $id + 3]
      set n [expr $n - 1]
   }
   adjust_view
}

proc pass_info {p l a} {
   global Position Token Action current_fn src_fn line column
   set Position $p
   set Token    $l
   set Action   $a
   set src_fn ""
   if {[scan $p {"%[^"]%*c: %d, %d} src_fn line column] == 3} {
      update_src
   }
}

proc create_src {} {
   global g_src src_font
   set w $g_src
   toplevel $w
   wm title $w "Source File"
   wm iconname $w "Source File"
   text $w.t -relief flat -bd 2 -xscrollcommand "$w.hscroll set" \
      -yscrollcommand "$w.vscroll set" -setgrid true \
      -background white -wrap none -font $src_font
   scrollbar $w.vscroll -relief sunken -command "$w.t yview"
   scrollbar $w.hscroll -relief sunken -command "$w.t xview" -orient horiz
   pack $w.vscroll -side right -fill y
   pack $w.hscroll -side bottom -fill x
   pack $w.t -expand yes -fill both
}

proc update_src {} {
   global current_fn src_fn g_src line column
   set w $g_src
   if ![winfo exists $w] create_src
   $w.t tag delete mark
   if {$current_fn != $src_fn} {
      global is_unix
      $w.t configure -state normal
      # not exists file ???
      if {$is_unix} {
	 exec expand <$src_fn >yySource
	 textLoadFile $w.t yySource
      } else {
	 textLoadFile $w.t $src_fn
      }
      $w.t configure -state disabled
      set current_fn $src_fn
      wm title $w "Source File: $src_fn"
   }
   set pos $line.[expr $column - 1]
   $w.t tag configure mark -background orange
   $w.t tag add mark $pos $line.$column
   $w.t see $pos
}

proc textLoadFile {w file} {
   set f [open $file]
   $w delete 1.0 end
   while {![eof $f]} {
      $w insert end [read $f 10000]
   }
   close $f
}

proc token {} {
   global gParser
   .box.list delete 0 end
   set f [open yy$gParser.sbl]
   while {[gets $f s] >= 0 && $s != "0_intern"} { .box.list insert end $s }
   close $f
   global BreakType; set BreakType l
   global InfoType; set InfoType l
}

proc stack {} {
   global gParser
   .box.list delete 0 end
   set f [open yy$gParser.sbl]
   while {[gets $f s] >= 0} { .box.list insert end $s }
   close $f
   global BreakType; set BreakType s
   global InfoType; set InfoType s
}

proc rule {} {
   global gParser
   .box.list delete 0 end
   set f [open yy$gParser.rul]
   while {[gets $f s] >= 0} { .box.list insert end $s }
   close $f
   global BreakType; set BreakType r
   global InfoType; set InfoType r
}

proc state {} {
   global BreakType; set BreakType z
   ask state
}

proc pos {} {
   global BreakType; set BreakType p
   ask "line, column"
}

proc dynamic {} {
   global BreakType; set BreakType d
   ask number
}

proc ask label {
   global ask_font
   set w .entry
   set e $w.frame.entry
   toplevel $w
   wm title $w $label
   wm iconname $w $label
   frame $w.frame -borderwidth 10
   button $w.ok     -text OK     -underline 0 -command "ok $w"
   button $w.cancel -text cancel -underline 0 -command "focus .; destroy $w"
   entry $w.frame.entry -relief sunken -font $ask_font
   pack $w.frame -side top -fill both
   pack $w.ok $w.cancel -side left -fill both -expand yes
   pack $w.frame.entry -side top -pady 5 -fill x
   $e insert 0 ""
   $e select from 0
   $e select to end
   bind $w <Return> "ok $w"
   bind $w O "ok $w"
   bind $w o "ok $w"
   bind $w c "focus .; destroy $w"
   grab $w
   focus $e
}

proc click {} {
   global BreakType
   if {[llength [.box.list curselection]] > 0} {
      if {$BreakType == "i"} {
	 scan [.box.list get [lindex [.box.list curselection] 0]] "%d" a
	 clear $a
	 .box.list delete [.box.list curselection]
      } elseif {$BreakType == "r"} {
	 halt $BreakType [lindex [.box.list curselection] 0]
	 .box.list select clear 0 10000
      } elseif {$BreakType != "j"} {
	 halt $BreakType [.box.list get [lindex [.box.list curselection] 0]]
	 .box.list select clear 0 10000
      }
   }
}

proc ok w {
   global BreakType
   halt $BreakType [.entry.frame.entry get]
   update_show
   focus .
   destroy $w
}

proc show0 {} {
   global BreakType; set BreakType i
   global InfoType; set InfoType i
   .box.list delete 0 end
   show
   global gParser
   set f [open yy$gParser.brk]
   while {[gets $f s] >= 0} { .box.list insert end $s }
   close $f
}

proc item0 {} {
   global BreakType State; set BreakType j
   global InfoType; set InfoType j
   .box.list delete 0 end
   if {$State != "-"} {
      global gParser
      item $State
      set f [open yy$gParser.itm]
      while {[gets $f s] >= 0} { .box.list insert end $s }
      close $f
   }
}

proc update_show {} {
   global InfoType
   if {$InfoType == "i"} show0
}

proc print {} {
   global gCanvas
   $gCanvas postscript -file Parser.ps
}

proc help {{w .help}} {
   global gParser help_font
   catch { destroy $w }
   toplevel $w
   wm title $w "$gParser Help"
   wm iconname $w "$gParser Help"
   button $w.close -text close -command "destroy $w" -underline 0
   text $w.t -relief flat -bd 2 -yscrollcommand "$w.s set" -setgrid true \
      -font $help_font
   scrollbar $w.s -relief sunken -command "$w.t yview"
   pack $w.close -side bottom -fill x
   pack $w.s -side right -fill y
   pack $w.t -expand yes -fill both
   bind $w c "destroy $w"
   bind $w q "destroy $w"
   bind $w x "destroy $w"
   $w.t insert 0.0 { The top line of the main window contains:
 
 the source position of the current lookahead token,
 the current lookahead token,
 the next action to be executed.
 
 The left subwindow displays the stack.
 The right subwindow displays various information.
 The source window shows the source file with highlighted lookahead token.
 
 The possible actions are:
 
 shift      : the current lookahead token is pushed on the stack,
              the next token is read and becomes the new lookahead token
 reduce     : a grammar rule is recognized,
              its right-hand side symbols are popped from the stack and
              its left-hand side nonterminal symbol is pushed on the stack
 error      : a syntax error has been detected
 accept     : parsing terminates (at EOF or by ACCEPT)
 fail       : parsing terminates (by ABORT)
 dynamic decision: a predicate is checked in order to determine the next action
 
 The menu buttons:
 
 step       : execute one parser action
 run        : execute parser actions until a breakpoint is hit
 break      : define a breakpoint (see below)
 show       : display the defined breakpoints,
              delete a breakpoint by clicking on it with the left mouse button
 item       : display the set of items for the state on top of the stack
 help       : display this help information
 print      : write the current picture of the stack in Postscript format
              to the file named 'Parser.ps'
 exit       : exit the program
 
 Definition of breakpoints:
 
 token      : stop when a certain token becomes the lookahead token
 stack      : stop when a certain symbol is on top of the stack
 rule       : stop when a certain grammar rule is reduced
 state      : stop when a certain state is on top of the stack
 position   : stop when a certain source position is reached
 dynamic    : stop when a certain dynamic decision is evaluated
 dynamic all: stop when any dynamic decision is evaluated
 error      : stop when a syntax error has been detected
 accept     : stop when parsing terminates without errors
 fail       : stop when parsing terminates with errors
 
              For token, stack, and rule select an item in the right
              window by clicking on it with the left mouse button.}
   $w.t configure -state disabled
}

proc adjust_view {} {
   global gCanvas Stack StackPtr CanvHeight dy
   set u [expr ([lindex [$gCanvas yview] 0] - 1) * $CanvHeight]
   set l [expr ([lindex [$gCanvas yview] 1] - 1) * $CanvHeight]
   set t [lindex [$gCanvas coords $Stack([expr $StackPtr + 1])] 1]
   set delta [expr [winfo height $gCanvas] / $dy / 2]
   if {$t < $u} { $gCanvas yview scroll -$delta units }
   if {$t > $l} { $gCanvas yview scroll  $delta units }
}

proc my_info {} {
   global gCanvas
}

set tk_strictMotif 0
set dx		65
set dy		24
set Width	160
set Height	24
set CanvHeight	3000
set StackPtr	-1
set State	-
set InfoType	-
set current_fn	""
set src_fn	""
set g_src	.source
set is_unix	[expr {[string compare $tcl_platform(platform) unix] == 0}]

if {$is_unix} {
  if {$tcl_version < 8.5} {
    set stack_font	{helvetica 10}
    set item_font	9x15bold
    set ask_font	9x15bold
    set help_font	9x15bold
    set src_font	9x15bold
  } else {
    set stack_font	{sans-serif 10}
    set item_font	{monospace 11}
    set ask_font	{monospace 11}
    set help_font	{monospace 11}
    set src_font	{monospace 11}
  }
} else {
   set stack_font	{arial 8 normal}
   set item_font	{courier 10 normal}
   set ask_font		{courier 10 normal}
   set help_font	{courier 10 normal}
   set src_font		{courier 10 normal}
}
