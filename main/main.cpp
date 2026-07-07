#include <stdio.h>
#include "esp_netif.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_err.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#ifdef __cplusplus
extern "C" {
#endif
void system_setup(void);
#ifdef __cplusplus
}
#endif
extern "C" void app_main(void)
{

    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    system_setup();
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

}