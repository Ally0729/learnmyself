/*#include <iostream>
#include "other.h"
using namespace std;
extern int age;//外部变量，说明在本cpp文件中找不到它的定义
void OutAgeText(){
	if(age<16){
		cout<<"age<16"<<endl;
	}
	else if(age<30){
		cout<<"age<30"<<endl;
	}
	else
	{
		cout<<"age>=30"<<endl;
	}
}*/

//上面例子再写
/*#include <iostream>
#include "other.h"
using namespace std;
extern const int age;//const关键字不可少
void OutAgeText(){
	if(age<16){
		cout<<"age<16"<<endl;
	}
	else if(age<30){
		cout<<"age<30"<<endl;
	}
	else
	{
		cout<<"age>=30"<<endl;
	}
}*/

//上面例子再写
/*#include <iostream>
#include "other.h"
#include "test1.h"
using namespace std;
void OutAgeText(){
	if(age<16){
		cout<<"age<16"<<endl;
	}
	else if(age<30){
		cout<<"age<30"<<endl;
	}
	else
	{
		cout<<"age>=30"<<endl;
	}
}*/