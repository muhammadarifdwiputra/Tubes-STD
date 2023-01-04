#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
using namespace std ;
#define next(Q) (Q)->next
#define info(Q) (Q)->info
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

typedef struct ManusiaLapar infotype;
typedef struct elementManusia *adrQueue;

struct ManusiaLapar{
    string Nama;
    string Jenis_Kelamin ;
};

struct elementManusia {
    infotype info;
    adrQueue next;
};

struct Antrian {
    adrQueue Head;
    adrQueue Tail;
};


void createAntrian(Antrian &Q);
void createElement(infotype X, adrQueue &pManusia);
void enqueue(Antrian &Q, adrQueue pManusia);
void dequeue(Antrian &Q, adrQueue &pManusia);
void showSemuaAntrian(Antrian Q);


#endif // QUEUE_H_INCLUDED
