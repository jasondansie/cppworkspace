.PHONY: clean All

All:
	@echo "----------Building project:[ cppSection11Challenge - Debug ]----------"
	@cd "cppSection11Challenge" && "$(MAKE)" -f  "cppSection11Challenge.mk"
clean:
	@echo "----------Cleaning project:[ cppSection11Challenge - Debug ]----------"
	@cd "cppSection11Challenge" && "$(MAKE)" -f  "cppSection11Challenge.mk" clean
