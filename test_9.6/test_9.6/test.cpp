 #define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//#include<fstream>
//
//void test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);//��ָ��·��ʱ��Ĭ�ϴ����ļ��ڸ���Ŀ��
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
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
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//��һ�ַ�ʽ������
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//	//������
//	//string buf;
//	//while (getline(ifs, buf))//stringͷ�ļ�
//	//{
//	//	cout << buf << endl;
//	//}
//	//������ ���Ƽ�
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
//	Person p = { "����",18 };
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
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char*)&p, sizeof(p));
//	cout << "������" << p.m_name << "  ���䣺" << p.m_age << endl;
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}