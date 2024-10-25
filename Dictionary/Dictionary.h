#pragma once
#include <iostream>
#include <map>
#include <fstream>
using namespace std;

class Dictionary
{
	map<string, string> dict;

public:
	Dictionary();
	void AddTranslation();
	void DeleteTranslation();
	void FindTranslation();
	void SaveToFile();
	void Print();
};