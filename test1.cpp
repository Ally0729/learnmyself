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
#include <iostream>//标准库用尖括号引起来
#include "Sales_item.h"//非标准库用引号引起来，使用这个类，必须把这个类的头文件包含进来
using namespace std;
int main(){
	Sales_item book;
	cin>>book.price;
	cout<<book.price<<endl;
	return 0;//return 0 means normal return
}