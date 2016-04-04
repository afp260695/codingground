#include "Matrik.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Matrik* Matrik::address=NULL;

Matrik* Matrik::Instance(){
    if(address==NULL){
        int _ordinat,_absis;
        cin>>_ordinat>>_absis;
        address = new Matrik(_ordinat,_absis);
    }
    
    return address;
}
Matrik::Matrik(int _ordinat, int _absis){
    ordinat=_ordinat;
    absis=_absis;
    data= new int* [ordinat];
    for(int i=0;i<ordinat;i++){
        data[i]=new int[absis];
    }
}

Matrik::~Matrik(){
    for(int i=0;i<ordinat;i++){
        delete[] data[i];
    }
    delete[] data;
}

int Matrik::getElmt(int _ordinat, int _absis){
    return data[ordinat][absis];
}

void Matrik::bacaMatrik(){
    for(int i=0;i<ordinat;i++){
        for(int j=0;j<absis;j++){
            cin>>data[i][j];
        }
    }
}