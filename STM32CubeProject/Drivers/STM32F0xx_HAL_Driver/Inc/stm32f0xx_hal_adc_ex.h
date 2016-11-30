/**
  ******************************************************************************
  * @file    stm32f0xx_hal_adc_ex.h
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    26-June-2015
  * @brief   Header file of ADC HAL Extension module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F0xx_HAL_ADC_EX_H
#define __STM32F0xx_HAL_ADC_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal_def.h"  

/** @addtogroup STM32F0xx_HAL_Driver
  * @{
  */

/** @addtogroup ADCEx
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/ 
/* Exported constants --------------------------------------------------------*/

/** @defgroup ADC_Exported_Constants ADC Exported Constants
  * @{
  */

#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define ADC_CCR_ALL     (ADC_CCR_VBATEN | ADC_CCR_TSEN | ADC_CCR_VREFEN)
#else
#define ADC_CCR_ALL     (ADC_CCR_TSEN | ADC_CCR_VREFEN)
#endif

/** @defgroup ADC_External_trigger_source_Regular ADC External trigger source Regular
  * @{
  */
/* List of external triggers with generic trigger name, sorted by trigger     */
/* name:                                                                      */

/* External triggers of regular group for ADC1 */
#define ADC_EXTERNALTRIGCONV_T1_TRGO        ADC1_2_EXTERNALTRIG_T1_TRGO
#define ADC_EXTERNALTRIGCONV_T1_CC4         ADC1_2_EXTERNALTRIG_T1_CC4
#define ADC_EXTERNALTRIGCONV_T3_TRGO        ADC1_2_EXTERNALTRIG_T3_TRGO
#define ADC_SOFTWARE_START                  (ADC_CFGR1_EXTSEL + (uint32_t)1)

#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define ADC_EXTERNALTRIGCONV_T2_TRGO        ADC1_2_EXTERNALTRIG_T2_TRGO
#endif 

#if !defined(STM32F030x6) && !defined(STM32F070x6) && !defined(STM32F042x6)
#define ADC_EXTERNALTRIGCONV_T15_TRGO       ADC1_2_EXTERNALTRIG_T15_TRGO
#endif

/**
  * @}
  */ 


/** @defgroup ADC_channels ADC channels
  * @{
  */
/* Note: Depending on devices, some channels may not be available on package  */
/*       pins. Refer to device datasheet for channels availability.           */
/* Note: Channels are used by bitfields for setting of channel selection      */
/*       (register ADC_CHSELR) and used by number for setting of analog       */
/*       watchdog channel (bits AWDCH in register ADC_CFGR1).                 */
/*       Channels are defined with decimal numbers and converted them to      */
/*       bitfields when needed.                                               */
#define ADC_CHANNEL_0           ((uint32_t) 0x00000000)
#define ADC_CHANNEL_1           ((uint32_t) 0x00000001)
#define ADC_CHANNEL_2           ((uint32_t) 0x00000002)
#define ADC_CHANNEL_3           ((uint32_t) 0x00000003)
#define ADC_CHANNEL_4           ((uint32_t) 0x00000004)
#define ADC_CHANNEL_5           ((uint32_t) 0x00000005)
#define ADC_CHANNEL_6           ((uint32_t) 0x00000006)
#define ADC_CHANNEL_7           ((uint32_t) 0x00000007)
#define ADC_CHANNEL_8           ((uint32_t) 0x00000008)
#define ADC_CHANNEL_9           ((uint32_t) 0x00000009)
#define ADC_CHANNEL_10          ((uint32_t) 0x0000000A)
#define ADC_CHANNEL_11          ((uint32_t) 0x0000000B)
#define ADC_CHANNEL_12          ((uint32_t) 0x0000000C)
#define ADC_CHANNEL_13          ((uint32_t) 0x0000000D)
#define ADC_CHANNEL_14          ((uint32_t) 0x0000000E)
#define ADC_CHANNEL_15          ((uint32_t) 0x0000000F)
#define ADC_CHANNEL_16          ((uint32_t) 0x00000010)
#define ADC_CHANNEL_17          ((uint32_t) 0x00000011)

