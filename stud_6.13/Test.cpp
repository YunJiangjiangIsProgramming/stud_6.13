#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//void Print()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//
//private:
//	
//	int _year;
//	int _month;
//	int _day;
//
//};
//
////class A
////{
////public:
////	A(int a)
////		:_a1(a)
////		, _a2(_a1)
////	{}
////
////	void Print() {
////		cout << _a1 << " " << _a2 << endl;
////	}
////private:
////	int _a2;
////	int _a1;
////};
//
////class B
////{
////public:
////	B()
////	{}
////
////private:
////	A _aa;
////	int& _ref;
////};
//
//class A//����A�����˶��ٸ����� ֱ�Ӽ�������˶��ٴι��캯���Ϳ����� ֻ�й��캯���ܹ���������
//{
//public:
//	A()//Ĭ�Ϲ��캯��
//	{
//		++n;
//	}
//	A(const A& a)//��������
//	{
//		++n;
//	}
//	static int Getn()//static���κ��� û��thisָ�� �����в��ܷ��ʷǾ�̬��Ա
//	{
//		return n;
//	}
//private:
//	static int n;//n�ھ�̬��������ĳ������ ���������
//	//n���ڶ����� n�ھ�̬��
//};
//A f1(A a)
//{
//	return a;//��ֵ���úʹ�ֵ���ع����зֱ������һ�ο�������
//}
//
//int A::n = 0;
//int main()
//{
//	
//
//	//Date d1(2024, 6, 13);//����
//	//d1.Print();
//
//	//Date d2 = 2;//��ʽ���͵�ת���������tmp(2)+��tmp��������d2
//	////���Ƶ���int i =0; double d= i;���Ȱ�iת����һ��double���͵���ʱ����Ȼ����ȥ����d
//
//	//d2.Print();
//	//Date d3 = d1;//��������
//	A a1;
//	A a2(a1);
//	f1(a1);
//	f1(a2);
//	
//	cout << A::Getn()<< endl;
//	std::cout << "n��ֵ��: " << A::Getn() << std::endl;//��������ʾ�����ĵ�ַ ��Ҫ��дһ����������������
//
//
//	return 0;
//}

class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{}

	void Print() {
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
};

class B
{
public:
	B()
	{}

private:
	//A _aa;
	//int& _ref;
};




// C++98
class Date
{
public:
	// 1. ���ι��캯����û��ʹ��explicit���Σ���������ת������
	// explicit���ι��캯������ֹ����ת��---explicitȥ��֮�󣬴������ͨ������
	//explicit Date(int year)
	/*Date(int year)
		:_year(year)
	{}*/

	
	// 2. ��Ȼ�ж�����������Ǵ�������ʱ�������������Բ����ݣ�û��ʹ��explicit���Σ���������ת������
	// explicit���ι��캯������ֹ����ת��

	Date(int year = 1, int month = 1, int day = 1)
	: _year(year)
	, _month(month)
	, _day(day)
	{}

	/*
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}
	*/
private:
	int _year;
	int _month;
	int _day;
};


//string(const char* str)
//{}
//void push_back(const string& s);

int main()
{
	int i = 0;
	double d = i;
	const double& rd = i;

	Date d1(2022);
	// ��ʽ���͵�ת��
	Date d2 = 2022;
	const Date& d5 = 2022;

	Date d3(d1);
	Date d4 = d1;

	//string s1("hello");
	//push_back(s1);

	//string s2 = "hello";
	//push_back(s2);

	//push_back("hello");

	return 0;
}

// C++11

//class Date
//{
//public:
//	// ���������
//	//explicit Date(int year, int month, int day)
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1 = { 2022, 10, 12 };
//
//	// �ȼ���
//	Date d2(2022, 10, 12 );
//
//	const Date& d3 = { 2022, 10, 12 };
//
//	return 0;
//}
