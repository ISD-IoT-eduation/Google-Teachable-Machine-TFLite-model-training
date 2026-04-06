/* Copyright 2021 Google LLC All Rights Reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  ==============================================================================
*/

#ifndef IMAGE_PROVIDER_H_
#define IMAGE_PROVIDER_H_

#include <Arduino.h>

/**
 * Interface for capturing image data from the hardware.
 * @param image_width   Width of the image buffer (96)
 * @param image_height  Height of the image buffer (96)
 * @param channels      Number of channels (1 for grayscale)
 * @param image_data    Target buffer for the image bytes
 * @return true if an image was successfully captured
 */
bool GetImage(int image_width, int image_height, int channels, uint8_t* image_data);

/**
 * Generates test image data (fills buffer with a static value).
 */
bool GetDummyImage(int image_width, int image_height, int channels, uint8_t* image_data);

#endif  // IMAGE_PROVIDER_H_
