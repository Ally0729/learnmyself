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
	int results=2;
	cout<<"please input radius:";//�� please input radius:�͵���ʾ�豸��ȥ
	cin>>radius;//�ɼ���������һ��������ֵ��radius
	result=radius*radius*3.14;
	//cout<<"The result is"<<result<<"\n";
	cout<<"The result is"<<result<<endl;//endlҲ�����һ���س����������\n��\nֻ�������һ���س��ַ�����endl��ˢ���˻��������൱��std::cout<<'\n'<<std::flush;
	//��νˢ�»�������ָ�������������ݸ��Ʋ���ջ�����
}