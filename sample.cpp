#include <locale.h>
#include <tchar.h>

#include "sqlite3.h"

int _tmain(int argc, _TCHAR *argv[])
{
    setlocale(LC_ALL, "");

    int ret;

    // データベースのオープン
    // オープンに失敗しても、Closeは行う必要がある。
    sqlite3 *db = NULL;
    ret = sqlite3_open("testdb.db", &db);
    sqlite3_close(db);
    return 0;
}