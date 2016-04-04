#include <iostream>
#include "Matrik.h"

using namespace std;

int main(){
    int ordinat,absis;
    cin>>ordinat>>absis;
    Matrik *M=Matrik::Instance();
    M->bacaMatrik();
    cout<<M->getElmt(0,0)<<endl;
    cout<<M->getElmt(0,1)<<endl;
    cout<<M->getElmt(1,0)<<endl;
    cout<<M->getElmt(1,1)<<endl;
}