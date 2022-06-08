/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSELA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)
   
// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)
   
// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)
   
// get/set RC1 aliases
#define LED0_TRIS                 TRISCbits.TRISC1
#define LED0_LAT                  LATCbits.LATC1
#define LED0_PORT                 PORTCbits.RC1
#define LED0_WPU                  WPUCbits.WPUC1
#define LED0_OD                   ODCONCbits.ODCC1
#define LED0_ANS                  ANSELCbits.ANSELC1
#define LED0_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED0_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED0_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED0_GetValue()           PORTCbits.RC1
#define LED0_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED0_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)
   
// get/set RC2 aliases
#define Analog_Input_TRIS                 TRISCbits.TRISC2
#define Analog_Input_LAT                  LATCbits.LATC2
#define Analog_Input_PORT                 PORTCbits.RC2
#define Analog_Input_WPU                  WPUCbits.WPUC2
#define Analog_Input_OD                   ODCONCbits.ODCC2
#define Analog_Input_ANS                  ANSELCbits.ANSELC2
#define Analog_Input_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define Analog_Input_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define Analog_Input_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define Analog_Input_GetValue()           PORTCbits.RC2
#define Analog_Input_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define Analog_Input_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define Analog_Input_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define Analog_Input_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define Analog_Input_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define Analog_Input_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define Analog_Input_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define Analog_Input_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)
   
// get/set RC3 aliases
#define IN_PLUS_OPAMP_TRIS                 TRISCbits.TRISC3
#define IN_PLUS_OPAMP_LAT                  LATCbits.LATC3
#define IN_PLUS_OPAMP_PORT                 PORTCbits.RC3
#define IN_PLUS_OPAMP_WPU                  WPUCbits.WPUC3
#define IN_PLUS_OPAMP_OD                   ODCONCbits.ODCC3
#define IN_PLUS_OPAMP_ANS                  ANSELCbits.ANSELC3
#define IN_PLUS_OPAMP_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IN_PLUS_OPAMP_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IN_PLUS_OPAMP_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IN_PLUS_OPAMP_GetValue()           PORTCbits.RC3
#define IN_PLUS_OPAMP_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IN_PLUS_OPAMP_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IN_PLUS_OPAMP_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IN_PLUS_OPAMP_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IN_PLUS_OPAMP_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IN_PLUS_OPAMP_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IN_PLUS_OPAMP_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IN_PLUS_OPAMP_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)
   
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/