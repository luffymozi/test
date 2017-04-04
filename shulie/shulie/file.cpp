#include "stdafx.h"
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
void main() {
	ifstream infile("D:\\student.txt");
	char name[8], id[8];
	int jiben, jiaban, jiangjin, kouchu, shifa;
	cout << "职工编号" << "  " << "姓名" << "   " << setw(8) << "基本工资" << "   " << "加班工资" << setw(8) << "奖金" << setw(8) << "扣除" << "  " << setw(8) << "实发工资" << "  " << endl;
	infile >> id;
	while (!infile.eof()) {
		infile >> name >> jiben >> jiaban >> jiangjin >> kouchu >> shifa;
		cout << setiosflags(ios::left) << setw(8) << id << "  " << setw(8) << name << "  " << setw(8) << jiben << "  " << setw(8) << jiaban << " " << setw(8) << jiangjin << " " << setw(8) << kouchu << " " << setw(8) << shifa << endl << endl;
		infile >> id;
	}
	infile.close();
	system("pause");
}