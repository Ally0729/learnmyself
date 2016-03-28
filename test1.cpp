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

/*#include <iostream>
using namespace std;
extern int i=0;//对变量进行了初始化，所以extern声明也是定义，但是这样的语句只能位于函数外面
int main(){
	//变量的定义：用于为变量分配存储空间，有时还可以为变量指定初始值，在一个程序中，一个变量有且仅有一个定义
	//变量的声明：用于向程序表明变量的类型和名字，定义也是声明，当定义变量时我们已经声明了它的类型和名字,声明可以有很多次
	//也就是说，可以声明不定义，但是定义一定意味着声明了，可以用extern关键字声明不定义
	extern int i;//声明但是不定义
	int i;//声明且定义
}
//对于在多个文件中使用的变量，必须有与定义分离的声明（extern声明）
//变量在一个文件里定义，使用该变量的其他文件中必须包含该变量的声明（不是定义）
*/

/*#include <iostream>
#include "other.h"//包含了other.h头文件，获得了OutAgeText()声明，在相应.cpp文件(other.cpp)中，获得OutAgeText()定义
using namespace std;
int age=9;//定义成全局变量
int main(){
    OutAgeText();
	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;
string str1="Hello World.";
int main(){
	cout<<str1<<endl;
	string str1="Hello";//局部变量覆盖了全局变量，因此局部变量最好和全局变量名字不同
	cout<<str1<<endl;
}*/

/*定义const对象
#include <iostream>
using namespace std;
int main(){
	const int bufferSize=512;//const将一个变量变成了一个常数，定义的时候必须初始化，并且以后该变量的值不可以被修改
}*/

//上面例子再写
//const变量和其他变量不同，在全局作用域声明的cosnt变量是定义该对象的文件的局部变量，此变量只存在于这个文件中，永远不能被其他文件访问
//如果想让const变量被其他文件引用必须加上extern关键字（一般类型变量会隐式自动加extern关键字，而const变量必须显式加extern关键字）
/*#include <iostream>
#include "other.h"//包含了other.h头文件，获得了OutAgeText()声明，在相应.cpp文件(other.cpp)中，获得OutAgeText()定义
using namespace std;
extern const int age=9;//age变成常量，不允许被修改，通过extern关键字，使得别的文件也可以访问
int main(){
    OutAgeText();
	return 0;
}*/

//一般引用
//使用&表示引用，引用是对象的另外一个名字
//int i=7;
//int &refi=i; correct
//int &refi; error,定义时必须初始化
//int &ref=7; error,右边必须是一个object
//ref++;  means i=8
//int j=ref; means j=8

//const引用是指const对象的引用
//const int i=9；
//const int & refi=i; correct
//const int &refi=9; correct for const 引用 only；
//一般引用只能绑定到对象，const引用不但可以绑定到对象还可以绑定到字面值

//上面例子再写
/*#include <iostream>
#include "test1.h"
#include "other.h"
using namespace std;
int age=9;//age变量要被其他文件引用，因此在本文件中定义成全局变量，在本文件对应的头文件中进行声明不定义
               //在其他需要引用age变量的文件中，只要include本文件的头文件即可
int main(){
	OutAgeText();
	return 0;
};*/