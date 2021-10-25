/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#define lantaiatas 400000
#define lantaibawah 300000

using namespace std;

struct booking
{
    char nama[30], alamat[30], jenis[30];
    int pilih;
    float nomor;
};

int main()
{
    const int dp= 150000;
    int jumlah, pilihan, jmlh, lama;
    int harga, total;
    char menu;

    cout<<"\tProgram biaya sewa kost"<<endl;
    
    atas:
    booking book[30];
    
    cout<<"Pilihan Menu"<<endl;
    cout<<"1. Daftar Sewa kamar"<< endl;
    cout<<"2. Data penyewa kamar"<<endl;
    cout<<"masukkan pilihan (1/2):"<<endl;
    cin>>pilihan;
    
    if (pilihan==1)
    {
        cout<<"\nNama :";
        cin>>book[1].nama;
        
        cout<<"\nAlamat  :";
        cin>>book[1].alamat;
        
        cout<<"\nNomor Telepon  :";
        cin>>book[1].nomor;
        
        cout<<"\nPilih Lantai kamar (1/2)  :";
        cin>>book[1].pilih;
        
        
        cout<<"\n\tData Pendaftar";
        cout<<"\nNama:"<< book[1].nama;
        cout<<"\nAlamat:"<< book[1].alamat;
        cout<<"\nKamar Lantai:"<< book[1].pilih;
        
        
        
        switch(book[1].pilih)
        {
            case 1:
            {
                cout<<"\nLantai 1: 300000/bulan";
                harga= lantaibawah;
            }
            break;
            
            case 2:
            {
                cout<<"Lantai 2: 400000/bulan";
                harga= lantaiatas;
            }
            break;
            
            default:
            cout<<"\nKode kamar tidak sesuai pilihan";
        }
     cout<<"\nLama sewa:";
     cin>>lama;
     
     cout<<"\nUang Muka:"<<dp;
     
     jmlh=lama*harga;
     total=jmlh-dp;
     
     cout<<"\nbiaya sewa:"<< jmlh;
     
     cout<<"\nsisa pembayaran:"<< total;
     
        
    }
    else if (pilihan==2)
        {
            cout<<"\nNama:"<<book[1].nama;
            cout<<"\nAlamat:"<< book[1].alamat;
            cout<<"\nKamar Lantai:"<< book[1].pilih;
        
        }
    
    else
    {
        cout<<"pilihan tidak ada";
        
        cout<<" Kembali ke menu? (Y/T)";
        cin>>menu;
        
        if(menu=='y'||menu=='Y') goto atas;
        
        else cout<<endl;
    }

    return 0;
}
