//değeri bir arttiran program
#include <iostream>
using namespace std;

class Onemuch{
  int a;
  
  public:
            void atama(int sayi){
                a=sayi;
            }
        
        int arti(){
            return a+1;
        }
    
};

int main(){
    Onemuch x;
    int sayi;
    cout<<"bir sayi giriniz: ";
    cin>>sayi;
    x.atama(sayi);
    cout<<"girdiginiz sayinin bir fazlasi: "<<x.arti();
    
    return 0;
}
