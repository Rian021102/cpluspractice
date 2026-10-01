#include <iostream>
using namespace std;

const double PI=3.14;

int main(){
  double luas, keliling;
  double r=5.0;

  luas=PI*r*r;
  keliling=2*PI*r;
  cout<<"Luas Lingkaran: "<<luas<<endl;
  cout<<"Keliling Lingkaran: "<<keliling<<endl;
  return 0;
}
