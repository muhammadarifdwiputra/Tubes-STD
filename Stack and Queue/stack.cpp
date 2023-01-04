#include "stack.h"

void createTumpukan(tumpukanMakanan &X){
    X.Top = -1;
}

bool isEmpty(tumpukanMakanan X){
    if(X.Top == -1){
        return true ;
    } else {
        return false ;
    }
}
bool isFull(tumpukanMakanan X){
    if(X.Top == 10){
        return true ;
    } else {
        return false ;
    }
}

void tambahMakanan(tumpukanMakanan &X, string namaMakanan){
    if(isFull(X) == false){
        X.Top += 1;
        X.namaMakanan[X.Top] = namaMakanan;
    } else {
        cout<<"Kepenuhan"<<endl;
    }
}
void hapusMakanan(tumpukanMakanan &X){
    if(isEmpty(X) == false){
        X.namaMakanan[X.Top] = "" ;
        X.Top -= 1 ;
    } else {
        cout<<"Kosong"<<endl;
    }
}
void showMakanan(tumpukanMakanan X){
    if(X.Top != -1){
        for(int i = 0; i <= X.Top; i++){
            cout<<"Makanan : "<<endl;
            cout<<X.namaMakanan[i]<<endl;
        }
    }
}
