#include <iostream>
using namespace std;

void statis(){
    static int a {0};
    a++;
    cout<<a<<endl;
}
int main(){
    statis();
    statis();
    statis();
    return 0;
}