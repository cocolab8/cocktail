# Ich, Doktor Josef Grosch, Informatiker, 5.8.1996/13.9.2001

# uncomment to use debugger

# set TclProDirectory "/opt/ajuba/TclPro1.4/linux-ix86/bin"
# source [file join $TclProDirectory prodebug.tcl] 
# debugger_init
# debugger_eval {

# uncomment to use profiler

# global auto_path
# append auto_path " /home/grosch/ftp/tcl/SoftGuard-2.1"
# package require sgxCP 1.0
# ::sgxCP::init

proc draw_tree {x y w h d l {fn {}}} {
   global gCanvas incr dx dy marginx marginy width height width2 height2 trunc
   global depth length geometry default_fn

# ::sgxCP::reset

   wm geometry	. $geometry
   wm title	. "Tree Browser"
   wm iconname	. "Tree Browser"
   wm minsize	. 500 200

   frame  .frame -relief raised -bd 2
   frame  .menue -relief raised -bd 2
   button .menue.exit   -text "exit"   -width 5 -padx 0 -command "destroy ." -underline 1
   button .menue.help   -text "help"   -width 5 -padx 0 -command "help"    -underline 1
   button .menue.config -text "config" -width 6 -padx 0 -command "config"  -underline 2
   button .menue.print  -text "print"  -width 5 -padx 0 -command "print"   -underline 0
   button .menue.source -text "source" -width 6 -padx 0 -command "show_src" -underline 0
   button .menue.draw   -text "draw"   -width 5 -padx 0 -command "draw"    -underline 0
   button .menue.close  -text "close"  -width 5 -padx 0 -command "b_close" -underline 1
   button .menue.push   -text "push"   -width 5 -padx 0 -command "b_push"  -underline 1
   button .menue.open   -text "open"   -width 5 -padx 0 -command "b_open"  -underline 0
   button .menue.center -text "center" -width 6 -padx 0 -command "center"  -underline 0
   button .menue.top    -text "top"    -width 5 -padx 0 -command "top"     -underline 0
   button .menue.home   -text "home"   -width 5 -padx 0 -command "home"    -underline 0
   button .menue.root   -text "root"   -width 5 -padx 0 -command "highlight 1; top" -underline 0
   button .menue.goto   -text "goto"   -width 5 -padx 0 -command "goto"    -underline 0
#  button .menue.info   -text "info"   -width 5 -padx 0 -command "my_info" -underline 0
   scale  .menue.scale -orient horizontal -length 400 -from -5.0 -to 2.0 \
      -command "re_scale" -tickinterval 1.0 -resolution 0.02
   .menue.scale set 0

   bind . q "destroy ."
   bind . x "destroy ."
   bind . e "help"
   bind . n "config"
   bind . p "print"
   bind . s "show_src"
   bind . d "draw"
   bind . l "b_close"
   bind . u "b_push"
   bind . o "b_open"
   bind . c "center"
   bind . t "top"
   bind . h "home"
   bind . r "highlight 1; top"
   bind . g "goto"
   bind . j "my_info"

   pack .menue.exit   -side right -padx 0 -pady 5
   pack .menue.help   -side right -padx 0 -pady 5
   pack .menue.config -side right -padx 0 -pady 5
   pack .menue.print  -side right -padx 0 -pady 5
   pack .menue.source -side right -padx 0 -pady 5
   pack .menue.draw   -side right -padx 0 -pady 5
   pack .menue.close  -side right -padx 0 -pady 5
   pack .menue.push   -side right -padx 0 -pady 5
   pack .menue.open   -side right -padx 0 -pady 5
   pack .menue.center -side right -padx 0 -pady 5
   pack .menue.top    -side right -padx 0 -pady 5
   pack .menue.home   -side right -padx 0 -pady 5
   pack .menue.root   -side right -padx 0 -pady 5
   pack .menue.goto   -side right -padx 0 -pady 5
#  pack .menue.info   -side right -padx 0 -pady 5
   pack .menue.scale  -side right -expand yes
   pack .menue -side top -fill both
   pack .frame -side top -fill both -expand yes

   set width	$w
   set height	$h
   set depth	$d
   set length	$l
   set default_fn $fn
   set dx	[expr {$width  * 7/6}]
   set dy	[expr {$height * 5/2}]
   set width2	[expr {$width  / 2}]
   set height2	[expr {$height / 2}]
   set trunc	[expr {$width  * 8/60}]

   set maxx [expr {$x * $dx + $marginx}]
   set maxy [expr {$y * $dy + $marginy}]
   set gCanvas .frame.canvas
   canvas $gCanvas -scrollregion "-$marginx -$marginy $maxx $maxy" \
      -xscrollincrement $incr -yscrollincrement $incr \
      -xscrollcommand ".frame.hscroll set" -yscrollcommand ".frame.vscroll set"
   scrollbar .frame.vscroll -relief sunken -command "$gCanvas yview"
   scrollbar .frame.hscroll -relief sunken -command "$gCanvas xview" -orient horiz
   pack .frame.vscroll -side right  -fill y
   pack .frame.hscroll -side bottom -fill x
   pack $gCanvas -expand yes -fill both

   bind $gCanvas <2> "$gCanvas scan mark %x %y"
   bind $gCanvas <B2-Motion> "$gCanvas scan dragto %x %y"

   bind . <Left>  "$gCanvas xview scroll -1 pages"
   bind . <Right> "$gCanvas xview scroll  1 pages"
   bind . <Up>    "$gCanvas yview scroll -1 pages"
   bind . <Down>  "$gCanvas yview scroll  1 pages"
   bind . <Prior> "$gCanvas yview scroll -1 pages"
   bind . <Next>  "$gCanvas yview scroll  1 pages"

   $gCanvas bind rect <1> "click_1_rect"
   $gCanvas bind rect <2> "click_1_rect"
   $gCanvas bind rect <3> "click_1_rect"
   $gCanvas bind text <1> "click_1_text"
   $gCanvas bind text <2> "click_1_text"
   $gCanvas bind text <3> "click_1_text"
   $gCanvas bind edge <1> "click_1_edge"
   $gCanvas bind edge <2> "click_1_edge"
   $gCanvas bind edge <3> "click_3_edge"
   $gCanvas bind fold <1> "click_1_fold"
   $gCanvas bind fold <2> "click_1_fold"
   $gCanvas bind fold <3> "click_1_fold"

   $gCanvas bind rect <Double-1> "double_1_rect"
   $gCanvas bind rect <Double-2> "double_2_rect"
   $gCanvas bind rect <Double-3> "double_3_rect"
   $gCanvas bind text <Double-1> "double_1_text"
   $gCanvas bind text <Double-2> "double_2_text"
   $gCanvas bind text <Double-3> "double_3_text"
   $gCanvas bind edge <Double-1> "double_1_edge"
   $gCanvas bind edge <Double-2> "double_2_edge"
   $gCanvas bind edge <Double-3> "double_3_edge"
   $gCanvas bind fold <Double-1> "double_1_fold"
   $gCanvas bind fold <Double-2> "double_1_fold"
   $gCanvas bind fold <Double-3> "double_1_fold"
}

