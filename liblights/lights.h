/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <hardware/lights.h>

#define COLOR_MASK 0x00ffffff

#define PANEL_FILE "/sys/class/backlight/panel/brightness"
#define BUTTON_FILE "/sys/class/sec/sec_touchkey/brightness"
#define LED_BLINK "/sys/class/sec/led/led_blink"
