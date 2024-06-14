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
//class A//计算A创建了多少个对象 直接计算调用了多少次构造函数就可以了 只有构造函数能够创建对象
//{
//public:
//	A()//默认构造函数
//	{
//		++n;
//	}
//	A(const A& a)//拷贝构造
//	{
//		++n;
//	}
//	static int Getn()//static修饰函数 没有this指针 函数中不能访问非静态成员
//	{
//		return n;
//	}
//private:
//	static int n;//n在静态区不属于某个对象 属于这个类
//	//n不在对象中 n在静态区
//};
//A f1(A a)
//{
//	return a;//传值调用和传值返回过程中分别调用了一次拷贝构造
//}
//
//int A::n = 0;
//int main()
//{
//	
//
//	//Date d1(2024, 6, 13);//构造
//	//d1.Print();
//
//	//Date d2 = 2;//隐式类型的转换，构造出tmp(2)+用tmp拷贝构造d2
//	////类似等于int i =0; double d= i;会先把i转化成一个double类型的临时变量然后再去构造d
//
//	//d2.Print();
//	//Date d3 = d1;//拷贝构造
//	A a1;
//	A a2(a1);
//	f1(a1);
//	f1(a2);
//	
//	cout << A::Getn()<< endl;
//	std::cout << "n的值是: " << A::Getn() << std::endl;//函数名表示函数的地址 不要在写一个函数名字来调用
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
	// 1. 单参构造函数，没有使用explicit修饰，具有类型转换作用
	// explicit修饰构造函数，禁止类型转换---explicit去掉之后，代码可以通过编译
	//explicit Date(int year)
	/*Date(int year)
		:_year(year)
	{}*/

	
	// 2. 虽然有多个参数，但是创建对象时后两个参数可以不传递，没有使用explicit修饰，具有类型转换作用
	// explicit修饰构造函数，禁止类型转换

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
	// 隐式类型的转换
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
//	// 多参数构造
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
//	// 等价于
//	Date d2(2022, 10, 12 );
//
//	const Date& d3 = { 2022, 10, 12 };
//
//	return 0;
//}
