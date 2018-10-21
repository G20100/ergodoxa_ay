#include <stdbool.h>
#include "action.h"
#include "i2cmaster.h"
#include "Adafruit_ADS1015.h"

Adafruit_ADS1115 ads(0x48);
float Voltage0 = 0.0;
float Voltage1 = 0.0;

void setup(void)
{
  Serial.begin(9600);
  ads.begin();
}

/*
void loop(void)
{
  int16_t adc0;  // we read from the ADC, we have a sixteen bit integer as a result
  int16_t adc1;
  adc0 = ads.readADC_SingleEnded(0);
  adc1 = ads.readADC_SingleEnded(1);
  Voltage0 = (adc0 * 0.1875)/1000;
  Voltage1 = (adc1 * 0.1875)/1000;
}
*/

void loop(void)
{
  int16_t adc0;
  int16_t adc1;
  adc0 = i2c

  delay(1000);
}

/*
https://docs.qmk.fm/#/feature_pointing_device?id=pointing-device
ポインティングデバイス
pointing_device_get_report() - ホストコンピュータに送信された情報を表す現在のreport_mouse_tを返します
pointing_device_set_report(report_mouse_t newMouseReport) - ホストコンピュータに送信されるreport_mouse_tを上書きして保存します。
report_mouse_t（ここでは「mouseReport」）には、次のプロパティがあります。

mouseReport.x - これは、-127から127までの符号付き整数であり（128ではなく、USB HID仕様で定義されています）、x軸の動き（右から左、左から左）を表します。
mouseReport.y - これは、-127から127の符号付きintで、128ではなく、USB HID仕様で定義されています.Y軸上の動き（+上向き、下向き）を表します。
mouseReport.v - これは垂直スクロール（+上向き、下向き）を表す符号付き整数で、-127〜127（128ではなく、これはUSB HID仕様で定義されています）です。
mouseReport.h これは、水平スクロール（+右、左）を表す-127から127までの符号付き整数（128ではなく、これはUSB HID仕様で定義されています）です。
mouseReport.buttonsこれは最後の5ビットが使用されているuint8_tです。これらのビットは、マウスボタンの状態を表します。ビット3はマウスボタン5で、ビット7はマウスボタン1です。
マウスレポートが送信されると、x、y、v、hの値は0に設定されます（これは "pointing_device_send（）"で行われます）。このように、ボタンの状態は持続しますが、動きは1回だけ発生します。さらにカスタマイズするには、との両方pointing_device_initをpointing_device_taskオーバーライドすることができます。

次の例では、カスタムキーを使用してマウスをクリックし、垂直方向と水平方向に127単位をスクロールし、リリース時にすべてを元に戻します。これは完全に便利な機能だからです。これは一例です：
*/
case MS_SPECIAL:
    report_mouse_t currentReport = pointing_device_get_report();
    if (record->event.pressed)
    {
        currentReport.v = 127;
        currentReport.h = 127;
        currentReport.buttons |= MOUSE_BTN1; //this is defined in report.h
    }
    else
    {
        currentReport.v = -127;
        currentReport.h = -127;
        currentReport.buttons &= ~MOUSE_BTN1;
    }
    pointing_device_set_report(currentReport);
    break;
