.PHONY: clean All

All:
	@echo "----------Building project:[ DecimalToBinary - Debug ]----------"
	@cd "DecimalToBinary" && "$(MAKE)" -f  "DecimalToBinary.mk"
clean:
	@echo "----------Cleaning project:[ DecimalToBinary - Debug ]----------"
	@cd "DecimalToBinary" && "$(MAKE)" -f  "DecimalToBinary.mk" clean