proc click_1_rect {} {
   global gCanvas
   highlight [$gCanvas find withtag current]
}

proc click_1_text {} {
   global gCanvas
   highlight [expr {[$gCanvas find withtag current] - 1}]
}

proc click_1_edge {} {
   global gCanvas
   set id [$gCanvas find withtag current]
   set x [expr {[lindex [$gCanvas coords $id] 2] + 20}]
   set y [lindex [$gCanvas coords $id] 3]
   highlight [$gCanvas find closest $x $y 0 rect]
}

proc click_3_edge {} {
   global gCanvas
   set id [$gCanvas find withtag current]
   set x [expr {[lindex [$gCanvas coords $id] 0] - 20}]
   set y [lindex [$gCanvas coords $id] 1]
   highlight [$gCanvas find closest $x $y 0 rect]
}

proc click_1_fold {} {
   global gCanvas
   set id [$gCanvas find withtag current]
   set l [$gCanvas coords $id]
   set x1 [lindex $l 0]
   set y1 [lindex $l 1]
   set y2 [lindex $l 3]
   if {$y1 == $y2} {
      set x $x1
      set y [expr {$y1 + 5}]
   } else {
      set x [expr {$x1 + 20}]
      set y $y1
   }
   highlight [$gCanvas find closest $x $y 0 rect]
}

proc double_1_rect {} {
   click_1_rect
   b_open
}

proc double_2_rect {} {
   click_1_rect
   b_push
}

proc double_3_rect {} {
   click_1_rect
   b_close
}

proc double_1_text {} {
   click_1_text
   b_open
}

proc double_2_text {} {
   click_1_text
   b_push
}

proc double_3_text {} {
   click_1_text
   b_close
}

proc double_1_edge {} {
   click_1_edge
   b_open
}

proc double_2_edge {} {
   click_1_edge
   b_push
}

