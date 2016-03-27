/*#include <iostream>//从现在开始标准的输入输出流操作可用,并在此链接的作用下,将编译后的输入/输出指令转化成对应的输入/输出硬件设备的操作
int main(){
	std::cout<<"hello world.\n";//"<<"指示将后面的数据送到显示器设备上去,“\+char"表示不可见控制字符
}//std::cout 指标准库里的cout，避免和程序员自身起名为cout的函数冲突
*/
/*#include <iostream>
using namespace std;
int main(){
	double radius;
	double result;
	int results=2;
	cout<<"please input radius:";//将 please input radius:送到显示设备上去
	cin>>radius;//由键盘上输入一个数，赋值给radius
	result=radius*radius*3.14;
	//cout<<"The result is"<<result<<"\n";
	cout<<"The result is"<<result<<endl;//endl也是输出一个回车，但是相比\n，\n只是输出了一个回车字符，而endl还刷新了缓冲区，相当于std::cout<<'\n'<<std::flush;
	//所谓刷新缓冲区是指将缓冲区的内容复制并清空缓冲区
}*/
/*#include <iostream>
using namespace std;
int main(){
	cout<<'h'+'h'<<endl;//输出208，因为h的ascii码为104(十进制)，它将'h'看成一个整数，'h'+'h'看作一个表达式，计算得到208
	//cout<<"hello"+"world"//error：两个指针不能直接相加
	cout<<"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"+'A';
	cout<<"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"+65;
	//6、7行等价，因为A的ascii码是65(十进制)
	//cout输出一个字符串相当于拿到字符串指针，从起始位置一直输出直到遇到\0，而+65，表示字符串指针向后移65位后开始输出直到遇到\0
}*/
/*#include <iostream>
#include <string>
using namespace std;
using std::string;
int main(){
	int i,n;
	for(i=0;i<19;i++){
		cout<<'M';
	}
	cout<<endl;
	for(i=1,n=17;n>0;n-=2,i+=1){
		cout<<string(i,' ')<<string(n,'M')<<string(i,' ')<<endl;
	}
}*/
/*#include <iostream>//标准库用尖括号引起来
#include "Sales_item.h"//非标准库用引号引起来，使用这个类，必须把这个类的头文件包含进来
using namespace std;
int main(){
	Sales_item book;
	cin>>book.price;
	cout<<book.price<<endl;
	return 0;//return 0 means normal return
}*/
/*#include <iostream>
using namespace std;
int main(){
	cout<<"my"		"name" "is"
		"Ally"<<endl;//以空格，回车，制表符分开的多个字符串，实际上可以连成一句，但是切记不能用+相连，因为指针不能相加
}*/
/*#include <iostream>
#include <string>//要使用string类必须包含string标准库头文件
using namespace std;
int main(){
	int i=0;//复制初始化
	int j(0);//直接初始化
	cout<<i<<endl<<j<<endl;
	//对于内置类型，直接初始化和复制初始化几乎没有区别
	string str1="A little cat.";
	string str2("A little dog.");
	//两种初始化方式都可以使用,str1和str2都是相应字符串字面值的副本
	//来源于string str1=string("A little cat."); string("A little cat.")是string类的普通构造函数，生成字符串字面值副本的一个对象
	cout<<str1<<endl<<str2<<endl;
	string str3(10,'p');//只能用直接初始化
	//string str3=10,'p';	error 有多个初始化式的时候只能使用直接初始化
	string str4=string(10,'p');//string(10,'p')可以生成一个"pppppppppp"字符串，赋值给str4
	cout<<str3<<endl<<str4<<endl;
}*/
#include <iostream>
using namespace std;
int main(){
	//变量的定义：用于为变量分配存储空间，有时还可以为变量指定初始值，在一个程序中，一个变量有且仅有一个定义
	//变量的声明：用于向程序表明变量的类型和名字，定义也是声明，当定义变量时我们已经声明了它的类型和名字
	//也就是说，可以声明不定义，但是定义一定意味着声明了，可以用extern关键字声明不定义
	extern int i;//声明但是不定义
	int i;//声明且定义
}