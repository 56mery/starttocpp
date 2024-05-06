//çember alanı ve çevresini hesaplayan program

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
