#pragma once
#include "sqlite/sqlite3.h"
#include <string>

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