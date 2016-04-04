#ifndef MATRIK_H
#define MATRIK_H


class Matrik{
private:
    int absis;
    int ordinat;
    int **data;
    static Matrik *address;
    Matrik(int _ordinat, int _absis);
public:
    static Matrik* Instance();
    void bacaMatrik();
    int getElmt(int _ordinat, int _absis);
    ~Matrik();
};

#endif