proc double_3_edge {} {
   click_3_edge
   b_open
}

proc double_1_fold {} {
   click_1_fold
   draw
}

proc highlight id {
   global gCanvas current is_mono show_source
   if {$is_mono} {
      $gCanvas itemconfigure $current -width 1
      $gCanvas itemconfigure $id      -width 3
   } else {
      $gCanvas itemconfigure $current -fill white
      $gCanvas itemconfigure $id      -fill SkyBlue
   }
   set current $id
   if {$show_source == 1} update_src

   # make current item visible

   set coords [$gCanvas coords $current]
   set x1 [lindex $coords 0]
   set y1 [lindex $coords 1]
   set x2 [lindex $coords 2]
   set y2 [lindex $coords 3]
   set region [lindex [$gCanvas configure -scrollregion] 4]
   set x3 [lindex $region 0]
   set y3 [lindex $region 1]
   set x4 [lindex $region 2]
   set y4 [lindex $region 3]
   set x5 [expr {$x3 + ($x4 - $x3) * [lindex [$gCanvas xview] 0]}]
   set y5 [expr {$y3 + ($y4 - $y3) * [lindex [$gCanvas yview] 0]}]
   set x6 [expr {$x3 + ($x4 - $x3) * [lindex [$gCanvas xview] 1]}]
   set y6 [expr {$y3 + ($y4 - $y3) * [lindex [$gCanvas yview] 1]}]
   if {! ($x5 <= $x1 && $x2 <= $x6 && $y5 <= $y1 && $y2 <= $y6)} center
}

proc draw_node {x y adr label} {
   global gCanvas dx dy width height width2 height2 IdToAdr trunc label_font
   set x [expr {$x * $dx}]
   set y [expr {$y * $dy}]
   set id [$gCanvas create rect $x $y [expr {$x + $width}] [expr {$y + $height}] \
      -tags {tree rect} -fill white]
   $gCanvas create text [expr {$x + $width2}] [expr {$y + $height2}] \
      -tags {tree text} -text [string range $label 0 $trunc] -font $label_font
   set IdToAdr($id) $adr
}

proc draw_edge {x1 y1 x2 y2 {f 0}} {
   global gCanvas dx dy width height width2 height2
   if {$y1 < $y2} {
     if {$f} {
      set id [$gCanvas create line [expr {$x1 * $dx + $width2}] [expr {$y1 * $dy + $height}] \
	 [expr {$x2 * $dx + $width2}] [expr {$y2 * $dy - $height2}] -arrow last -tags {tree fold}]
     } else {
      set id [$gCanvas create line [expr {$x1 * $dx + $width2}] [expr {$y1 * $dy + $height}] \
	 [expr {$x2 * $dx + $width2}] [expr {$y2 * $dy}] -arrow last -tags {tree edge}]
     }
   } elseif {$y1 > $y2} {
      set id [$gCanvas create line [expr {$x1 * $dx + $width2}] [expr {$y1 * $dy}] \
	 [expr {$x2 * $dx + $width2}] [expr {$y2 * $dy + $height}] -arrow last -tags {tree edge}]
   } elseif {$x1 < $x2} {
      set id [$gCanvas create line [expr {$x1 * $dx + $width}] [expr {$y1 * $dy + $height2}] \
	 [expr {$x2 * $dx}] [expr {$y2 * $dy + $height2}] -arrow last -tags {tree fold}]
   } elseif {$x1 > $x2} {
      set id [$gCanvas create line [expr {$x1 * $dx}] [expr {$y1 * $dy + $height2}] \
	 [expr {$x2 * $dx + $width}] [expr {$y2 * $dy + $height2}] -arrow last -tags {tree}]
   } else {
      set id [$gCanvas create oval [expr {$x1 * $dx}] [expr {$y1 * $dy - $height}] \
	 [expr {$x2 * $dx + $width}] [expr {$y2 * $dy}] -tags {tree}]
   }
   $gCanvas lower $id
}

