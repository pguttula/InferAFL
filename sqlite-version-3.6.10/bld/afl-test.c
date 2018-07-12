#include<stdio.h>
#include "sqlite3.c"
extern MemPage *btreePageFromDbPage(DbPage *pDbPage, Pgno pgno, BtShared *pBt);

int main() {
  printf("Hello Friends! Chai pelo!\n");
  return 0;
}
