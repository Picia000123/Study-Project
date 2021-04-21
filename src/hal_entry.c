/* HAL-only entry function */
#include "hal_data.h"
void hal_entry(void)
{
    /* TODO: add your own code here */
    while (1)
    {
            //kręcenie się silnika w prawo
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_04, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_04, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_05, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_05, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_06, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_06, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_12, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_12, IOPORT_LEVEL_LOW);
/*
            //kręcenie się silnika w lewo
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_12, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_12, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_06, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_06, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_05, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_05, IOPORT_LEVEL_LOW);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_04, IOPORT_LEVEL_HIGH);
            R_BSP_SoftwareDelay(100, BSP_DELAY_UNITS_MILLISECONDS);
            g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_04, IOPORT_LEVEL_LOW);*/
    }
}