proc draw_attr adr {
   global attr_cnt attr_font
   set r [put_attr $adr]
   if {$r != ""} {
      error $r
      return
   }
   set w .attr$attr_cnt
   if {! [winfo exists $w]} {
      toplevel $w
      wm minsize $w 1 1
      frame $w.frame -relief raised
      pack $w.frame -side bottom -fill both -expand yes

      scrollbar $w.frame.yscroll -relief sunken -command "$w.frame.list yview"
      scrollbar $w.frame.xscroll -relief sunken -command "$w.frame.list xview" \
	 -orient horizontal
      listbox $w.frame.list -width 40 -height 12 -relief flat -setgrid 1 \
	 -yscroll "$w.frame.yscroll set" -xscroll "$w.frame.xscroll set" \
	 -font $attr_font
      pack $w.frame.yscroll -side right  -fill y
      pack $w.frame.xscroll -side bottom -fill x
      pack $w.frame.list -expand yes -fill both
      bind $w l b_close
      bind $w s b_close
      bind $w <Escape> "destroy $w"
      bind $w q "destroy ."
      bind $w x "destroy ."
      bind $w <Up>    "$w.frame.list yview scroll -1 pages"
      bind $w <Down>  "$w.frame.list yview scroll  1 pages"
      bind $w <Prior> "$w.frame.list yview scroll -1 pages"
      bind $w <Next>  "$w.frame.list yview scroll  1 pages"
   } else {
      $w.frame.list delete 0 end
   }
   bind $w.frame.list <ButtonRelease-1> "draw_attr_2 $w $adr"
   set file [open yyNode]
   gets $file s
   wm title $w "Attributes of $s @ $adr"
   wm iconname $w $s
   $w.frame.list insert end $s
   $w.frame.list insert end ""
   while {[gets $file s] >= 0} { $w.frame.list insert end $s }
   close $file
   raise $w
}

proc draw_attr_2 {w adr} {
   if {[llength [$w.frame.list curselection]] > 0} {
      set idx [lindex [$w.frame.list curselection] 0]
      if {$idx > 1} {
	 set e -
	 scan [$w.frame.list get $idx] "%s = %s %s" n a e
	 if {[string compare $e *] == 0} {
	    draw_attr $a
	    set id [search $a]
	    if {$id > 0} { highlight $id }
	 } elseif {[string compare $e +] == 0} {
	    draw_subtree $a
	 } else {
	    call_attr $adr $n
	 }
      }
   }
}

proc b_open {} {
   global IdToAdr current
   if {[lsearch -exact [array names IdToAdr] $current] >= 0} {
      draw_attr $IdToAdr($current)
   }
}

proc b_push {} {
   global attr_cnt
   incr attr_cnt
   b_open
}

proc b_close {} {
   global attr_cnt
   set w .attr$attr_cnt
   if {[winfo exists $w]} { destroy $w }
   if {$attr_cnt > 0} { incr attr_cnt -1 }
}

proc re_scale new_scale {
   global gCanvas old_scale marginx marginy
   set new_scale [expr {pow (2, $new_scale)}]
   set sc [expr {$new_scale / $old_scale}]
   set old_scale $new_scale

   set region [lindex [$gCanvas configure -scrollregion] 4]
   set x1 [expr {[lindex $region 0] + $marginx}]
   set y1 [expr {[lindex $region 1] + $marginy}]
   set x2 [expr {[lindex $region 2] - $marginx}]
   set y2 [expr {[lindex $region 3] - $marginy}]

   set x0 [$gCanvas canvasx [expr {[winfo width  $gCanvas] * .5}]]
   set y0 [$gCanvas canvasy [expr {[winfo height $gCanvas] * .5}]]
   set x1 [expr {int (($x1 - $x0) * $sc + $x0 - $marginx)}]
   set y1 [expr {int (($y1 - $y0) * $sc + $y0 - $marginy)}]
   set x2 [expr {int (($x2 - $x0) * $sc + $x0 + $marginx)}]
   set y2 [expr {int (($y2 - $y0) * $sc + $y0 + $marginy)}]

   $gCanvas scale tree $x0 $y0 $sc $sc
   $gCanvas configure -scrollregion "$x1 $y1 $x2 $y2"
}

proc draw {} {
   global IdToAdr current
   draw_subtree $IdToAdr($current)
}

