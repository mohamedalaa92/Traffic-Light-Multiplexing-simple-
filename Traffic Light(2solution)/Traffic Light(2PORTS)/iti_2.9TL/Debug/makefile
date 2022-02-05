################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/SSD/subdir.mk
-include HAL/PORT/subdir.mk
-include HAL/LED/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
iti_2.9TL.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: iti_2.9TL.elf secondary-outputs

# Tool invocations
iti_2.9TL.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,iti_2.9TL.map -mmcu=atmega32 -o "iti_2.9TL.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

iti_2.9TL.lss: iti_2.9TL.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S iti_2.9TL.elf  >"iti_2.9TL.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: iti_2.9TL.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 iti_2.9TL.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) iti_2.9TL.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
