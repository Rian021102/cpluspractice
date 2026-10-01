#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){
        int kuadrat; // variabel lokal untuk menyimpan kuadrat dari i
        kuadrat = i*i;
        cout<<"Kuadrat dari "<<i<<" adalah "<<kuadrat<<endl;
    }
    return 0;
}