proc goto {{v .goto}} {
   global g absolute_path default_fn
   set g $v.frame
   if {! [winfo exists $v]} {
      toplevel $v
      wm title $v "Goto"
      wm iconname $v "Goto"

      frame  $g -relief flat
      pack   $g -side top -fill both -anchor center -padx 1c -pady 0.5c

      frame  $g.1
      pack   $g.1 -side top -pady 2 -anchor w
      label  $g.1.label -text "Line Number:" -width 16 -anchor e
      entry  $g.1.entry -width 6 -relief sunken
      pack   $g.1.label $g.1.entry -side left

      frame  $g.2
      pack   $g.2 -side top -pady 2 -anchor w -fill x
      label  $g.2.label -text "File Name:" -width 16 -anchor e
      entry  $g.2.entry -width 32 -relief sunken
      button $g.2.but -text "Choose ..." -command "gotoFileDialog $v $g.2.entry"
      pack   $g.2.label -side left
      pack   $g.2.entry -side left -expand yes -fill x
      pack   $g.2.but   -side left -padx 10

      frame  $g.3
      pack   $g.3 -side top -pady 2 -anchor w
      label  $g.3.label -text "Use Absolute Path:" -width 16 -anchor e
      checkbutton $g.3.strict -variable absolute_path -onvalue 1 -offvalue 0 \
	 -command "changePath $g.2.entry"
      pack   $g.3.label $g.3.strict -side left

      frame  $v.buttons
      pack   $v.buttons -side bottom -pady 2 -anchor center
      button $v.buttons.ok -width 5 -text OK -command "gotoOkAction $v" -default active
      button $v.buttons.cancel -text cancel -command "focus .; destroy $v"
      pack   $v.buttons.ok $v.buttons.cancel -side left -padx 2

      bind $v <Return> "gotoOkAction $v"
      bind $v <Escape> "focus .; destroy $v"
   }

   proc gotoOkAction v {
      global g IdToAdr default_fn absolute_path
      set file [$g.2.entry get]
      if {$default_fn == ""} {
         set default_fn $file
	 set absolute_path [has_wd $default_fn]
      }
      set adr [search_pos $IdToAdr(1) [$g.1.entry get] $file]
      set id [search $adr]
      focus .
      destroy $v
      if {$id > 0} {
	 highlight $id
      } else {
	 draw_subtree $adr
      }
   }

   proc gotoFileDialog {w ent} {
      global absolute_path
      set file [map_path [tk_getOpenFile -parent $w]]
      if {[string compare $file ""]} {
	 if {! $absolute_path} { set file [chop_wd $file] }
	 $ent delete 0 end
	 $ent insert 0 $file
	 $ent xview end
      }
   }

   proc changePath ent {
      global absolute_path
      set file [$ent get]
      if {[string compare $file ""]} {
	 if {! $absolute_path} {
	    set file [chop_wd $file]
	 } else {
	    set file [add_wd $file]
	 }
	 $ent delete 0 end
	 $ent insert 0 $file
	 $ent xview end
      }
   }

   $g.2.entry delete 0 end
   $g.2.entry insert 0 $default_fn
   changePath $g.2.entry
   focus $g.1.entry
   raise $v
}

proc print {} {
   global gCanvas
   set types {
      {"Postscript Files"	.ps}
      {"All Files"		*}
   }
   set file [tk_getSaveFile -filetypes $types -parent . \
      -initialfile tree -defaultextension .ps]
   if {[string compare $file ""]} {
      $gCanvas postscript -file $file
   }
}

proc home {} {
   global gCanvas current incr
   set x [lindex [$gCanvas coords $current] 0]
   set y [lindex [$gCanvas coords $current] 1]
   set region [lindex [$gCanvas configure -scrollregion] 4]
   set x1 [lindex $region 0]
   set y1 [lindex $region 1]
   set x2 [lindex $region 2]
   set y2 [lindex $region 3]
   $gCanvas xview moveto [expr {($x - $x1 - $incr) / ($x2 - $x1)}]
   $gCanvas yview moveto [expr {($y - $y1 - $incr) / ($y2 - $y1)}]
}

proc top {} {
   global gCanvas current incr width2
   set x [lindex [$gCanvas coords $current] 0]
   set y [lindex [$gCanvas coords $current] 1]
   set region [lindex [$gCanvas configure -scrollregion] 4]
   set x1 [lindex $region 0]
   set y1 [lindex $region 1]
   set x2 [lindex $region 2]
   set y2 [lindex $region 3]
   $gCanvas xview moveto [expr {($x + $width2 - $x1 - [winfo width  $gCanvas] / 2) / ($x2 - $x1)}]
   $gCanvas yview moveto [expr {($y - $y1 - $incr) / ($y2 - $y1)}]

}

proc center {} {
   global gCanvas current width2 height2
   set x [lindex [$gCanvas coords $current] 0]
   set y [lindex [$gCanvas coords $current] 1]
   set region [lindex [$gCanvas configure -scrollregion] 4]
   set x1 [lindex $region 0]
   set y1 [lindex $region 1]
   set x2 [lindex $region 2]
   set y2 [lindex $region 3]
   $gCanvas xview moveto [expr {($x + $width2 - $x1 - [winfo width  $gCanvas] / 2) / ($x2 - $x1)}]
   $gCanvas yview moveto [expr {($y + $height2 - $y1 - [winfo height $gCanvas] / 2) / ($y2 - $y1)}]
}

