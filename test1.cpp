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

/*#include <iostream>//��׼���ü�����������
#include "Sales_item.h"//�Ǳ�׼����������������ʹ������࣬�����������ͷ�ļ���������
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
		"Ally"<<endl;//�Կո񣬻س����Ʊ���ֿ��Ķ���ַ�����ʵ���Ͽ�������һ�䣬�����мǲ�����+��������Ϊָ�벻�����
}*/

/*#include <iostream>
#include <string>//Ҫʹ��string��������string��׼��ͷ�ļ�
using namespace std;
int main(){
	int i=0;//���Ƴ�ʼ��
	int j(0);//ֱ�ӳ�ʼ��
	cout<<i<<endl<<j<<endl;
	//�����������ͣ�ֱ�ӳ�ʼ���͸��Ƴ�ʼ������û������
	string str1="A little cat.";
	string str2("A little dog.");
	//���ֳ�ʼ����ʽ������ʹ��,str1��str2������Ӧ�ַ�������ֵ�ĸ���
	//��Դ��string str1=string("A little cat."); string("A little cat.")��string�����ͨ���캯���������ַ�������ֵ������һ������
	cout<<str1<<endl<<str2<<endl;
	string str3(10,'p');//ֻ����ֱ�ӳ�ʼ��
	//string str3=10,'p';	error �ж����ʼ��ʽ��ʱ��ֻ��ʹ��ֱ�ӳ�ʼ��
	string str4=string(10,'p');//string(10,'p')��������һ��"pppppppppp"�ַ�������ֵ��str4
	cout<<str3<<endl<<str4<<endl;
}*/

/*#include <iostream>
using namespace std;
extern int i=0;//�Ա��������˳�ʼ��������extern����Ҳ�Ƕ��壬�������������ֻ��λ�ں�������
int main(){
	//�����Ķ��壺����Ϊ��������洢�ռ䣬��ʱ������Ϊ����ָ����ʼֵ����һ�������У�һ���������ҽ���һ������
	//���������������������������������ͺ����֣�����Ҳ�����������������ʱ�����Ѿ��������������ͺ�����,���������кܶ��
	//Ҳ����˵���������������壬���Ƕ���һ����ζ�������ˣ�������extern�ؼ�������������
	extern int i;//�������ǲ�����
	int i;//�����Ҷ���
}
//�����ڶ���ļ���ʹ�õı������������붨������������extern������
//������һ���ļ��ﶨ�壬ʹ�øñ����������ļ��б�������ñ��������������Ƕ��壩
*/

/*#include <iostream>
#include "other.h"//������other.hͷ�ļ��������OutAgeText()����������Ӧ.cpp�ļ�(other.cpp)�У����OutAgeText()����
using namespace std;
int age=9;//�����ȫ�ֱ���
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
	string str1="Hello";//�ֲ�����������ȫ�ֱ�������˾ֲ�������ú�ȫ�ֱ������ֲ�ͬ
	cout<<str1<<endl;
}*/

/*����const����
#include <iostream>
using namespace std;
int main(){
	const int bufferSize=512;//const��һ�����������һ�������������ʱ������ʼ���������Ժ�ñ�����ֵ�����Ա��޸�
}*/

//����������д
//const����������������ͬ����ȫ��������������cosnt�����Ƕ���ö�����ļ��ľֲ��������˱���ֻ����������ļ��У���Զ���ܱ������ļ�����
//�������const�����������ļ����ñ������extern�ؼ��֣�һ�����ͱ�������ʽ�Զ���extern�ؼ��֣���const����������ʽ��extern�ؼ��֣�
/*#include <iostream>
#include "other.h"//������other.hͷ�ļ��������OutAgeText()����������Ӧ.cpp�ļ�(other.cpp)�У����OutAgeText()����
using namespace std;
extern const int age=9;//age��ɳ������������޸ģ�ͨ��extern�ؼ��֣�ʹ�ñ���ļ�Ҳ���Է���
int main(){
    OutAgeText();
	return 0;
}*/

//һ������
//ʹ��&��ʾ���ã������Ƕ��������һ������
//int i=7;
//int &refi=i; correct
//int &refi; error,����ʱ�����ʼ��
//int &ref=7; error,�ұ߱�����һ��object
//ref++;  means i=8
//int j=ref; means j=8

//const������ָconst���������
//const int i=9��
//const int & refi=i; correct
//const int &refi=9; correct for const ���� only��
//һ������ֻ�ܰ󶨵�����const���ò������԰󶨵����󻹿��԰󶨵�����ֵ

//����������д
/*#include <iostream>
#include "test1.h"
#include "other.h"
using namespace std;
int age=9;//age����Ҫ�������ļ����ã�����ڱ��ļ��ж����ȫ�ֱ������ڱ��ļ���Ӧ��ͷ�ļ��н�������������
               //��������Ҫ����age�������ļ��У�ֻҪinclude���ļ���ͷ�ļ�����
int main(){
	OutAgeText();
	return 0;
};*/