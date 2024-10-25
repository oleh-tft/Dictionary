#include "Dictionary.h"



Dictionary::Dictionary()
{
    dict.insert(make_pair("dog", "������"));
    dict.insert(make_pair("cat", "����"));
    dict.insert(make_pair("parrot", "������"));
}

void Dictionary::AddTranslation()
{
    string key, value;
    cout << "������ ����� ����.:";
    cin >> key;
    cout << "������ ��������:";
    cin >> value;
    dict.insert(make_pair(key, value));

    cout << "�� ������ ����� " << key << " �� ��������.\n\n";
}

void Dictionary::DeleteTranslation()
{
    string key;
    cout << "������ ����� ����.:";
    cin >> key;
    if (dict.erase(key) == 0)
    {
        cout << "� �������� ���� ������ �����!\n\n";
        return;
    }
    cout << "�� �������� ����� " << key << " � ��������.\n\n";
}

void Dictionary::FindTranslation()
{
    string key;
    cout << "������ ����� ��� ������ ����.:";
    cin >> key;

    auto ptrf = dict.find(key);
    if (ptrf != dict.end())
    {
        cout << ptrf->first << " - " << ptrf->second << endl << endl;
        return;
    }
    cout << "� �������� ���� ������ �����!\n\n";
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
        cout << "������� ���� ��������� � ����.\n\n";
    }
    else
    {
        cout << "�� ������� ������� ����!\n\n";
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
