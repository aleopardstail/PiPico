/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* _very_ slightly modified by myself as my first attempt at coding on the RP2040 */

#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(50);
        gpio_put(LED_PIN, 0);
        sleep_ms(50);
		gpio_put(LED_PIN, 1);
        sleep_ms(50);
		gpio_put(LED_PIN, 0);
        sleep_ms(250);
    }
}
