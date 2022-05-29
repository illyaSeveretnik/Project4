#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Завдання #2" << endl;
    int m, n;
    cout << "Розмiр першого масива -> ";
    cin >> m;
    cout << "\nРозмiр другого масива -> ";
    cin >> n;
    int* a = new int[m];
    int* b = new int[n];
    cout << "\nПерший масив -> ";
    for (int i = 0; i < m; ++i)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "\nДругий масив -> ";
    for (int i = 0; i < n; ++i)
    {
        b[i] = rand() % 10;
        cout << b[i] << " ";
    }
    cout << endl;
    int x = 0;
    int* c = new int[x];
    bool fl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i] != b[j])
            {
                fl = true;
            }
            else
            {
                fl = false;
            }
        }
        if (fl == true)
        {
            c[x] = a[i];
            x++;
        }
    }
    cout << "\n\nТретiй масив -> ";
    for (int i = 0; i < x; i++)
    {
        cout << c[i] << " ";
    }
}