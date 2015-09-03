################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tests/main.cpp \
../tests/test_class.cpp 

OBJS += \
./tests/main.o \
./tests/test_class.o 

CPP_DEPS += \
./tests/main.d \
./tests/test_class.d 


# Each subdirectory must supply rules for building sources it contributes
tests/%.o: ../tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/dkirby/CS585/external" -I"/home/dkirby/CS585/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


