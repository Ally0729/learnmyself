/*#include <iostream>//�����ڿ�ʼ��׼�������������������,���ڴ����ӵ�������,������������/���ָ��ת���ɶ�Ӧ������/���Ӳ���豸�Ĳ���
int main(){
	std::cout<<"hello world.\n";//"<<"ָʾ������������͵���ʾ���豸��ȥ,��\+char"��ʾ���ɼ������ַ�
}//std::cout ָ��׼�����cout������ͳ���Ա��������Ϊcout�ĺ�����ͻ
*/
/*#include <iostream>
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
}*/
/*#include <iostream>
using namespace std;
int main(){
	cout<<'h'+'h'<<endl;//���208����Ϊh��ascii��Ϊ104(ʮ����)������'h'����һ��������'h'+'h'����һ�����ʽ������õ�208
	//cout<<"hello"+"world"//error������ָ�벻��ֱ�����
	cout<<"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"+'A';
	cout<<"abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmn"+65;
	//6��7�еȼۣ���ΪA��ascii����65(ʮ����)
	//cout���һ���ַ����൱���õ��ַ���ָ�룬����ʼλ��һֱ���ֱ������\0����+65����ʾ�ַ���ָ�������65λ��ʼ���ֱ������\0
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
#include <iostream>//��׼���ü�����������
#include "Sales_item.h"//�Ǳ�׼����������������ʹ������࣬�����������ͷ�ļ���������
using namespace std;
int main(){
	Sales_item book;
	cin>>book.price;
	cout<<book.price<<endl;
	return 0;//return 0 means normal return
}