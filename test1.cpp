/*#include <iostream>//从现在开始标准的输入输出流操作可用,并在此链接的作用下,将编译后的输入/输出指令转化成对应的输入/输出硬件设备的操作
int main(){
	std::cout<<"hello world.\n";//"<<"指示将后面的数据送到显示器设备上去,“\+char"表示不可见控制字符
}//std::cout 指标准库里的cout，避免和程序员自身起名为cout的函数冲突
*/
#include <iostream>
using namespace std;
int main(){
	double radius;
	double result;
	cout<<"please input radius:";//将 please input radius:送到显示设备上去
	cin>>radius;//由键盘上输入一个数，赋值给radius
	result=radius*radius*3.14;
	cout<<"The result is"<<result<<"\n";
}