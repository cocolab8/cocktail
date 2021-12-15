SPEC	= hag
MC	= mc
MC_CMD	= $(MC) -d ../../reuse/src

Main:	Main.mi Tree.md Tree.mi Eval.md Eval.mi
	echo p Main | $(MC_CMD)

Tree.md Tree.mi Eval.md Eval.mi:	$(SPEC)
	cg -dimDI0 $(SPEC)

test:
	cg -dimwDI $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 5 4 3 2 1 0 | Main
	cg -IT $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IX $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IY $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IZ $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo F > TraceTab
	echo 2 0 | Main
	cg -ITU $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IXU $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IYU $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main
	cg -IZU $(SPEC)
	$(MAKE) clean_bin
	echo p Main | $(MC_CMD)
	echo 2 0 | Main

clean:
	rm -f TraceTab Main Tree.* Eval.* Main.[dor] core*

clean_bin:
	rm -f Main *.[dor]
