#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>
#include <windows.h>

#define First(L) L.first
#define Next(P) P->next
#define Info(P) P->info

using namespace std;

struct infotype
{
    int ID;
    string name;
    string location;
};

typedef struct elemenList *address;
struct elemenList
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &l);

address alokasi(infotype x);
void dealokasi(address &p);

void insertFirst(List &l, address p);
void insertLast(List &l, address p);
void insertAfter(List &l, address prec, address p);

void deleteFirst(List &l, address &p);
void deleteLast(List &l, address &p);
void deleteAfter(List &l, address &prec, address &p);

address findElm(List l, infotype x);


#endif // LIST_H_INCLUDED
