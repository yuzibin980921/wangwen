include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE);//定义OLED连接方式

long  time;

void draw(void) {
  u8g.setFont(u8g_font_unifont);//字体1
  //u8g.setPrintPos(0, 16);//字体坐标（x轴，y轴）
  //u8g.print("*_*dianzixiaowu*_*");//显示指定字符
  u8g.drawStr( 0, 16, "*_*dianzixiaowu*_*");
  u8g.setFont(u8g_font_7x13);//字体2
  u8g.setPrintPos(0, 32);
  u8g.print("zhizuoren");//显示指定字符
  u8g.setPrintPos(0, 48);//换行显示须再定义
  
  u8g.print("changlinhui  ");
 
  u8g.print(".");
  u8g.setPrintPos(0, 64);//换行显示须再定义
  u8g.print("wangwenjiangliuyue");
}

void setup(void) {
  // u8g.setRot180();//字体旋转
}

void loop(void) {
  time=millis();
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
}
