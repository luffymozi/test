// test.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
int func();
void fn();
static int n = 15;
int main()
{
	func();
	extern int num;
	extern  void fn();
	cout << num << endl;
	cout << "before" << " " << n << endl;
	fn();
	system("pause");
	return 0;
}
int num = 3;
int func() {
	cout << num;
	cout << endl;
	return 0;
}
void fn() 
{

	n++;
	cout << "after" << " " << n;
}

