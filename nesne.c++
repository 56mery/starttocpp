#include <iostream>
using namespace std;
#define Pi 3

class Circle{
  int yaricap;
  
  public:
    void ata (int r){
        yaricap=r;
    }
    
    int alan(){
        return yaricap*yaricap*Pi;
    }
    
    int cevre(){
        return 2*Pi*yaricap;
    }
    
};

int main(){
    Circle x;
    x.ata(3);
    cout<<"cemberin alani: "<<x.alan()<<endl;
    cout<<"cemberin cevresi: "<<x.cevre()<<endl;
    
    return 0;
}


/////////////


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


//////

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
