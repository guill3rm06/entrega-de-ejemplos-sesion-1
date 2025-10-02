.PHONY: clean All

All:
	@echo "----------Building project:[ EjemploColas - Debug ]----------"
	@cd "EjemploColas" && "$(MAKE)" -f  "EjemploColas.mk"
clean:
	@echo "----------Cleaning project:[ EjemploColas - Debug ]----------"
	@cd "EjemploColas" && "$(MAKE)" -f  "EjemploColas.mk" clean
