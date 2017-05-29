#include <iostream>
#include "substr.h"

int main(int argc, char *argv[])
{
    std::vector<int> *T = search("ba","ababaca");
    for(int i = 0; i<T->size(); ++i)
        std::cout<<T->at(i)<<"\t";
    return 0;
}
