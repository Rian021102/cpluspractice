#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b {4};
    int c (5);

    cout << "Nilai a: " << a << endl;
    for (int i=0; i<a; i++) cout<<i+1<<" ";
    cout <<"\n\nNilai b: " << b << endl;
    for (int i=0; i<b; i++) cout<<i+1<<" ";
    cout <<"\n\nNilai c: " << c << endl;
    for (int i=0; i<c; i++) cout<<i+1<<" ";
    return 0;
}