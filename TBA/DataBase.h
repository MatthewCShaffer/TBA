#pragma once
#include <string>
#include "sqlite/sqlite3.h"

class DataBaseReader
{
	private: 
		const std::string DataBaseName = "Text.db";
		sqlite3* db;

	public:
		DataBaseReader();
		~DataBaseReader();
		std::string GetStringByKey(std::string key);
};