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
        cout << "1. Додати переклад" << endl;
        cout << "2. Видалити переклад" << endl;
        cout << "3. Знайти переклад" << endl;
        cout << "4. Зберегти у файл" << endl;
        cout << "5. Показати словник" << endl;
        cout << "Оберіть дію: ";
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