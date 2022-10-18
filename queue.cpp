#include<iostream>
using namespace std;
#define MAX 6

typedef struct Antrian {
    int data[MAX];
    int head;
    int tail;
}Antrian;


Antrian antri;
void create();
int isEmpty();
int isFull();
void enqueue(int);
int dequeue();
void tampil();


int main()
{
    int pilih, data;
    cout << "1. Enqueue " << endl;
    cout << "2. Dequeue " << endl;
    cout << "3. Tampil " << endl;
    cout << "4. Keluar " << endl;
    do {
        cout << "Masukkan pilihan : ";
        cin >> pilih;
        switch(pilih) {
        case 1:
            cout << "Masukkan angka : ";
            cin >> data;
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            tampil();
            break;
        case 4:
            cout << "Keluar" << endl;
            break;
        default: cout << "Pilihan salah"<<endl;
        }
    }
    while(pilih != 4);
    return 0;
}


void create(){
    antri.head = antri.tail = -1;
}


int isEmpty(){
    if(antri.tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}


int isFull(){
    if(antri.tail == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}


void enqueue(int data){
    if(isEmpty() == 1){
        antri.head = antri.tail = 0;
        antri.data[antri.tail] = data;
        cout << data << " dimasukkan ke antrian" << endl;
    }
    else
    {
        antri.tail++;
        antri.data[antri.tail] = data;
        cout << data << " dimasukkan ke antrian" << endl;
    }

}


int dequeue(){
    int i;
    int e = antri.data[antri.head];
    for(i = antri.head;i <= antri.tail - 1;i++){
        antri.data[i] = antri.data[i+1];
    }
    antri.tail--;
    cout << e << " telah dequeue" << endl;
    return e;
}


void tampil(){
    if(isEmpty()==0){
        for(int i = antri.head;i <= antri.tail;i++){
        cout << antri.data[i] << " ";
    }
    cout << endl;
    }
    else{
        cout<< "Data kosong" << endl;
    }
}
