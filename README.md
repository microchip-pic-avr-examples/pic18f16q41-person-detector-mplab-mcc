<!-- Please do not change this logo with link -->

[![MCHP](images/microchip.png)](https://www.microchip.com)

# Update the title for pic18f16q41-person-detector-mplab-mcc here

<!-- This is where the introduction to the example goes, including mentioning the peripherals used -->

## Related Documentation

* [PIC18F16Q41 Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/PIC18F06-16Q41-DataSheet-40002214C.pdf)

* [PIC18F16Q41 Device Page](https://www.microchip.com/wwwproducts/en/PIC18F16Q41)

* [PIC18F16Q41 Curiosity Nano Users Guide](https://ww1.microchip.com/downloads/en/DeviceDoc/PIC18F16Q41-Curiosity-Nano-Hardware-User-Guide-DS50003048A.pdf)
* [MPLAB Data Visualizer Plugin or other serial terminal](https://www.microchip.com/en-us/tools-resources/debug/mplab-data-visualizer)



## Software Used

* [MPLAB® X IDE v6.0.0](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-x-ide)
* [MPLAB Code Configurator (MCC)](https://www.microchip.com/mplab/mplab-code-configurator)
  * Melody Library v.x (or later)
* [MPLAB XC8 Compiler 2.36](https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-xc-compilers)

## Hardware Used

* [PIC18F16Q41 Curiosity Nano (EV26Q64A)](https://www.microchip.com/en-us/development-tool/EV26Q64A)
* [Curiosity Nano Base for Click Boards](https://www.microchip.com/en-us/development-tool/AC164162) (AC164162)
* [MikroE PIR Click Board](https://www.mikroe.com/pir-click) (MIKROE-3339)

## How does it work?

The PIR Click board uses an infrared (IR) sensor that detects the heat signature of a warm-blooded animal compared to the background temperature in the area that the sensor is facing. The IR sensor generates an analog voltage of approximately 2V for a positive detection and 0V for no detection. This analog voltage is present on the AN pin of the PIR Click board. Signal conditioning of this raw analog signal is required to reject any interference from fluorescent light sources, and to sufficiently amplify the signal to make full use of the resolution of the Analog to Digital Converter (ADC) peripheral.


![RawAnalogOutputOfPIRClick](images/RawAnalogOutputOfPIRClick.PNG)

<p>&nbsp;</p>




  #### **Demo Overview**

  The required signal conditioning for the analog signal from the PIR sensor is done using CIPs, and includes the operational amplifier (OPA), Analog to Digital Converter with Computation (ADCC), Digital to Analog Converter (DAC), Configurable Logic Cells (CLC). Timer 4 (TMR4). The use of these CLCs significantly reduces the software overhead as all of the signal conditioning is done in hardware.

  The image below shows the CIPs and their interconnections.

  \***\*\* INCLUDE SCREENSHOT of High Level  Figure  \*\*\***
  <p>&nbsp;</p>


  ###### Operational Amplifier (OPA)

The Operational Amplifier (OPA) was used to amplify the raw analog input coming from the PIR click. The raw analog output must be amplified to utilize the full resolution of the ADCC.   Using MPLABs Code Configurator (MCC), the OPA module was configured as a Non-Inverting Programmable Gain Amplifier with a gain of 1.3.  

The configuration of the OPA will be shown in the Setup Section.
<p>&nbsp;</p>


###### Comparator (CMP)

The Comparator (CMP) was used to indicate whether presence has been detected or not. With the DAC2 and the amplified PIR Click analog output connected to the comparator, the analog voltage levels are compared  to produce either a digital low or high output, determining whether presence has been detected or not. The DAC2 peripheral was set to generate a voltage to establish the Comparator threshold. Analog sensors, such as the sensor used on the PIR Click, have a natural tendency to drift over time. To rectify this issue, the comparator's internal hysteresis setting was used to help generate stable switching behavior.

Configuration of the CMP will be shown in the Setup Section.
<p>&nbsp;</p>


###### Configurable Logic Cell (CLC)

The drift of the PIR Click analog output over time may lead to false triggers. Additionally, use of the sensor under fluorescent lights causes noise to be introduced into the signal path. This sensor drift and introduced noise can lead to false triggers. This issue can be mitigated by using a Timer peripheral coupled with CLC peripherals. The TMR4, CLC1, CLC2 and CLC3 peripherals were used in conjunction to construct a software-less filter to resolve this issue.

Configuration of TMR4, CLC1, CLC2 and CLC3 will be shown in the Setup Section.
<p>&nbsp;</p>

#### **Curiosity Nano Base for Click Boards with PIR Click project setup:**
<p>&nbsp;</p>

![CuriosityNanoBaseandClickBoardSetup](images/ProjectSetUp.PNG)




## Setup
<p>&nbsp;</p>


 **Step #1: Creating the Project**

* On the toolbar, click on New Project
* Microchip Embedded; Standalone Project
* Enter the Device
  * For this Project: PIC18F16Q41
* Enter a name for this project, such as *pic18f16q41*-*person-detector*
  * Name: “*pic18f16q41*-*person-detector*”
  * **Note: The project name cannot have any empty spaces**
  <p>&nbsp;</p>

**Step #2: MPLAB Code Configurator (MCC)**

  * Set Configuration Bits
    * See below image for Configuration Bits

![ConfigurationBits](images/ConfigurationBits.PNG)

<p>&nbsp;</p>

* Modify the Clock Control
  * See below image for Configuration Bits

![ClockControl](images/ClockControl.PNG)
<p>&nbsp;</p>


 **Step #3: Adding the Peripherals**

<span style="color:Red">Operational Amplifier (OPA) </span>


* In Device Resources:
  * Drivers &rarr; OPAMP &rarr; OPA1
  * Once the peripheral is added, modify the peripheral to match the below image.

![OpAmpConfiguration](images/OpAmpConfiguration.PNG)


<p>&nbsp;</p>
<span style="color:Red">Analog-to-Digital-Converter (ADCC) </span>

*Note: The ADCC will measure the amplified PIR click output signal.*

* In Device Resources:
  * Drivers &rarr; ADCC &rarr; ADCC
  * Once the peripheral is added, modify the peripheral to match the setup in the image below.

![ADCCConfiguration](images/ADCC.PNG)
<p>&nbsp;</p>




<span style="color:Red">Digital-to-Analog-Converter (DAC) </span>

* In Device Resources:
  * Drivers &rarr; DAC &rarr; DAC2
  * Once the peripheral is added, modify the peripheral to match the image below.

![DACConfiguration](images/DAC.PNG)
<p>&nbsp;</p>


<span style="color:Red">Comparator (CMP) </span>

* In Device Resources:
  * Drivers → CMP → CMP1
  * Once the peripheral is added, modify the peripheral to match the image below.

![ComparatorConfiguration](images/Comparator.PNG)
<p>&nbsp;</p>


<span style="color:Red">Timer (TMR) </span>

* In Device Resources:
  * Drivers &rarr; Timer &rarr; TMR4
  * Once the peripheral is added, modify the peripheral to match the image below.

![Timer4Configuration](images/Timer4.PNG)
<p>&nbsp;</p>



<span style="color:Red">Configurable Logic Cell (CLC) </span>

* In Device Resources:
  * Drivers &rarr; CLC &rarr; CLC1, CLC2, and CLC3
  * Once the peripheral is added, modify the peripherals to match the images below


  <p>&nbsp;</p>

* CLC1

![CLC1Configuration](images/CLC1.PNG)


* CLC2

![CLC2Configuration](images/CLC2.PNG)


* CLC3

![CLC3Configuration](images/CLC3.PNG)

<p>&nbsp;</p>
<span style="color:Red">Timer (TMR) </span>

*Note: Timer2 will determine how fast the onboard LED is blinking when presence is detected*

* In Device Resources:
  * Drivers &rarr; TMR &rarr; TMR2
  * Once the peripheral is added, modify the peripheral to match the image below.


![Timer2Configuration](images/Timer2.PNG)



<p>&nbsp;</p>
<span style="color:Red">Universal Asynchronous Receiver-Transmitter (UART)</span>

*Note: UART is used to send a to be displayed to MPLAB Data Visualizer indicating whether motion has been detected or not.*

* In Device Resources:
  * Drivers &rarr; UART &rarr; UART1
  * Once the peripheral is added, modify the peripheral to match the image below.

![UARTConfiguration](images/UART.PNG)
<p>&nbsp;</p>


 **Step #4: Configuring the Pins**

This code example's signal connections are summarized in the following table


*Note: Please note that the PIR Click is used on mikroBUS™ socket #1 on the Curiosity Nano development board. If a different socket is being used, ensure to change the respective pins.*

|Signal|Pin Selection|
| :-: | :-: |
|PIR Click Raw Analog Output|RC3|
|OPA Inverting Input (OPA1INx-)|No connection needed|
|OPA Non- Inverting Input (OPA1INx+)|RC3|
|OPA Output (OPA1OUT)|RC2|
|ADCC Output(ANx)|RC2|
|Comparator Positive Input (C1IN1+)|No connection needed|
|Comparator Negative Input (C1IN1-)|RC2|
|CLC3 Output|RA5|
|UART TX|RB7|

<p>&nbsp;</p>

<span style="color:Red">Pin Allocation Table: </span>

![PinAllocationTable](images/Pins.PNG)
<p>&nbsp;</p>

**Step #5: Generate the project**

- Click the generate button in MCC to create the appropriate header and source files for this configuration.

<p>&nbsp;</p>

**Step #6: Modifying main.c**

- Upon the generation being completed, the new MCC generated header and source files will be in the project window. Select the main.c file and you will see an empty while(1) loop where you can add your application code.
<p>&nbsp;</p>

```   
int main(void) {
        SYSTEM_Initialize();
        adc_result_t result;
        DAC2_SetOutput(208);
        bool var = 0;

   while (1) {

        result = ADCC_GetSingleConversion(Analog_Input);
        bool CLCRead = CLC3_OutputStatusGet();
        if (CLCRead) {
            if  (var != 0) {
            printf("Result: %d \n\r", result);
            printf("Person Undetected7 \n\r");
            LED0_SetHigh();
            var = 0;
            }  
          }  
        else  if (!CLCRead) {
            if(var == 0) printf("Person Detected7 \n\r");
          if (T2CONbits.ON == 0){
            LED0_Toggle();
            T2CONbits.ON = 1;
            }
         var = 1;
          }
       }
     }
```

* Make and Program the Device
<p>&nbsp;</p>

**Step #7: MPLAB Data Visualizer**

- For this project, the terminal program that is being used is MPLAB Data Visualizer
  - Open Data Visualizer by clicking the green “DV” shield in the top toolbar
- Click on your Curiosity Nano COM port and set:
  - Baud Rate to: 19200
  - Char Length: 8 bits
  - Parity: None
  - Stop Bits: 1 bit
- Click “Apply” to save these settings
- On the right side of the terminal window, ensure “Display As: 8-bit ASCII” is selected
- Press the drop-down carrot next to your Curiosity Nano’s COM port and select “Send to Terminal”
- If everything is set up correctly, then the Data Visualizer should start displaying whether presence has been detected or not.
- If you wave your hand in front of the sensor, you will notice the terminal emulator displaying a message.


## Operation

<!-- Explain how to operate the example. Depending on complexity, step-by-step instructions and/or tables and/or images can be used -->

## Summary

<!-- Summarize what the example has shown -->
