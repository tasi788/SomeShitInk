#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "imagedata.h"
#include <stdlib.h>

void setup()
{
  printf("EPD_4IN2B_V2_test Demo\r\n");
  DEV_Module_Init();

  printf("e-Paper Init...\r\n");
  EPD_4IN2B_V2_Init();
  DEV_Delay_ms(500);

  printf("e-Paper Clear...\r\n");
  EPD_4IN2B_V2_Clear();
  DEV_Delay_ms(500);
  printf("Init Done...\r\n");
  DEV_Delay_ms(2000);

  // UBYTE *BlackImage, *RYImage; // Red or Yellow
  // printf("NewImage:BlackImage and RYImage\r\n");
  // Paint_NewImage(BlackImage, EPD_4IN2B_V2_WIDTH, EPD_4IN2B_V2_HEIGHT, 180, WHITE);

  // printf("show image for array\r\n");
  // EPD_4IN2B_V2_Display(gImage_4in2bc_b, gImage_4in2bc_ry);
  // DEV_Delay_ms(2000);

  printf("Goto Sleep...\r\n");
  EPD_4IN2B_V2_Sleep();
}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  //
}
