#ifndef VECTOR_H
#define VECTOR_H

class vector
{
private:

    int *link;
    int size;

public:

    vector()
    {
        size = 0;
        link = new int [size + 1];
    }

    ~vector()
    {
        delete link;
    }

public:

    void pushBack(int);
    void insert(int, int);
    int get(int);
    void all_cout();
};

#endif // VECTOR_H
