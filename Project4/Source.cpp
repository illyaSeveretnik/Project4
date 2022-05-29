#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Завдання №1"<< endl;
    int M = 1, N = 1;
    cout << "Розмiр першого масива -> ";
    cin >> M;
    cout << "\nРозмiр другого масива -> ";
    cin >> N;
    int* A = new int[M];
    int* B = new int[N];
    cout << "\nПерший масив -> ";
    for (int i = 0; i < M; i++)
    {
        A[i] = rand() % 15;
        cout << A[i] << " ";
    }
    cout << "\nДругий масив -> ";
    for (int i = 0; i < N; i++)
    {
        B[i] = rand() % 15;
        cout << B[i] << " ";
    }

    int tmp = 0;
    for (int x = 0; x < M; x++)
    {
        for (int y = 0; y < N; y++)
        {
            if (A[x] == B[y])
            {
                tmp++;
            }
        }
    }

    int O = tmp;
    int* TMP = new int[O];
    tmp = 0;
    for (int y = 0; y < N; y++)
    {
        for (int z = 0; z < M; z++)
        {
            if (B[y] == A[z])
            {
                TMP[tmp] = B[y];
                tmp++;
            }
        }
    }
    int* C = new int[O];
    cout << "\n\nТретiй масив -> ";
    for (int i = 0; i < O; i++)
    {
        C[i] = TMP[i];
        cout << C[i] << " ";
    }
    
}