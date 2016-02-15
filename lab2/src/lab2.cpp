//============================================================================
// Name        : lab2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;
class student {\
	string name;
	string usn;
	string branch;
	string semester;
public:
	void readStudentFromConsole() {
		cin.clear();
		cin.ignore(255,'\n');
		cout<<"enter the name";
		getline(cin,name);
		cout<<"enter the usn";
		cin>>usn;
		cout<<"enter the branch";
		cin>>branch;
		cout<<"enter the semester";
		cin>>semester;
	}
		int pack()
		{
			string temp,buffer;
			int lenght;
			temp=name+'|'+usn+'|'+branch+'|'+semester;
			lenght=temp.size();
			buffer=temp;
			for(int i=lenght-1;i<100;i++)
			{
				buffer+='$';
			}
			cout<<buffer;
			return 0;
		}
};
int main() {
	int a;
	student s;
	//while(1){
		cout<<"enter your choice";
		cin>>a;
		switch(a)
		{
		case 1: s.readStudentFromConsole();
		s.pack();
		break;
		}
}

