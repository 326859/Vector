#include<iostream>
#include<Vector.h>
#include<mem.h>

void vector::pushBack(int new_element)
{
    int *p = new int[size+1];

    memcpy((void*)p, (void*)link, sizeof(int)*size);
    delete link;
    link = p;
    link[size] = new_element;
    size++;
}

void vector::insert(int position, int numb)
{
    if(position < size)
        link[position] = numb;
    else
        std::cout << "ERROR: position > size" << std::endl;
}

int vector::get(int position)
{
    if(position < size)
        return link[position];
    else
    {
        std::cout << "ERROR: position > size, return 0" << std::endl;
        return 0;
    }
}

void vector::all_cout()
{
    for(int i = 0; i < size; i++)
        std::cout << link[i] << ' ';
    std::cout << std::endl;
}
