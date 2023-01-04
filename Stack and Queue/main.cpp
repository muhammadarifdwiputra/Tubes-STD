#include "stack.h"
#include "queue.h"



int main()
{
    /*Antrian A;
    tumpukanMakanan B;

    createAntrian(A);
    createTumpukan(B);*/

    Antrian Q ;
    tumpukanMakanan R;
    int KOrang;
	int NOrang = 3;
	int iOrang = 1 ;
	int JOrang = 1;
	infotype orang ;
	adrQueue pManusia ;

	createAntrian(Q);
	while (iOrang<=NOrang){
		cout<<"Orang Ke : "<<iOrang<<endl;
		cout<<"Nama : ";
		cin>>orang.Nama ;
		cout<<"Jenis Kelamin : ";
		cin>>orang.Jenis_Kelamin;
		pManusia = new elementManusia ;
		createElement(orang, pManusia);
		enqueue(Q,pManusia);
		iOrang++;
		cout<<endl;
	}

    int NMakanan = 3 ;
    int iMakanan = 1;
    int KMakanan ;
    int JMakanan = 1;
    createTumpukan(R);
    while(iMakanan<=NMakanan){
        string Makanan ;
        cout<<"Makanan Ke : "<< iMakanan<< endl;
        cout<<"Nama Makanan : ";
        cin>> Makanan;
        tambahMakanan(R,Makanan);
        iMakanan++;
        cout<<endl;

    }
    /*for(int i = 0; i<NMakanan; i++){
        string NamaMakanan;
        cout<<"Nama Makanan "<<i+1<<": ";
        cin>>NamaMakanan;
        tambahMakanan(R,NamaMakanan);
    }*/

    cout<<"------Antrian Semula------"<<endl;
	showSemuaAntrian(Q);

    cout<<"-----Makanan Awal-----"<<endl;
    showMakanan(R);

    cout<<"Berkurang Antrian : ";
    cin>>KOrang;
    while(JOrang<=KOrang){
      dequeue(Q,pManusia);
      JOrang++;
    }

    cout<<"Berkurang Makanan : ";
    cin>>KMakanan;
    while(JMakanan<=KMakanan){
        hapusMakanan(R);
        JMakanan++;
    }

	cout<<"------Antrian Tersisa------"<<endl;
	showSemuaAntrian(Q);

	cout<<"-----Makanan Tersisa-----"<<endl;
    showMakanan(R);

	return 0;
    /*int NMakanan;
    int NOrang;

    cout<<"Masukan Jumlah Makanan : ";
    cin>>NMakanan;
    for(int i = 0; i<NMakanan; i++){
        string NamaMakanan;
        cout<<"Nama Makanan "<<i+1<<": ";
        cin>>NamaMakanan;
        tambahMakanan(B,NamaMakanan);
    }

    cout<<"Masukkan Jumlah Orang : ";
    cin>>NOrang;
    for(int i = 0; i< NOrang;i++){
        infotype orang;
        adrQueue C;
        cout<<"Nama : ";
        cin>>orang.Nama;
        cout<<"Jenis Kelamin : ";
        cin>>orang.Jenis_Kelamin;
        createElement(orang,C);
        enqueue(A,C);

    }
    AmbilMakanan(A,B);
    showSemuaAntrian(A);
    showMakanan(B);
    return 0;*/
}
