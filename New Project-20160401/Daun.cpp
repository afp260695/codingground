#include "Daun.h"
#include <iostream>

using namespace std;

Daun::Daun(int _jumlahNode){
    jumlahNode=_jumlahNode;
    path=new int[jumlahNode];
    for(int i=0;i<jumlahNode;i++){
        path[i]=0;
    }
    bobot=0;
    pointerPath=1;
    path[0]=1;
}

Daun::Daun(const Daun& d,int _path){
    jumlahNode=d.jumlahNode;
    path=new int[jumlahNode];
    for(int i=0;i<jumlahNode;i++){
        path[i]=d.path[i];
    }
    bobot=d.bobot;
    pointerPath=d.pointerPath;
    path[pointerPath]=_path;
    pointerPath++;
}

bool Daun::isSolusi(){
    return (pointerPath==jumlahNode);
}

int Daun::getBobot(){
    return bobot;
}

void Daun::setBobot(int _bobot){
    bobot=_bobot;
}

void Daun::tambahPath(int _path){
    path[pointerPath]=_path;
    pointerPath++;
}

bool Daun::visited(int _node){
    int i=0;
    bool visit=false;
    while(!visit && i<pointerPath){
        if(path[i]==_node)
            visit=true;
    }
    
    return visit;
}

Daun::~Daun(){
    delete[] path;       
}
    