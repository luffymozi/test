#include "stdafx.h"
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
void main() {
	ofstream outfile("D:\\student.txt");
	char name[8], id[8];
	int jiben, jiaban, jiangjin, kouchu, shifa;
	outfile << "ְ�����" << "  " << "����" << "   " << setw(8) << "��������" << "   " << "�Ӱ๤��" << setw(8) << "����" << setw(8) << "�۳�" << "  " << setw(8) << "ʵ������" << "  " << endl;
	for (int i = 0; i<3; i++) {
		cout << "����ְ�����: "; cin >> id;
		cout << "������    ��: "; cin >> name;
		cout << "�����������: "; cin >> jiben;
		cout << "����Ӱ๤��: "; cin >> jiaban;
		cout << "���뽱��: "; cin >> jiangjin;
		cout << "����۳�: "; cin >> kouchu;
		shifa = jiben + jiaban + jiangjin - kouchu;
		outfile << setiosflags(ios::left) << setw(8) << id << "  " << setw(8) << name << "  " << setw(8) << jiben << "  " << setw(8) << jiaban << " " << setw(8) << jiangjin << " " << setw(8) << kouchu << " " << setw(8) << shifa << endl;
	}
	outfile.close();
}