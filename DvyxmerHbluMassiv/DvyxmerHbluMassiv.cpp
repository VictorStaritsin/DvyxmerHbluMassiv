#include <conio.h>
#include <iostream>
#include <ctime>
using namespace std;

/*
Создайте двухмерный массив. Заполните его
случайными числами и покажите на экран. Пользователь
выбирает количество сдвигов и положение (влево, вправо,
вверх, вниз). Выполнить сдвиг массива и показать на
экран полученный результат. Сдвиг циклический.
*/

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    //Создадим двухмерный массив и заполним его случайными числами
    const int Rows = 4;
    const int Column = 4;
    const int Size = Rows * Column;
    int arr[Rows][Column];
    int arr_si[Size];
    int random;
    bool hasalready;
    for (int i = 0; i < Size;) {
        hasalready = false;
        random = rand() % 100;
        for (int j = 0; j < i; j++) {
            if (arr_si[i] == random)
            {
                hasalready = true;
                break;
            }
        }
        if (!hasalready)
        {
            arr_si[i] = random;
            i++;
        }
    }
    int temporary = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Column; j++)
        {
            arr[i][j] = arr_si[temporary];
            temporary++;
        }
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Column; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
/*
Сдвиг не смог сделать
*/