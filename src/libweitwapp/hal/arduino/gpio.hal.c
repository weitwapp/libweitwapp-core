// gpio.hal.c

#ifdef LIBWEITWAPP_HAL_BUILD_ARDUINO 

#include <Arduino.h>
#include <libweitwapp/hal/gpio.hal.h>


int hal_gpio_init(int gpio, int hal_gpio_direction) {
		pinMode(gpio, hal_gpio_direction);
		return 0; //ARUDINO_OK?
}
void hal_gpio_put(int gpio, int hal_gpio_state){
		digitalWrite(gpio, hal_gpio_state);
}
int hal_gpio_get(int gpio){
		return digitalRead(gpio);
}

#endif //LIBWEITWAPP_HAL_BUILD_ARDUINO 