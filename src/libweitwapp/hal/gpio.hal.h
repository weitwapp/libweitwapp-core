// gpio.hal.h


#ifndef __LIBWEITWAPP_HAL_GPIO_H__
#define __LIBWEITWAPP_HAL_GPIO_H__

//#ifdef LIBWEITWAPP_HAL_PICO_SDK
    #define LIBWEITWAPP_HAL_GPIO_HIGH 1
	#define LIBWEITWAPP_HAL_GPIO_LOW 0
	#define LIBWEITWAPP_HAL_GPIO_DIRECTION_OUT 1 //ENH: Prüfe Wert gegen pico-sdk!
	#define LIBWEITWAPP_HAL_GPIO_DIRECTION_IN  0 //ENH: Prüfe Wert gegen pico-sdk!
//#endif // LIBWEITWAPP_HAL_PICO_SDK
// ENH: Die obigrn Werte sind i.d.R. auch abhängig von der gewählten Hardware

#ifdef __cplusplus
extern "C" {
#endif

// DOC: Docstring
int hal_gpio_init(int gpio, int hal_gpio_direction);
// DOC: Docstring
void hal_gpio_put(int gpio, int hal_gpio_state);
// DOC: Docstring
int hal_gpio_get(int gpio);

#ifdef __cplusplus
}
#endif

#endif // __LIBWEITWAPP_HAL_GPIO_H__
