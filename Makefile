.PHONY: clean All

All:
	@echo "----------Building project:[ cppForLoop - Debug ]----------"
	@cd "cppForLoop" && "$(MAKE)" -f  "cppForLoop.mk"
clean:
	@echo "----------Cleaning project:[ cppForLoop - Debug ]----------"
	@cd "cppForLoop" && "$(MAKE)" -f  "cppForLoop.mk" clean
