################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf
OUTPUT_FILES :="kaede_cc.sni" "kaede_cc.dbg" "kaede_cc.map" "kaede_cc.x" "kaede_cc.lbp" "kaede_cc.bls" "kaede_cc.libelf" "kaede_cc.rel" "kaede_cc.lbk" "kaede_cc.abs" "kaede_cc.jmp" "kaede_cc.fsy" "kaede_cc.mi" "kaede_cc.udm" "kaede_cc_l.ud" "kaede_cc_c.ud" "kaede_cc_lbg.ud" "src/clock.asm" "src/clock.p" "src/clock.pp" "src/clock.src" "src/clock.lst" "src/clock.prn" "src/clock.i" "src/clock.drv.ud" "src/clock.frt.ud" "src/clock.asm.ud" "src/kaede_cc.asm" "src/kaede_cc.p" "src/kaede_cc.pp" "src/kaede_cc.src" "src/kaede_cc.lst" "src/kaede_cc.prn" "src/kaede_cc.i" "src/kaede_cc.drv.ud" "src/kaede_cc.frt.ud" "src/kaede_cc.asm.ud" "src/pin.asm" "src/pin.p" "src/pin.pp" "src/pin.src" "src/pin.lst" "src/pin.prn" "src/pin.i" "src/pin.drv.ud" "src/pin.frt.ud" "src/pin.asm.ud" "src/uart.asm" "src/uart.p" "src/uart.pp" "src/uart.src" "src/uart.lst" "src/uart.prn" "src/uart.i" "src/uart.drv.ud" "src/uart.frt.ud" "src/uart.asm.ud" "generate/dbsct.asm" "generate/dbsct.p" "generate/dbsct.pp" "generate/dbsct.src" "generate/dbsct.lst" "generate/dbsct.prn" "generate/dbsct.i" "generate/dbsct.drv.ud" "generate/dbsct.frt.ud" "generate/dbsct.asm.ud" "generate/hwsetup.asm" "generate/hwsetup.p" "generate/hwsetup.pp" "generate/hwsetup.src" "generate/hwsetup.lst" "generate/hwsetup.prn" "generate/hwsetup.i" "generate/hwsetup.drv.ud" "generate/hwsetup.frt.ud" "generate/hwsetup.asm.ud" "generate/intprg.asm" "generate/intprg.p" "generate/intprg.pp" "generate/intprg.src" "generate/intprg.lst" "generate/intprg.prn" "generate/intprg.i" "generate/intprg.drv.ud" "generate/intprg.frt.ud" "generate/intprg.asm.ud" "generate/resetprg.asm" "generate/resetprg.p" "generate/resetprg.pp" "generate/resetprg.src" "generate/resetprg.lst" "generate/resetprg.prn" "generate/resetprg.i" "generate/resetprg.drv.ud" "generate/resetprg.frt.ud" "generate/resetprg.asm.ud" "generate/sbrk.asm" "generate/sbrk.p" "generate/sbrk.pp" "generate/sbrk.src" "generate/sbrk.lst" "generate/sbrk.prn" "generate/sbrk.i" "generate/sbrk.drv.ud" "generate/sbrk.frt.ud" "generate/sbrk.asm.ud" "generate/vecttbl.asm" "generate/vecttbl.p" "generate/vecttbl.pp" "generate/vecttbl.src" "generate/vecttbl.lst" "generate/vecttbl.prn" "generate/vecttbl.i" "generate/vecttbl.drv.ud" "generate/vecttbl.frt.ud" "generate/vecttbl.asm.ud"

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/subdir.mk

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
ifneq ($(strip $(CCM_DEPS)),)
-include $(CCM_DEPS)
endif 
ifneq ($(strip $(CXXM_DEPS)),)
-include $(CXXM_DEPS)
endif 
ifneq ($(strip $(C++M_DEPS)),)
-include $(C++M_DEPS)
endif 
ifneq ($(strip $(CP_DEPS)),)
-include $(CP_DEPS)
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
all: $(LINKER_OUTPUT_OUTPUTS) kaede_cc.x kaede_cc.udm

	@echo 'Build complete.'

kaede_cc.abs: $(OBJS)  $(ALL_ASMS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) 
	@echo 'Invoking: Linker'
	@echo 'Building target:'
	@echo Linkerkaede_cc.tmp=
	@sed -e "s/^/    /" "Linkerkaede_cc.tmp"
	rlink -subcommand="Linkerkaede_cc.tmp"
	@echo 'Finished building target:'
	@echo ''


kaede_cc.lib: 
	@echo 'Invoking: Library Generator'
	@echo LibraryGeneratorkaede_cc.tmp=
	@sed -e "s/^/    /" "LibraryGeneratorkaede_cc.tmp"
	lbgrx -subcommand="LibraryGeneratorkaede_cc.tmp"
	@echo 'Finished building:'
	@echo ''

kaede_cc.x: kaede_cc.abs
		-C:\Users\sata\.eclipse\com.renesas.platform_1435879475\Utilities\\ccrx\renesas_cc_converter kaede_cc.abs kaede_cc.x

kaede_cc.udm: $(LINKER_OUTPUT_OUTPUTS)
	udcollector -subcommand=udSubcommand.tmp -output=kaede_cc.udm

# Other Targets
clean:
	-$(file > clean_file.tmp, $(LINKER_OUTPUT_OUTPUTS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(OBJS) $(C_DEPS) $(CPP_DEPS) $(ASM_DEPS) $(DSP_DEPS) $(OUTPUT_FILES))
	-@ xargs -P 2 -s 26000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	@echo ''
	@echo 'Clean complete.'

.PHONY: all clean 
-include ../makefile.targets

.SILENT: