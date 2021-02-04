#include "DataBase.h"

using namespace std;

DataBaseReader::DataBaseReader() {
    if (sqlite3_open(DataBaseName.c_str(), &db) != SQLITE_OK) {
        throw exception(("Can't open database: " + string(sqlite3_errmsg(db)) + "\n").c_str());
    }
}

DataBaseReader::~DataBaseReader()
{
    sqlite3_close(db);
}


string DataBaseReader::GetStringByKey(string key) {
    
    sqlite3_stmt* stmt;
    string result;

    sqlite3_prepare(db, "select text from textStrings where key = ? limit 1;", -1, &stmt, nullptr);
    sqlite3_bind_text(stmt, 1, key.c_str(), key.size() + 1, nullptr);
    sqlite3_step(stmt);

    if (sqlite3_column_text(stmt, 0))
    {
        result = string((char*)sqlite3_column_text(stmt, 0));
        cout << "Unable to get string with key:" + key;
    }
    else
    {
        result = "Error: String not found in Database";
    }
    sqlite3_finalize(stmt);
       
    return result;
}