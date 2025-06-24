#include "module_2.h"
struct rostt
{
    string fam, name, otchest;
    int rost, massa;
};
void find()
{
    int kol = 0;
    int sum = 0;
    int x = 0;
    ifstream fin("rost.txt");
    ofstream fout("rost2.txt");

    while (true)
    {
        string v;
        getline(fin, v);
        if (!fin.eof())
            x++;
        else
            break;
    }
    fin.clear();
    fin.seekg(0);
    rostt* arr1 = new rostt[x];
    for (int i = 0; i < x; i++)
    {
        fin >> arr1[i].fam >> arr1[i].name >> arr1[i].otchest >> arr1[i].rost >> arr1[i].massa;
    }

    cout << "Средний рост:" << endl;
    for (int i = 0; i < x; i++)
    {
        if (arr1[i].rost > 0)
        {
            sum += arr1[i].rost;
            kol++;
        }
    }

    cout << sum / kol << endl;

    cout << "Результат:" << endl;
    int maxx = arr1[0].rost;
    int minn = arr1[0].rost;
    for (int i = 1; i < x; i++)
    {
        if (arr1[i].rost > maxx)
        {
            maxx = arr1[i].rost;
        }
        if (arr1[i].rost < minn)
        {
            minn = arr1[i].rost;
        }
    }
    cout << "Самый высокий: " << endl;
    for (int i = 0; i < x; i++)
    {
        if (arr1[i].rost == maxx)
        {
            cout << arr1[i].fam << " " << arr1[i].name << " " << arr1[i].otchest << ": " << arr1[i].rost << endl;
        }
    }

    cout << "Самый низкий: " << endl;
    for (int i = 0; i < x; i++)
    {
        if (arr1[i].rost == minn)
        {
            cout << arr1[i].fam << " " << arr1[i].name << " " << arr1[i].otchest << ": " << arr1[i].rost << endl;
        }
    }

    fout.close();
    fin.close();
    delete[] arr1;
}