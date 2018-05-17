#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int batas, top1=-1, top2, data[100], i, j, x, opsi;
    char lagi;

    cout << "batas : ";
    cin >> batas;

    top2=batas;

    do{
            cout << "Pilihan : \n 1. Push1 \n 2. Push2 \n 3. Pop1 \n 4. Pop2 \n 5. View " << endl;
     cout << "masukkan pilihan : ";
     cin >> opsi;

     if(opsi==1){
        if(top2-top1==1){
            cout << "batas penuh!" << endl;
        }
            cout << "masukkan data : ";
            cin >> x;
            top1+=1;
            data[top1]=x;
     }
     if(opsi==2){
        if(top2-top1==1){
            cout << "batas penuh!" << endl;
        }
            cout << "masukkan data : ";
            cin >> x;
            top2-=1;
            data[top2]=x;
     }
    else if(opsi==3){
        if(top1==-1){
            cout << "data kosong!" << endl;
        }
        x=data[top1];
        top1-=1;
        cout << "data " << x << " berhasil di hapus!" << endl;
    }
    else if(opsi==4){
        if(top2==batas){
            cout << "data kosong!" << endl;
        }
        x=data[top2];
        top2+=1;
        cout << "data " << x << " berhasil di hapus!" << endl;
    }
    else if(opsi==5){
            cout << "data 1 : ";
        for(i=0;i<=top1;i++){
            cout << data[i] << " ";
        }
            cout << "\ndata 2 : ";
        for(j=batas-1;j>=top2;j--){
            cout << data[j] << " ";
        }
    cout << endl;
        }
        //char lagi;
        cout << "lagi?[y/n] ";
        cin >> lagi;
        std::system ("clear");

    }while(lagi == 'y' || lagi == 'Y');
}
