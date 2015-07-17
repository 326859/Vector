#include<iostream>
#include<Vector.h>

int main()
{
    vector debug;
    debug.pushBack(8);
    debug.pushBack(51);
    debug.pushBack(42);

    debug.all_cout();

    debug.insert(1, 15);

    std::cout << debug.get(3) << std::endl;
    std::cout << debug.get(1) << std::endl;

    debug.all_cout();

    //system("pause");

    return 0;
}
