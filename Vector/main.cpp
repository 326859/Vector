#include <iostream>
#include <vector.h>

int main()
{

    vector Vector1, Vector2, Vector3;

    Vector1.size = 5;
    Vector2.size = 6;

    Vector1.Vector = new int [Vector1.size];
    Vector2.Vector = new int [Vector2.size];

    Vector3.concatenation(Vector1,Vector2);

    for(int i = 0; i < Vector1.size; i++)
        std::cout << Vector1.Vector[i] << ' ';
    std::cout << std::endl;

    for(int i = 0; i < Vector2.size; i++)
        std::cout << Vector2.Vector[i] << ' ';
    std::cout << std::endl;

    for(int i = 0; i < Vector3.size; i++)
        std::cout << Vector3.Vector[i] << ' ';
    std::cout << std::endl;

    return 0;
}