#define ADC_CHANNEL_TEMPSENSOR  ADC_CHANNEL_16
#define ADC_CHANNEL_VREFINT     ADC_CHANNEL_17
    
#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define ADC_CHANNEL_18          ((uint32_t) 0x00000012)
#define ADC_CHANNEL_VBAT        ADC_CHANNEL_18 
#endif
    
/**
  * @}
  */

/**
  * @}
  */
    
/* Exported macro ------------------------------------------------------------*/


/* Private macros ------------------------------------------------------------*/

/** @defgroup ADCEx_Private_Macros ADCEx Private Macros
  * @{
  */
/* Macro reserved for internal HAL driver usage, not intended to be used in   */
/* code of final user.                                                        */

/**
  * @brief Test if the selected ADC channel is an internal channel
  *        VrefInt/TempSensor/Vbat
  *        Note: On STM32F0, availability of internal channel Vbat depends on
  *              devices lines.
  * @param __CHANNEL__: ADC channel
  * @retval None
  */
#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define ADC_IS_CHANNEL_INTERNAL(__CHANNEL__)                                   \
 (((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR) ||                                 \
  ((__CHANNEL__) == ADC_CHANNEL_VREFINT)    ||                                 \
  ((__CHANNEL__) == ADC_CHANNEL_VBAT)                                          \
 )
#else
#define ADC_IS_CHANNEL_INTERNAL(__CHANNEL__)                                   \
 (((__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR) ||                                 \
  ((__CHANNEL__) == ADC_CHANNEL_VREFINT)                                       \
 )
#endif
   
/**
  * @brief Select the internal measurement path to be enabled/disabled 
  *        corresponding to the selected ADC internal channel 
  *        VrefInt/TempSensor/Vbat.
  *        Note: On STM32F0, availability of internal channel Vbat depends on
  *              devices lines.
  * @param __CHANNEL__: ADC channel
  * @retval Bit of register ADC_CCR
  */
#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define ADC_CHANNEL_INTERNAL_PATH(__CHANNEL__)                                 \
 (( (__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR                                    \
  )?                                                                           \
   (ADC_CCR_TSEN)                                                              \
   :                                                                           \
   (                                                                           \
     ( (__CHANNEL__) == ADC_CHANNEL_VREFINT                                    \
     )?                                                                        \
      (ADC_CCR_VREFEN)                                                         \
      :                                                                        \
      (ADC_CCR_VBATEN)                                                         \
   )                                                                           \
 )
#else
#define ADC_CHANNEL_INTERNAL_PATH(__CHANNEL__)                                 \
 (( (__CHANNEL__) == ADC_CHANNEL_TEMPSENSOR                                    \
  )?                                                                           \
   (ADC_CCR_TSEN)                                                              \
   :                                                                           \
   (ADC_CHANNEL_VREFINT)                                                       \
 )
#endif
   
   
#if defined (STM32F030x6) || defined (STM32F070x6)
#define IS_ADC_EXTTRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC4)   || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO)  || \
                                 ((REGTRIG) == ADC_SOFTWARE_START))
#elif defined (STM32F042x6)
#define IS_ADC_EXTTRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC4)   || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO)  || \
                                 ((REGTRIG) == ADC_SOFTWARE_START))   

#elif defined (STM32F030xC) || defined (STM32F070xB) || defined (STM32F030x8)
#define IS_ADC_EXTTRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC4)   || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T15_TRGO) || \
                                 ((REGTRIG) == ADC_SOFTWARE_START))
#else
#define IS_ADC_EXTTRIG(REGTRIG) (((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T1_CC4)   || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T2_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T3_TRGO)  || \
                                 ((REGTRIG) == ADC_EXTERNALTRIGCONV_T15_TRGO) || \
                                 ((REGTRIG) == ADC_SOFTWARE_START))   
