/*****************************************************************************
  | File        :   Power_Management_HAT.c
  | Author      :   Waveshare team 
  | Info        :   Power_Management_HAT(B) example 
  ----------------
  | This version:   V1.0
  | Date        :   2022-10-01
  | Info        :

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documnetation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to  whom the Software is
  furished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.

******************************************************************************/
#include "DEV_Config.h"
#include "examples.h"
/******************************************************************************
  function: main
  parameter: 
******************************************************************************/
int main()
{
  /* Initialize function */
  //Button_Ctr_Init();
  Period_Time_Init();

  /*Calls loop functions*/
  while (true)
  {
    
    //Button_Ctr_Loop();
    Period_Time_Loop();

    
  }

  return 0;
}
