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
	int results=2;
	cout<<"please input radius:";//将 please input radius:送到显示设备上去
	cin>>radius;//由键盘上输入一个数，赋值给radius
	result=radius*radius*3.14;
	//cout<<"The result is"<<result<<"\n";
	cout<<"The result is"<<result<<endl;//endl也是输出一个回车，但是相比\n，\n只是输出了一个回车字符，而endl还刷新了缓冲区，相当于std::cout<<'\n'<<std::flush;
	//所谓刷新缓冲区是指将缓冲区的内容复制并清空缓冲区
}