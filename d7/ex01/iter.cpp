
#include <iostream>

template <typename T>
void iter(T *a, size_t len, void (*f)(T &))
{
    for (size_t i = 0; i < len; i++)
    {
        f(a[i]);
    }
}

template <typename T>
void addFortyTwo(T &a)
{
    a += 42;
}

int main()
{
    const size_t arrSize = 4;
    int arrOne[] = {0, 1, 2, 3};

    ::iter(arrOne, arrSize, addFortyTwo);
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << arrOne[i] << " ";
    }
    std::cout << std::endl;

    float arrTwo[] = {5.55f, 3.33f, 2.28f, 0.12f};

    ::iter(arrTwo, arrSize, addFortyTwo);
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << arrTwo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}