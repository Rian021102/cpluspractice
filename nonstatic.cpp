#include <iostream>
using namespace std;

void nonstatis(){
    int a{0}; // variabel lokal non-statis
    a++;
    cout<<a<<endl;
}

int main(){
    nonstatis();
    nonstatis();
    nonstatis();
    return 0;
}