//���� Python/C API�ӿ� 
#define PY_SSIZE_T_CLEAN
#include <Python.h> 
//�����
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "str2char.cpp"

using namespace std;

//����ԭ������
char str2char(string data);
void start(string obj);
void save(string obj);
int cut(strng obj);

int main(){
	
}

//����������
void start(string obj){
	char filename[37] = str2char(obj);
	fstream dbfile;
	dbfile.open(filename,ios::in);
	string command;
	command = "7z.exe e -y -oc:\\db " + filename;	//���ɽ�ѹ����
	char cmd[37] = str2char(command);	//תchar
	if (dbfile.is_open()){
		dbfile.close();	//�ر��ļ�
		system(cmd);	//��ѹ�ļ�
	}
	else{
		cout<<"[!]�޷��������ݿ�!"<<endl;
	}
	cout<<"[*]�����������ɹ�!"<<endl;
}