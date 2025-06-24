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
	cout << "Введите кол-во записей:";
	cin >> n;
	rostt* arr = new rostt[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Запись " << i + 1 << endl;
		cout << " Фамилия:";
		cin >> arr[i].fam;
		cout << " Имя:";
		cin >> arr[i].name;
		cout << " Отчество:";
		cin >> arr[i].otchest;
		cout << " Рост :";
		cin >> arr[i].rost;
		cout << " Масса :";
		cin >> arr[i].massa;
		fout << arr[i].fam << " " << arr[i].name << " " << arr[i].otchest << " " << arr[i].rost << " " << arr[i].massa << endl;
	}
	fout.close();
	delete[] arr;
}