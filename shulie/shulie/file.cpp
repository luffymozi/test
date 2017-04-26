#include "stdafx.h"
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
void main() {
	ofstream outfile("D:\\student.txt");
	char name[8], id[8];
	int jiben, jiaban, jiangjin, kouchu, shifa;
	outfile << "职工编号" << "  " << "姓名" << "   " << setw(8) << "基本工资" << "   " << "加班工资" << setw(8) << "奖金" << setw(8) << "扣除" << "  " << setw(8) << "实发工资" << "  " << endl;
	for (int i = 0; i<3; i++) {
		cout << "输入职工编号: "; cin >> id;
		cout << "输入姓    名: "; cin >> name;
		cout << "输入基本工资: "; cin >> jiben;
		cout << "输入加班工资: "; cin >> jiaban;
		cout << "输入奖金: "; cin >> jiangjin;
		cout << "输入扣除: "; cin >> kouchu;
		shifa = jiben + jiaban + jiangjin - kouchu;
		outfile << setiosflags(ios::left) << setw(8) << id << "  " << setw(8) << name << "  " << setw(8) << jiben << "  " << setw(8) << jiaban << " " << setw(8) << jiangjin << " " << setw(8) << kouchu << " " << setw(8) << shifa << endl;
	}
	outfile.close();
}