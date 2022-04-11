#include <graphics.h>              
#include <conio.h>
#include <stdio.h>
#include <windows.h>				
#include <math.h>
int r1[] = { 30,20,130,60 };
int r2[] = { 170,20,220,60 };
int r3[] = { 260,20,310,60 };
int main()
{
	int i;
	short win_width, win_height;
	win_width = 480; win_height = 360;
	initgraph(win_width, win_height);
	for (i = 0; i < 256; i += 5)
	{
		setbkcolor(RGB(i, i, i));
		cleardevice();//清屏（取决于背景色）
		Sleep(15);//延时15ms
	}
	RECT R1 = { r1[0],r1[1],r1[2],r1[3] };
	RECT R2 = { r2[0],r2[1],r2[2],r2[3] };
	RECT R3 = { r3[0],r3[1],r3[2],r3[3] };//矩形指针
	LOGFONT f;//字体样式指针
	gettextstyle(&f);					//获取字体样式
	wcscpy_s(f.lfFaceName, _T("宋体"));	//设置字体为宋体
	f.lfQuality = ANTIALIASED_QUALITY;    
	settextstyle(&f);                     // 设置字体样式
	settextcolor(BLACK);				
	drawtext(_T("王梓儒"), &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("我爱你"), &R2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	drawtext(_T("退出"), &R3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	setlinecolor(BLACK);
	rectangle(r1[0], r1[1], r1[2], r1[3]);
	rectangle(r2[0], r2[1], r2[2], r2[3]);
	rectangle(r3[0], r3[1], r3[2], r3[3]);
	system("pause");//暂停
	closegraph();
	return 0;
}