#include "module_1.h"
struct rostt
{
	string fam, name, otchest;
	int rost, massa;
};
void enter()
{
	ofstream fout("rost.txt");
	int n;
	cout << "������� ���-�� �������:";
	cin >> n;
	rostt* arr = new rostt[n];
	for (int i = 0; i < n; i++)
	{
		cout << "������ " << i + 1 << endl;
		cout << " �������:";
		cin >> arr[i].fam;
		cout << " ���:";
		cin >> arr[i].name;
		cout << " ��������:";
		cin >> arr[i].otchest;
		cout << " ���� :";
		cin >> arr[i].rost;
		cout << " ����� :";
		cin >> arr[i].massa;
		fout << arr[i].fam << " " << arr[i].name << " " << arr[i].otchest << " " << arr[i].rost << " " << arr[i].massa << endl;
	}
	fout.close();
	delete[] arr;
}