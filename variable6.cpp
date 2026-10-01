#include<iostream>
using namespace std;

class C{
  public:
    mutable double a;
    double b;

    //konstructor
    C(double a, double b){
      this->a=a;
      this->b=b;
    }
};
int main(){
  //membuat C objek konstan dari kelas C
  const C obj=C(10.0, 20.0);
  //menampilkan nilai a dan b sebelum diubah
  cout<<"Sebelum diubah: "<<endl;
  cout<<"Nilai a: "<<obj.a<<endl;
  cout<<"Nilai b: "<<obj.b<<endl;

  //mengubah nilai a
  obj.a=100.0; //benar
  //mengubah nilai b
  //obj.b=200.0; //salah, karena b bukan mutable
  //menampilkan nilai a dan b setelah diubah
  cout<<"\nSetelah diubah: "<<endl;
  cout<<"Nilai a: "<<obj.a<<endl;
  cout<<"Nilai b: "<<obj.b<<endl;
  return 0;
  
}
