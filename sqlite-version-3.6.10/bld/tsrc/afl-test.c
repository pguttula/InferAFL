#include<stdio.h>
#include "sqlite3.c"
typedef u32 Pgno;
extern MemPage *btreePageFromDbPage(DbPage *pDbPage, Pgno pgno, BtShared *pBt);

int main() {
//  printf("Hello Fraands! Chai pelo!\n");

  
  Pgno pgno;
  uint64_t ptr1,ptr2;
  //printf("Enter pDbPage");
//  printf("pointer is %p\n",ptr1);
  //printf("Enter pgno");
  if(scanf("%32u",&pgno) <= 0) {
    exit(0);
  }
//  printf("Enter pBt");
  if(scanf("%lu",&ptr2) <= 0){
    exit(0);
  }
  BtShared* pBt;
  pBt=(BtShared*)ptr2;
  if(scanf("%lu",&ptr1) <= 0) {
    exit(0);
  }
  DbPage* pDbPage;
  if(ptr1 == 22453) {
    pDbPage = (DbPage*)malloc(sizeof(struct PgHdr));
    pDbPage->pPager = (Pager *)malloc(sizeof(struct Pager));
    pDbPage->pExtra = malloc(sizeof(struct MemPage));
  } 
  else {
    pDbPage = (DbPage*)malloc(sizeof(struct PgHdr));
    pDbPage->pPager = NULL;
    //pDbPage->pPager = (Pager *)malloc(sizeof(struct Pager));
    pDbPage->pExtra = malloc(sizeof(struct MemPage));
  }
//  printf("here");
  btreePageFromDbPage(pDbPage, pgno,pBt);
//  printf("%d",i);
  return 0;
}
