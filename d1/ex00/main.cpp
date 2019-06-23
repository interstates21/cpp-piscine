#include <iostream>
#include <string>
#include "Pony.hpp"

static void ponyOnTheHeap(void)
{
    Pony    *sarah = new Pony("Sarah", true, "Flying");
    delete  sarah;
}

static void ponyOnTheStack(void)
{
    Pony    jack("Jack", false, "None");
}

int
main(void)
{
     std::cout << "Heap Call: >> " << std::endl;
	ponyOnTheHeap();
    std::cout << "Stack Call >> " << std::endl;
	ponyOnTheStack();
    return (0);
}
