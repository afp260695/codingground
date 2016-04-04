#ifndef TURLENGKAP_H
#define TURLENGKAP_H

#include <queue>
#include <utility>
#include "Daun.h"

using namespace std;

class TurLengkap{
private:
    priority_queue< pair<int,int> > pii;
    vector<Daun> vD;
    int nNode;
    int jumlahNode;
public:
    TurLengkap(int _jumlahNode);
    void solve();
    void tampilkanJalan();
};

#endif