/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
? [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"

/*
    Main application
*/

    
    
int main(void) {
        SYSTEM_Initialize();
        adc_result_t result;
        DAC2_SetOutput(208);   // This is the threshold value needed in order to obtain the most optimum sensitivity on the PIR sensor
        bool var = 0;
       
   while (1) {
 
        result = ADCC_GetSingleConversion(Analog_Input);
        bool CLCRead = CLC3_OutputStatusGet();
        if (CLCRead) {
            if  (var != 0) {
            printf("Person Undetected \n\r");
            LED0_SetHigh();
            var = 0;
            }  
          }  
        else  if (!CLCRead) {
            if(var == 0) { 
            printf("Person Detected \n\r");
            // printf("Result: %d \n\r", result);  // to print the detected ADC value, uncomment this line of code. 
            }
          if (T2CONbits.ON == 0) {
            LED0_Toggle();
            T2CONbits.ON = 1;
            }
         var = 1; 
          }
       }
     }


