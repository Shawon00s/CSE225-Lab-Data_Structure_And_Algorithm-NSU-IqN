#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int *data;
    int **dataFor2D;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);
    void allocate(int);

    //For 2D array
    void setValueFor2D(int, int, int);
    int getValueFor2D(int,int);
    void allocateFor2D(int,int);
};
#endif // DYNARR_H_INCLUDED
