#include <iostream>
using namespace std;

/*
Project Matkul Daspro Smt1
Program Mesin Kasir Simple
By  : M. R. Reza Pahlevi
NIM : A11.2021.13369
*/
int main(){
    int kode,jumlah,total,harga,bayar,diskon,pajak;
    char ukuran;
    string merk;

    cout<<"whazzup! welcome to ZUPPERMARKET!"<<endl;
    cout<<"List Barangnya ini gaezzz                                    Harga"<<endl;
    cout<<"(1)Susu Indomilk                                            Rp 5000(s)  Rp 7500(m)  Rp 9500(l)"<<endl;
    cout<<"(2)Susu Dancow                                              Rp 4500(s)  Rp 6500(m)  Rp 8500(l)"<<endl;
    cout<<"(3)Susu Sustagen                                            Rp 9500(s)  Rp 15000(m) Rp 19500(l)"<<endl;
    cout<<"Masukan kode yang ingin dibeli   :";
    cin>>kode;
    cout<<"mau ukuran apa nih? ada small(s), medium(m), large(l)    :";
    cin>>ukuran;
    cout<<"mau beli berapa gan? ";
    cin >> jumlah;
    if (kode==1){
        switch (ukuran){
            case 's' :
                harga = 5000;
                merk = "Indomilk";break;
            case 'm' :
                harga =7500;
                merk = "Indomilk";break;
            case 'l' :
                harga =9500;
                merk = "Indomilk";break;
        }
    }
    else if (kode==2){
        switch (ukuran){
            case 's' :
                harga = 4500;
                merk = "dancow";break;
            case 'm' :
                harga = 6500;
                merk = "dancow";break;
            case 'l' :
                harga = 8500;
                merk = "dancow";break;
        }
    }
    else if (kode==3){
        switch (ukuran){
            case 's' :
                harga = 9500;
                 merk = "sustagen";break;
            case 'm' :
                harga = 15500;
                merk = "sustagen";break;
            case 'l' :
                harga = 19500;
                merk = "sustagen";break;
        }
    }
    total = harga*jumlah;
    pajak = total*10/100;
    if (jumlah > 25){
        diskon = total*5/100;
        bayar = total + 10/100  -diskon;
    }
    else{
        bayar = total - pajak;
    }

    cout <<"Terimakasih Atas Kunjungan Anda!!!! Berikut adalah struk pembelian anda"<<endl;
    cout <<"Merk Barang : "<<merk<<endl;
    cout <<"Jenis Ukuran : "<<ukuran<<endl;
    cout <<"Harga Barang : Rp "<<harga<<endl;
    cout <<"Jumlah Pembayaran : Rp "<<total<<endl;
    cout <<"Potongan : Rp "<<diskon<<endl;
    cout <<"Pajak : Rp "<<pajak<<endl;
    cout <<"Total Pembayaran Rp : Rp "<<bayar<<endl<<endl;
    cout << "\n===== PROGRAM SELESAI =====\n";
    cout << "Made By: M. R. Reza Pahlevi\n";
    cout << "NIM    : A11.2021.13369\n";
    return 0;
}