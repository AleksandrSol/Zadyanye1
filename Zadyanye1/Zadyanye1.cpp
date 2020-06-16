#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Ukrainian");
    cout << "IПЗI 18К\n";
    cout << "Соляной Олександр Олегович\n";
    cout << "Одновимiрнi масиви\n";
    cout << "номер завдання 1\n";
    int mas[10] = { 1,10,2,20,3,30,4,40,5,50 };
    for (int i = 0; i < 10; i += 2)
    {
        cout << mas[i] << '\t' << mas[i + 1] << '\n';

    }
    system("pause>>void");
}
