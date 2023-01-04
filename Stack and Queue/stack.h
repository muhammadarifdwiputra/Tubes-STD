#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
using namespace std ;
#define Top(X) ((X).Top)
#define Info(X) ((X).Info)

struct tumpukanMakanan{
    string namaMakanan[10];
    int Top;
};

bool isEmpty(tumpukanMakanan X);
bool isFull(tumpukanMakanan X);
void createTumpukan(tumpukanMakanan &X);
void tambahMakanan(tumpukanMakanan &X,string namaMakanan);
void hapusMakanan(tumpukanMakanan &X);
void showMakanan(tumpukanMakanan X);

#endif // STACK_H_INCLUDED
