################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/lists/fsl_component_generic_list.c 

C_DEPS += \
./component/lists/fsl_component_generic_list.d 

OBJS += \
./component/lists/fsl_component_generic_list.o 


# Each subdirectory must supply rules for building sources it contributes
component/lists/%.o: ../component/lists/%.c component/lists/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MK64FN1M0VLL12 -DCPU_MK64FN1M0VLL12_cm4 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\board" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\source" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\utilities" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\drivers" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\device" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\component\serial_manager" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\component\lists" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\CMSIS" -I"C:\MCUXpresso\UART Workspace\T9_LCD_Nokia\component\uart" -O0 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-component-2f-lists

clean-component-2f-lists:
	-$(RM) ./component/lists/fsl_component_generic_list.d ./component/lists/fsl_component_generic_list.o

.PHONY: clean-component-2f-lists