#endif

#if !defined(STM32F030x6) && !defined(STM32F030x8) && !defined(STM32F070x6) && !defined(STM32F070xB) && !defined(STM32F030xC)
#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) == ADC_CHANNEL_0)           || \
                                 ((CHANNEL) == ADC_CHANNEL_1)           || \
                                 ((CHANNEL) == ADC_CHANNEL_2)           || \
                                 ((CHANNEL) == ADC_CHANNEL_3)           || \
                                 ((CHANNEL) == ADC_CHANNEL_4)           || \
                                 ((CHANNEL) == ADC_CHANNEL_5)           || \
                                 ((CHANNEL) == ADC_CHANNEL_6)           || \
                                 ((CHANNEL) == ADC_CHANNEL_7)           || \
                                 ((CHANNEL) == ADC_CHANNEL_8)           || \
                                 ((CHANNEL) == ADC_CHANNEL_9)           || \
                                 ((CHANNEL) == ADC_CHANNEL_10)          || \
                                 ((CHANNEL) == ADC_CHANNEL_11)          || \
                                 ((CHANNEL) == ADC_CHANNEL_12)          || \
                                 ((CHANNEL) == ADC_CHANNEL_13)          || \
                                 ((CHANNEL) == ADC_CHANNEL_14)          || \
                                 ((CHANNEL) == ADC_CHANNEL_15)          || \
                                 ((CHANNEL) == ADC_CHANNEL_TEMPSENSOR)  || \
                                 ((CHANNEL) == ADC_CHANNEL_VREFINT)     || \
                                 ((CHANNEL) == ADC_CHANNEL_VBAT)          )
#else
#define IS_ADC_CHANNEL(CHANNEL) (((CHANNEL) == ADC_CHANNEL_0)           || \
                                 ((CHANNEL) == ADC_CHANNEL_1)           || \
                                 ((CHANNEL) == ADC_CHANNEL_2)           || \
                                 ((CHANNEL) == ADC_CHANNEL_3)           || \
                                 ((CHANNEL) == ADC_CHANNEL_4)           || \
                                 ((CHANNEL) == ADC_CHANNEL_5)           || \
                                 ((CHANNEL) == ADC_CHANNEL_6)           || \
                                 ((CHANNEL) == ADC_CHANNEL_7)           || \
                                 ((CHANNEL) == ADC_CHANNEL_8)           || \
                                 ((CHANNEL) == ADC_CHANNEL_9)           || \
                                 ((CHANNEL) == ADC_CHANNEL_10)          || \
                                 ((CHANNEL) == ADC_CHANNEL_11)          || \
                                 ((CHANNEL) == ADC_CHANNEL_12)          || \
                                 ((CHANNEL) == ADC_CHANNEL_13)          || \
                                 ((CHANNEL) == ADC_CHANNEL_14)          || \
                                 ((CHANNEL) == ADC_CHANNEL_15)          || \
                                 ((CHANNEL) == ADC_CHANNEL_TEMPSENSOR)  || \
                                 ((CHANNEL) == ADC_CHANNEL_VREFINT)       )
#endif

/**
  * @}
  */ 

   
/* Exported functions --------------------------------------------------------*/
/** @addtogroup ADCEx_Exported_Functions
  * @{
  */

/* IO operation functions  *****************************************************/
/** @addtogroup ADCEx_Exported_Functions_Group1
  * @{
  */

/* ADC calibration */
HAL_StatusTypeDef       HAL_ADCEx_Calibration_Start(ADC_HandleTypeDef* hadc);
/**
  * @}
  */


/**
  * @}
  */ 


/**
  * @}
  */

/**
  * @}
  */
    
#ifdef __cplusplus
}
#endif

#endif /* __STM32F0xx_HAL_ADC_EX_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

