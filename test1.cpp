/*#include <iostream>//�����ڿ�ʼ��׼�������������������,���ڴ����ӵ�������,������������/���ָ��ת���ɶ�Ӧ������/���Ӳ���豸�Ĳ���
int main(){
	std::cout<<"hello world.\n";//"<<"ָʾ������������͵���ʾ���豸��ȥ,��\+char"��ʾ���ɼ������ַ�
}//std::cout ָ��׼�����cout������ͳ���Ա��������Ϊcout�ĺ�����ͻ
*/
#include <iostream>
using namespace std;
int main(){
	double radius;
	double result;
	cout<<"please input radius:";//�� please input radius:�͵���ʾ�豸��ȥ
	cin>>radius;//�ɼ���������һ��������ֵ��radius
	result=radius*radius*3.14;
	cout<<"The result is"<<result<<"\n";
}