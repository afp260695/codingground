#ifndef DAUN_H
#define DAUN_H

class Daun{
private:
    int jumlahNode;
    int bobot;
    int *path;
    int pointerPath;
    
public:
    Daun(int _jumlahNode);
    Daun(const Daun& d,int _path);
    ~Daun();
    bool isSolusi();
    int getBobot();
    void setBobot(int _bobot);
    void tambahPath(int _path);
    bool visited(int _node);

};

#endif