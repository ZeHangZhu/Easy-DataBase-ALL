#include <iostream>
#include <string>

//string转char[]
char str2char(string data){
	if (data.length() <= 9){
		char p[10];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else if (data.length() > 9 && data.length() <= 49){
		char p[50];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else if (data.length() > 49 && data.length() <=99){
		char p[100];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else if (data.length() > 99 && data.length() <= 149){
		char p[150];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else if (data.length() > 149 && data.length() <= 199){
		char p[200];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else (if data.length() > 199 && data.length() <= 399){
		char p[400];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}
	
	else{
		char p[999999];
		for (int i=0;i<data.length();i++)
			p[i] = str[i];
		p[data.length()] = '\0';
		return p;
	}

}