#include "queue.h"

void createAntrian(Antrian &Q){
    Head(Q) = nil;
    Tail(Q) = nil;
}
void createElement(infotype X, adrQueue &pManusia){
    adrQueue P = new elementManusia;
    info(P) = X;
    next(P) = nil;
    pManusia = P;
}
void enqueue(Antrian &Q, adrQueue pManusia){
    if(Head(Q) == nil && Tail(Q) == nil){
       Head(Q) = pManusia;
       Tail(Q) = pManusia;
    }else if(Head(Q) == Tail(Q)){
        next(Head(Q)) = pManusia;
        Tail(Q) = pManusia;
    } else{
        next(Tail(Q)) = pManusia;
        Tail(Q) = pManusia;
    }
}
void dequeue(Antrian &Q, adrQueue &pManusia){
    if(Head(Q) == nil && Tail(Q) == nil){
        cout<<"Kosong"<<endl;
    }else if(Head(Q)==Tail(Q)){
        pManusia = Head(Q);
        Head(Q) = nil;
        Tail(Q) = nil;
    } else {
        pManusia = Head(Q);
        Head(Q) = next(Head(Q));
        next(pManusia) = nil;
    }
}
void showSemuaAntrian(Antrian Q){
    if(Head(Q) == nil && Tail(Q) == nil){
        cout<<"Kosong"<<endl;
    } else{
        adrQueue P = Head(Q);
        while(P!=nil){
            cout<<"Nama : "<<info(P).Nama<<endl;
            cout<<"Jenis Kelamin : "<<info(P).Jenis_Kelamin<<endl;
            P = next(P);
        }
    }
}
