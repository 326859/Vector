#ifndef VECTOR_H
#define VECTOR_H

class vector
{

public:

    int size;
    int *Vector;

    /*vector(int size)
    {
        //Vector = new int arr[size];
    }*/

    ~vector()
    {
        delete Vector;
    }

public:

    void concatenation(vector, vector);
};

#endif // VECTOR_H
