#include <iostream>
#define MAX 24
using namespace std;

char pesan[MAX]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char hasil[MAX]{};

int top = -1;
void olahpesan();
void push();
char isi;

int main()
{
    cout << "Pesan awal  = ";
    for(int i=0; i<MAX; i++){
        cout << pesan[i];
    }
    cout << endl;
    cout << "Hasil olah = " ;

    olahpesan();
    for(int i=0; i<MAX; i++){
        cout << hasil[i];
    }
    return 0;
}

void olahpesan(){
    for(int i=0; i<MAX; i++){
        if(pesan[i] == '*'){

        }else{
            isi = pesan[i];
            push();
        }
    }
}

void push(){
    top++;
    hasil[top] = isi;
}
