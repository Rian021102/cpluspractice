#include <iostream>
using namespace std;
int a{100}; // variabel global
void increment(){
    // mengakses variabel a dari fungsi increment()
    a++;
}

void decrement(){
    // mengakses variabel a dari fungsi decrement()
    a--;
}

int main(){
    a=10;
    cout<<"Nilai a mula-mula: "<<a<<endl;
    //memanggil fungsi increment() untuk menambah nilai a
    increment();
    cout<<"Setelah dinaikan 1: "<<a<<endl;
    //memanggil fungsi decrement() untuk mengurangi nilai a
    decrement();
    cout<<"Setelah diturunkan 1: "<<a<<endl;
    return 0;
}

