#include "led1_thread.h"
void led1_thread_entry(void)
{
    g_external_irq10.p_api->open(g_external_irq10.p_ctrl,g_external_irq10.p_cfg); //Inicjalizacja przerwania
    while (1)
    {
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
                    g_ioport.p_api->pinWrite(IOPORT_PORT_01_PIN_04, IOPORT_LEVEL_LOW);
        tx_semaphore_get (&g_sw5_semaphore, TX_WAIT_FOREVER);
    }
}
void external_irq10_callback(external_irq_callback_args_t * p_args) //Funkcja przywołania powrotnego
{
    tx_semaphore_put(&g_sw5_semaphore);
}
