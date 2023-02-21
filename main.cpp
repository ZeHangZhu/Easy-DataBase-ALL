//定义 Python/C API接口 
#define PY_SSIZE_T_CLEAN
#include <Python.h> 
//导入库
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "str2char.cpp"

using namespace std;

//---------------------------------------------

//函数原型声明
char str2char(string data);
void start(string obj);
void save(string obj);
int cut(strng obj);

//----------------------------------------------
int main(){
	
}

//启动服务器
void start(string obj){
	//定义数据库文件名
	char filename[37] = str2char(obj);
	fstream dbfile;
	dbfile.open(filename,ios::in);
	string command;	//定义要执行的命令
	command = "7z.exe e -y -oc:\\db " + filename;	//生成解压命令
	char cmd[37] = str2char(command);	//转char
	
	//检测数据库文件是否存在
	if (dbfile.is_open()){
		dbfile.close();	//关闭文件
		system(cmd);	//解压文件
	}
	else{
		cout<<"[!]无法启动数据库!"<<endl;
	}
	cout<<"[*]服务器启动成功!"<<endl;
}
