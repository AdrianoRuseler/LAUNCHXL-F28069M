################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"C:/ti/controlSUITE/device_support/f2806x/v151/F2806x_headers/cmd/F2806x_Headers_nonBIOS.cmd" \
"./Example_2806xLEDBlink.obj" \
"./Source/F2806x_CodeStartBranch.obj" \
"./Source/F2806x_CpuTimers.obj" \
"./Source/F2806x_DefaultIsr.obj" \
"./Source/F2806x_GlobalVariableDefs.obj" \
"./Source/F2806x_PieCtrl.obj" \
"./Source/F2806x_PieVect.obj" \
"./Source/F2806x_SysCtrl.obj" \
"./Source/F2806x_usDelay.obj" \
"../F28069.cmd" \
"../Libs/IQmath_fpu32.lib" \
"../Libs/rts2800_fpu32_fast_supplement.lib" \
$(GEN_CMDS__FLAG) \
-l"C:/Users/Administrator/Documents/GitHub/LAUNCHXL-F28069M/Example_2806xLEDBlink/Libs/IQmath_fpu32.lib" \
-l"C:/Users/Administrator/Documents/GitHub/LAUNCHXL-F28069M/Example_2806xLEDBlink/Libs/rts2800_fpu32_fast_supplement.lib" \
-lrts2800_fpu32.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Libs/subdir_vars.mk
-include Source/subdir_vars.mk
-include subdir_rules.mk
-include Libs/subdir_rules.mk
-include Source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Example_2806xLEDBlink.out \

EXE_OUTPUTS__QUOTED += \
"Example_2806xLEDBlink.out" \

BIN_OUTPUTS += \
Example_2806xLEDBlink.hex \

BIN_OUTPUTS__QUOTED += \
"Example_2806xLEDBlink.hex" \


# All Target
all: Example_2806xLEDBlink.out

# Tool invocations
Example_2806xLEDBlink.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --cla_support=cla0 --vcu_support=vcu0 -g --define="_DEBUG" --define="LARGE_MODEL" --define=FLASH=1 --define=DEBUG=1 --quiet --issue_remarks --verbose_diagnostics --diag_warning=225 --diag_suppress=10063 --output_all_syms --cdebug_asm_data -z -m"Example_2806xLEDBlink.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/lib" -i"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/include" -i"C:/Users/Administrator/Documents/GitHub/F2806x_common/lib" -i"C:/Users/libs/math/IQmath/v160/lib" -i"C:/Users/libs/math/FPUfastRTS/V100/lib" --reread_libs --priority --issue_remarks --verbose_diagnostics --xml_link_info="Example_2806xLEDBlink_linkInfo.xml" --entry_point=code_start --rom_model -o "Example_2806xLEDBlink.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

Example_2806xLEDBlink.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/bin/hex2000"  -o "Example_2806xLEDBlink.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "Example_2806xLEDBlink.d" "Source\F2806x_CpuTimers.d" "Source\F2806x_DefaultIsr.d" "Source\F2806x_GlobalVariableDefs.d" "Source\F2806x_PieCtrl.d" "Source\F2806x_PieVect.d" "Source\F2806x_SysCtrl.d" 
	-$(RM) "Example_2806xLEDBlink.obj" "Source\F2806x_CodeStartBranch.obj" "Source\F2806x_CpuTimers.obj" "Source\F2806x_DefaultIsr.obj" "Source\F2806x_GlobalVariableDefs.obj" "Source\F2806x_PieCtrl.obj" "Source\F2806x_PieVect.obj" "Source\F2806x_SysCtrl.obj" "Source\F2806x_usDelay.obj" 
	-$(RM) "Source\F2806x_CodeStartBranch.d" "Source\F2806x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