proc my_info {} {
#  puts [::sgxCP::print]
   home
}

proc search adr {
   global IdToAdr
   set search_id [array startsearch IdToAdr]
   while {[array anymore IdToAdr $search_id] > 0} {
      set id [array nextelement IdToAdr $search_id]
      if {$IdToAdr($id) == $adr} { break }
   }
   array donesearch IdToAdr $search_id
   if {$IdToAdr($id) == $adr} { return $id }
   return 0
}

proc help {{w .help}} {
   if {[winfo exists $w]} {
      destroy $w
      return
   }
   global help_font
   catch { destroy $w }
   toplevel $w
   wm title $w "Tree Browser - Help Information"
   wm iconname $w "Tree Help"
   text $w.t -relief flat -bd 2 -yscrollcommand "$w.s set" -setgrid true \
      -background white -font $help_font
   scrollbar $w.s -relief sunken -command "$w.t yview"
   pack $w.s -side right -fill y
   pack $w.t -expand yes -fill both
   foreach c {<Destroy> <Escape> c e q x} { bind $w $c "destroy $w" }
   bind $w <Up>    "$w.t yview scroll -1 pages"
   bind $w <Down>  "$w.t yview scroll  1 pages"
   bind $w <Prior> "$w.t yview scroll -1 pages"
   bind $w <Next>  "$w.t yview scroll  1 pages"
   $w.t insert 0.0 {
 ----------------------------------------------------------------------------
 Mouse actions in browser window          Meaning
 ----------------------------------------------------------------------------
 single click with any    button on node  select this node
 single click with left   button on edge  select node at arrow head
 single click with right  button on edge  select node at arrow tail
 single click with any    button on folding indicator
                                          select node at arrow tail

 double click with left   button on node  select and open  this node =
                                             show attributes in a subwindow
 double click with middle button on node  select and open  this node =
                                             show attributes in new subwindow
 double click with right  button on node  select and close this node =
                                             dismiss subwindow with attributes
 double click with left   button on edge  select and open node at arrow head =
                                             show attributes in a subwindow
 double click with middle button on edge  select and open node at arrow head =
                                             show attributes in new subwindow
 double click with right  button on edge  select and open node at arrow tail =
                                             show attributes in a subwindow
 double click with any    button on folding indicator
                                          select node at arrow tail and
                                             start new browser at selected node

 press, move, and release middle button   move graph at high speed
 ----------------------------------------------------------------------------
 Mouse actions in attribute window        Meaning
 ----------------------------------------------------------------------------
 single click with left button on child   select and open child node =
    (indicated by an asterisk '*')           show attributes in a subwindow
 single click with left button on attribute (tree-valued)
    (indicated by a plus '+')             start new browser at attribute value
 single click with left button on attribute (non tree-valued)
                                             trigger application specific action

 press, move, and release middle button   move attribute display at high speed
 ----------------------------------------------------------------------------
 Mouse actions in source window           Meaning
 ----------------------------------------------------------------------------
 single click with left button on line    select node corresponding to line and
                                             position selected node at center

 press, move, and release middle button   move source at high speed
 ----------------------------------------------------------------------------
 Menu actions in main window              Meaning
 ----------------------------------------------------------------------------
 goto                                     select node at certain line number
 root                                     select root node
 home                                     position selected node at home
 top                                      position selected node at top
 center                                   position selected node at center
 open                                     open selected node =
                                             show attributes in a subwindow
 push                                     open selected node =
                                             show attributes in new subwindow
 close                                    dismiss subwindow with attributes
 draw                                     start a new browser at selected node
 source                                   display source file with highlighting
 print                                    dump window in Postscript to a file
 help                                     display this help information
 config                                   configure tree browser
 exit                                     exit tree browser
 ----------------------------------------------------------------------------
 Zoom with the scale in the menu bar. Zooming is performed relative to the
 center of the window. Zooming is logarithmic:

     2.0 = 400 %
     1.0 = 200 %
     0.0 = 100 %
    -1.0 =  50 %
    -2.0 =  25 %

 The labels of the nodes are the names of the node types.
 They are truncated to the first characters in order to fit.
 After opening a node the full information becomes visible in a subwindow.
 Arrows at the right-hand side of a node or without a target node indicate
 omitted subtrees. These arrows are called folding indicators.
 By default, nodes to a maximal depth of 6 are shown.
 For nodes in lists another limit with a default of 256 is valid.
 These limits can be changed with the operation 'config' from the menu.
 The new limits will be effective for all subsequent 'draw' operations.}
   $w.t configure -state disabled
}

