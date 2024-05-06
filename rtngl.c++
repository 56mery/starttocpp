//dikdörtgenin alanı

#include <iostream>
using namespace std;

class Rectangle{
  int uzunluk, genislik;
  
  public:
    void ata (int e, int b){
        uzunluk=b;
        genislik=e;
    }
    
    int alan(){
        return uzunluk*genislik;
    }
    
    int cevre(){
        return (2*uzunluk)+(2*genislik);
    }
    
};

int main(){
    Rectangle x;
    x.ata(2,4);
    cout<<"dikdorgenin alani: "<<x.alan()<<endl;
    cout<<"dikdortgenin cevresi: "<<x.cevre()<<endl;
    
    return 0;
}
