#pragma once
#include <string>
#include <iostream>

#include "sqlite/sqlite3.h"

using namespace std;

class DataBaseReader
{
	private: 
		const string DataBaseName = "Text.db";
		sqlite3* db;

	public:
		DataBaseReader();
		~DataBaseReader();
		string GetStringByKey(string key);
};