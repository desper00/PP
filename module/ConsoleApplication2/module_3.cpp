#include "module_3.h"
void save()
{
	ifstream fin("rost2.txt");
	ofstream fout("result.txt");
	string buffer;
	while (getline(fin, buffer))
	{
		fout << buffer << endl;
	}
	fin.close();
	fout.close();
	cout << "��������� ������� � ����: result.txt" << endl;
}