proc show_src {} {
   global show_source current
   if {$show_source == 0} {
      set show_source 1
      highlight $current
   } else {
      destroy_src
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
   foreach c {<Destroy> c e q s x} { bind $w $c destroy_src }
   bind $w <Up>    "$w.t yview scroll -1 pages"
   bind $w <Down>  "$w.t yview scroll  1 pages"
   bind $w <Prior> "$w.t yview scroll -1 pages"
   bind $w <Next>  "$w.t yview scroll  1 pages"
   bind $w.t <ButtonRelease-1> "goto_src"
}

proc destroy_src {} {
   global show_source current_fn src_fn g_src
   destroy $g_src
   set show_source 0
   set current_fn ""
   set src_fn ""
}

proc update_src {} {
   global IdToAdr current current_fn src_fn default_fn min max show_source g_src
   set min 1000000000
   set max 0
   set src_fn ""
   set r [put_attr $IdToAdr($current)]
   if {$r != ""} {
      error $r
      return
   }
   set file [open yyNode]
   gets $file s
   while {[gets $file s] >= 0} {
      if {[scan $s {%*s = "%[^"]%*c: %d, %d} fn line column] == 3} {
	 if {$src_fn == ""} { set src_fn $fn }
      } elseif {[scan $s {%*s = %d, %d %s} line column fn] == 3} {
	 set line 0
      } elseif {[scan $s {%*s = %d, %d} line column] != 2} {
	 set line 0
      }
      if {$line && $column} {
	 set pos [expr {$line * 1000 + $column}]
	 if {$pos < $min} { set min $pos }
	 if {$pos > $max} { set max $pos }
      }
   }
   close $file
   if {$src_fn == ""} {
      if {$current_fn != ""} {
	 set src_fn $current_fn
      } elseif {$default_fn != ""} {
	 set src_fn $default_fn
      } else {
	 set src_fn [map_path [tk_getOpenFile -parent .]]
	 if {! [string compare $src_fn ""]} {
	    set show_source 0
	    return
	 }
      }
   }

   set w $g_src
   if {! [winfo exists $w]} create_src
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
      if {$default_fn == ""} {
	 global absolute_path
	 set default_fn $current_fn
	 set absolute_path [has_wd $default_fn]
      }
      wm title $w "Source File: $src_fn"
   }
   if {$max} {
      set bpos "[expr {$min / 1000}].[expr {$min % 1000 - 1}]"
      $w.t tag configure mark -background orange
      $w.t tag add mark $bpos "[expr {$max / 1000}].[expr {$max % 1000}]"
      $w.t see $bpos
   }
   raise $w
}

proc textLoadFile {w filename} {
   set file [open $filename]
   $w delete 1.0 end
   while {![eof $file]} { $w insert end [read $file 10000] }
   close $file
}

proc goto_src {} {
   global g_src IdToAdr current_fn
   scan [$g_src.t index insert] "%d.%d" l c
   set adr [search_pos $IdToAdr(1) $l $current_fn]
   set id [search $adr]
   if {$id > 0} {
      highlight $id
   } else {
      draw_subtree $adr
   }
}

