################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf *.sni *.dbg *.lst *.lis *.lpp *.map *.x *.lbp *.bls *.libelf *.rel *.lbk *.abs *.mi *.jmp *.fsy 1st/*.abs 1st/*.jmp 1st/*.fsy

# All of the sources participating in the build are defined here
-include sources.mk
-include generate/subdir.mk
-include src/subdir.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif 
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif 
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif 
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif 
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif 
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif 
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif 
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif 
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif 
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif 
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif 
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif 
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif 
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif 
endif

ifneq ($(strip $(SRC_UPPER_SRCS)),)
ALL_ASMS += $(SRC_UPPER_SRCS) 
endif
ifneq ($(strip $(SRC_SRCS)),)
ALL_ASMS += $(SRC_SRCS) 
endif
ifneq ($(strip $(S_UPPER_SRCS)),)
ALL_ASMS += $(S_UPPER_SRCS) 
endif
ifneq ($(strip $(S_SRCS)),)
ALL_ASMS += $(S_SRCS) 
endif


-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
LINKER_OUTPUT_OUTPUTS += \
kaede_cc.abs

LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \
kaede_cc.lib

OBJS := \
$(COMPILER_OBJS) \
$(INDIVIDUAL_COMPILER_OBJS) \
$(ASSEMBLER_OBJS) \
$(CUSTOM_OBJS)

# All Target
all: $(LINKER_OUTPUT_OUTPUTS) kaede_cc.x

	@echo 'Build complete.'

kaede_cc.abs: $(OBJS)  $(ALL_ASMS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) 
	@echo 'Invoking: Linker'
	@echo 'Building target:'
	@echo Linkerkaede_cc.tmp=
	@sed -e "s/^/    /" "Linkerkaede_cc.tmp"
	rlink -subcommand="Linkerkaede_cc.tmp"
	@echo 'Finished building target:'
	@echo.


kaede_cc.lib: 
	@echo 'Invoking: Library Generator'
	@echo LibraryGeneratorkaede_cc.tmp=
	@sed -e "s/^/    /" "LibraryGeneratorkaede_cc.tmp"
	lbgrx -subcommand="LibraryGeneratorkaede_cc.tmp"
	@echo 'Finished building:'
	@echo.

kaede_cc.x: kaede_cc.abs
		-C:\Renesas\e2_studio\Utilities\\ccrx\renesas_cc_converter.exe kaede_cc.abs kaede_cc.x

# Other Targets
clean:
	-$(RM) $(LINKER_OUTPUT_OUTPUTS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)
	-rm -rf generate/*.obj generate/*.d generate/*.asm generate/*.p generate/*.pp generate/*.src generate/*.jmp generate/*.lst generate/*.prn generate/*.i 
	-rm -rf src/*.obj src/*.d src/*.asm src/*.p src/*.pp src/*.src src/*.jmp src/*.lst src/*.prn src/*.i 
	@echo
	@echo 'Clean complete.'

.PHONY: all clean 
-include ../makefile.targets