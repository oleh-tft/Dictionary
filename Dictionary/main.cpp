#include <iostream>
#include <map>
#include "windows.h"
#include "Dictionary.h"
using namespace std;

int main()
{
    system("color 06");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Dictionary dict;
    int action;

    do
    {
        cout << "1. ������ ��������" << endl;
        cout << "2. �������� ��������" << endl;
        cout << "3. ������ ��������" << endl;
        cout << "4. �������� � ����" << endl;
        cout << "5. �������� �������" << endl;
        cout << "������ ��: ";
        cin >> action;
        cout << endl;

        switch (action)
        {
        case 1:
            dict.AddTranslation();
            break;
        case 2:
            dict.DeleteTranslation();
            break;
        case 3:
            dict.FindTranslation();
            break;
        case 4:
            dict.SaveToFile();
            break;
        case 5:
            dict.Print();
            break;
        }

    } while (action > 0 && action < 6);

    return 0;
}