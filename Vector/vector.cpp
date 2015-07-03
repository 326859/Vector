#include<vector.h>

void vector::concatenation(vector v1, vector v2)
{
    Vector = new int [v1.size+v2.size];
    size = v1.size + v2.size;

    for(int i = 0; i < v1.size; i++)
    {
        Vector[i] = v1.Vector[i];
    }

    for(int i = 0; i < v2.size; i++)
    {
        Vector[v1.size + i] = v2.Vector[i];
    }
}
