 #define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//#include<fstream>
//
//void test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);//不指定路径时，默认创建文件在该项目下
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	ofs.close();
//}
//#include<string>
//#include<fstream>
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//第一种方式读数据
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//	//第三种
//	//string buf;
//	//while (getline(ifs, buf))//string头文件
//	//{
//	//	cout << buf << endl;
//	//}
//	//第四种 不推荐
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c ;
//	}
//	ifs.close();
//}

#include<fstream>
//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test01()
//{
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//}

//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test01()
//{
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//	cout << "姓名：" << p.m_name << "  年龄：" << p.m_age << endl;
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}