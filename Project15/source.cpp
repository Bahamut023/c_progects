#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    short menu = 0;
    cout << "Лабиринт: \n";
    cout << "[1] Лабиринт 15*15 \n";
    cout << "[2] Лабиринт 20*20 \n";
    cout << "[3] Лабиринт 30*30 \n";
    cout << "Выберите вариант лабиринта: \n";
    cin >> menu;

    int arr1[15][15] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                       {0,0,1,0,0,0,0,1,0,0,0,1,0,0,1},
                       {1,0,1,0,1,1,0,1,0,1,0,0,1,0,1},
                       {1,0,0,0,1,1,0,0,0,1,0,1,1,1,1},
                       {1,1,1,1,1,1,1,0,1,1,0,1,0,0,1},
                       {1,0,0,0,1,1,1,0,1,1,0,0,0,1,1},
                       {1,0,1,0,1,1,1,0,0,0,0,1,1,0,1},
                       {1,0,1,0,0,0,0,0,1,1,0,1,1,0,1},
                       {1,1,1,0,1,0,1,1,0,1,0,0,0,0,1},
                       {1,0,1,0,1,0,1,0,0,1,1,1,1,1,1},
                       {1,0,1,0,1,1,1,0,1,0,0,0,1,0,1},
                       {1,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
                       {1,1,1,0,1,0,1,0,1,1,1,1,1,1,1},
                       {1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
                       {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };

    int arr2[20][20] = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                       {0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,1},
                       {1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1},
                       {1,0,0,0,1,1,0,0,0,1,0,1,1,1,1,0,1,0,1,1},
                       {1,1,1,1,1,1,1,0,1,1,0,1,0,0,1,0,1,0,1,1},
                       {1,0,0,0,1,1,1,0,1,1,0,0,0,1,1,0,1,0,1,1},
                       {1,0,1,0,1,1,1,0,0,0,0,1,1,0,1,0,1,0,1,1},
                       {1,0,1,0,0,0,0,0,1,1,0,1,1,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,1,1,0,1,0,0,0,0,1,0,1,0,1,1},
                       {1,0,1,0,1,0,1,0,0,1,1,1,1,1,1,0,1,0,1,1},
                       {1,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,0,0},
                       {1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1},
                       {1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1},
                       {1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},
                       {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1},
                       {1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},
                       {1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1},
                       {1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1},
                       {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
                       {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };

    int arr3[30][30] = {


    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,0,0,1,1,1,1,0,0,0,0,0,1,1},
    {1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {1,0,0,0,1,1,0,0,0,1,0,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,1,1,1,1,1,1,0,1,1,0,1,0,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,0,0,0,1,1,1,0,1,1,0,0,0,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,0,1,0,1,1,1,0,0,0,0,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,0,1,0,0,0,0,0,1,1,0,1,1,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,1,1,0,1,0,1,1,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,0,1,0,1,0,1,0,0,1,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1},
    {   1,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1},
    {   1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0},
    {   1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,0,1,0,1,1,0,1,0,0,0,0,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,0,1,0,1,0,1,0,0,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,0,1,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1},
    {   1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1},
    {   1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };


    switch (menu)
    {
    case 1:
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                if (arr1[i][j] == 1)
                {
                    cout << "#";
                }
                else if (arr1[i][j] == 0)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 2:
        for (int k = 0; k < 20; k++)
        {
            for (int l = 0; l < 20; l++)
            {
                if (arr2[k][l] == 1)
                {
                    cout << "#";
                }
                else if (arr2[k][l] == 0)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 3:
        for (int o = 0; o < 30; o++)
        {
            for (int h = 0; h < 30; h++)
            {
                if (arr3[o][h] == 1)
                {
                    cout << "#";
                }
                else if (arr3[o][h] == 0)
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
        break;
    default:
        cout << "Нет такого значения! \n";
        break;
    }
    return 0;
}