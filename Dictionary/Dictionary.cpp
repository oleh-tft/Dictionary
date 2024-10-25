#include "Dictionary.h"



Dictionary::Dictionary()
{
    dict.insert(make_pair("dog", "собака"));
    dict.insert(make_pair("cat", "кішка"));
    dict.insert(make_pair("parrot", "папуга"));
}

void Dictionary::AddTranslation()
{
    string key, value;
    cout << "Введіть слово англ.:";
    cin >> key;
    cout << "Введіть переклад:";
    cin >> value;
    dict.insert(make_pair(key, value));

    cout << "Ви додали слово " << key << " до словника.\n\n";
}

void Dictionary::DeleteTranslation()
{
    string key;
    cout << "Введіть слово англ.:";
    cin >> key;
    if (dict.erase(key) == 0)
    {
        cout << "У словнику немає даного слова!\n\n";
        return;
    }
    cout << "Ви видалили слово " << key << " зі словника.\n\n";
}

void Dictionary::FindTranslation()
{
    string key;
    cout << "Введіть слово для пошуку англ.:";
    cin >> key;

    auto ptrf = dict.find(key);
    if (ptrf != dict.end())
    {
        cout << ptrf->first << " - " << ptrf->second << endl << endl;
        return;
    }
    cout << "У словнику немає даного слова!\n\n";
}

void Dictionary::SaveToFile()
{
    ofstream out("Dictionary.txt");

    if (out.is_open())
    {
        for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
        {
            out << ptr->first << " - " << ptr->second << "\n";
        }

        out.close();
        cout << "Словник було збережено у файл.\n\n";
    }
    else
    {
        cout << "Не вдалося відкрити файл!\n\n";
    }
}

void Dictionary::Print()
{
    for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
    {
        cout << ptr->first << " - " << ptr->second << endl;
    }

    cout << endl;
}
