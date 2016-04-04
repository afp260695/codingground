#include "TurLengkap.h"
#include <iostream>
#include <queue>
#include <utility>
#include "Matrik.h"
#include "Daun.h"

using namespace std;

TurLengkap::TurLengkap(int _jumlahNode){
    jumlahNode = _jumlahNode;
    Matrik* M=Matrik::Instance();
    nNode=0;
    int bobot,mins1,mins2;
    Daun d(jumlahNode);
    bobot=0;
    for(int i=0;i<jumlahNode;i++){
        mins1=9999;
        mins2=9999;
        for(int j=0;j<jumlahNode;j++){
            if(mins1>(M->getElmt(i,j))){
                mins2=mins1;
                mins1=M->getElmt(i,j);
            }else if(mins2>(M->getElmt(i,j))){
                mins2=M->getElmt(i,j);
            }
        }
        bobot=bobot+mins1+mins2;
    }
    bobot=bobot/2;
    d.setBobot(bobot);
    
    vD.push_back(d);
    pii.push(pair<int,int>(0,bobot));
    nNode++;
}

void TurLengkap::solve(){
    int i;
    pair<int,int> ii = pii.top();
    bool *visit;
    visit = new bool[jumlahNode];
    while(!vD[ii.first].isSolusi()){
        for(i=0;i<jumlahNode;i++){
            if(vD[ii.first].visited(i)==false){
                vD.push_back(Daun(vD[ii.first],i));
                pii.push(pair<int,int>(nNode,vD[nNode].getBobot()));
                nNode++;
            }
        }
        
        ii=pii.top();
    }
}

void TurLengkap::tampilkanJalan(){
    
}