proc config {{w .cfg}} {
   global f fields vars defaults mins tcl_platform is_unix
   set f $w.frame
   if {! [winfo exists $w]} {
      toplevel $w
      wm title $w "Configure Tree Browser"
      wm iconname $w "Configure"

      set fields   {{} {Max. Depth:} {Max. Length:} {Box Width:} {Box Height:} {Source File:}}
      set vars     {{} depth length width height default_fn}
      set defaults {{} 6 256 60 20}
      set mins     {{} 1 1 20 10}

      frame  $f -relief flat
      pack   $f -side top -fill both -anchor center -padx 1c -pady 0.5c

      foreach i {1 2 3 4} {
	 frame  $f.$i
	 pack   $f.$i -side top -pady 2 -anchor w
	 label  $f.$i.label -text [lindex $fields $i] -width 12 -anchor e
	 entry  $f.$i.entry -width 6 -relief sunken
	 pack   $f.$i.label $f.$i.entry -side left
      }

      set i 5
	 frame  $f.$i
	 pack   $f.$i -side top -pady 2 -anchor w -fill x
	 label  $f.$i.label -text [lindex $fields $i] -width 12 -anchor e
	 entry  $f.$i.entry -width 32 -relief sunken
	 button $f.$i.but -text "Choose ..." -command "fileDialog $w $f.$i.entry"
	 pack   $f.$i.label -side left
	 pack   $f.$i.entry -side left -expand yes -fill x
	 pack   $f.$i.but   -side left -padx 10

      if {$is_unix} {
	 set i 6
	 frame  $f.$i
	 pack   $f.$i -side top -pady 2 -anchor w
	 label  $f.$i.label -text "Motif Style:" -width 12 -anchor e
	 checkbutton $f.$i.strict -variable tk_strictMotif -onvalue 1 -offvalue 0
	 pack   $f.$i.label $f.$i.strict -side left
      }

      frame  $w.buttons
      pack   $w.buttons -side bottom -pady 2 -anchor center
      button $w.buttons.ok     -text OK     -command "okAction $w" \
	 -width 5  -default active
      button $w.buttons.reset  -text reset  -command resetAction
      button $w.buttons.clear  -text clear  -command clearAction
      button $w.buttons.cancel -text cancel -command "destroy $w"
      pack   $w.buttons.ok $w.buttons.reset $w.buttons.clear $w.buttons.cancel \
	 -side left -padx 2

      bind $w <Return> "okAction $w"
      bind $w <Escape> "focus .; destroy $w"
   }

   proc okAction w {
      global f depth length width height vars mins default_fn absolute_path
      foreach i {1 2 3 4} {
	 if {[$f.$i.entry get] < [lindex $mins $i]} {
	    set [lindex $vars $i] [lindex $mins $i]
	 } else {
	    set [lindex $vars $i] [$f.$i.entry get]
	 }
      }
      set default_fn [$f.5.entry get]
      set absolute_path [has_wd $default_fn]
      set_param $depth $length $width $height $default_fn
      focus .
      destroy $w
   }

   proc clearAction {} {
      global f
      foreach i {1 2 3 4 5} { $f.$i.entry delete 0 end }
   }

   proc resetAction {} {
      global f defaults
      clearAction
      foreach i {1 2 3 4} { $f.$i.entry insert 0 [lindex $defaults $i] }
   }

   proc presetAction {} {
      global f vars depth length width height default_fn
      clearAction
      foreach i {1 2 3 4 5} { eval $f.$i.entry insert 0 $[lindex $vars $i] }
   }

   proc fileDialog {w ent} {
      set file [map_path [tk_getOpenFile -parent $w]]
      if {[string compare $file ""]} {
	 $ent delete 0 end
	 $ent insert 0 $file
	 $ent xview end
      }
   }

   presetAction
   focus $f.1.entry
   raise $w
}

proc map_path file {
   global is_unix
   if {$is_unix} {
      return $file
   } else {
      return [string map {/ \\} $file]
   }
}

proc get_wd {} {
   return [map_path [pwd]]
}

proc has_wd file {
   set wd [get_wd]
   set len [string length $wd]
   set s [string range $file 0 [expr {$len - 1}]]
   return [expr {[string compare $s $wd] == 0}]
}

proc chop_wd file {
   if {[has_wd $file]} {
      set len [string length [get_wd]]
      return [string range $file [expr {$len + 1}] end]
   } else {
      return $file
   }
}

proc add_wd file {
   if {[has_wd $file]} {
      return $file
   } else {
      global is_unix
      if {$is_unix} {
	 return [get_wd]/$file
      } else {
	 return [get_wd]\\$file
      }
   }
}

set marginx	1280
set marginy	1024
set current	1
set old_scale	1
set incr	32
set is_mono	[expr {[winfo depth .] == 1}]
set attr_cnt	0
set show_source	0
set current_fn	""
set src_fn	""
set default_fn	""
set g_src	.source
set is_unix	[expr {[string compare $tcl_platform(platform) unix] == 0}]

if {$is_unix} {
  set geometry 1000x800
  if {$tcl_version < 8.5} {
    set label_font	{helvetica 10}
    set attr_font	9x15bold
    set help_font	9x15bold
    set src_font	9x15bold
  } else {
    set label_font	{sans-serif 10}
    set attr_font	{monospace 11}
    set help_font	{monospace 11}
    set src_font	{monospace 11}
  }
} else {
   set geometry 800x550
   set label_font	{arial 8 normal}
   set attr_font	{courier 10 normal}
   set help_font	{courier 10 normal}
   set src_font		{courier 10 normal}
}

catch { source ~/.tree.tcl }

# uncomment to use debugger

# }
