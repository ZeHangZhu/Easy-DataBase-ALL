#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <str2char>
#include <conio.h>
using namespace std;

//--------------------------------------------------

int color(int c){	//更改颜色

/*	color() 用法解释
* 	PS:改变颜色仅限windows下使用！
*
*
* 0-黑色
* 1-深蓝色
* 2-深绿色
* 3-深蓝绿色
* 4-深红色
* 5-紫色
* 6-暗黄色
* 7-白色
* 8-灰色
* 9-亮蓝色
* 10-亮绿色
* 11-亮蓝绿色
* 12-红色
* 13-粉色
* 14-黄色
* 15-亮白色
*/ 

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);	//更改颜色
	return 0;
}

void log(string msg){	//记录消息
	fstream file;
	file.open("logs.txt",ios::app);
	file>>msg;	//写入信息
	file.close();

//---------------------------------------------------------------------------------
//函数原型声明

void info(string msg);	//消息，字体为白色，前缀[*]-[INFO]:	,记录入log文件
void error(string msg);	//异常，字体红色，前缀[!]-[Error]:	,记录入log文件
void wrong(string msg);	//错误，字体黄色，前缀[*]-[Wrong]:	,记录入log文件

//---------------------------------------------------------------------------------
//函数主区

void info(string msg){	//消息，字体为白色，前缀[*]-[INFO]:	,记录入log文件
	string out;
	
	char head[10] = "[*]-[INFO]:";	//拼接消息
	out = head + msg;
	log(out);	//记录消息
	color(15);
	cout<<out<<endl;	//打印信息
	color(15);
}
void error(string msg){	//异常，字体红色，前缀[!]-[Error]:	,记录入log文件
	string out;
	
	char head[10] = "[!]-[Error]:";	//拼接消息
	out = head + msg;
	log(out);	//记录消息
	color(4);
	cout<<out<<endl;	//打印信息
	color(15);
}
void wrong(string msg){	//错误，字体黄色，前缀[*]-[Wrong]:	,记录入log文件
	string out;
	
	char head[10] = "[*]-[INFO]:";	//拼接消息
	out = head + msg;
	log(out);	//记录消息
	color(14);
	cout<<out<<endl;	//打印信息
	color(15);
}

