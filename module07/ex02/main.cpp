
#include "Array.hpp"

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (  mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    // return 0;
    
    {
        std::cout << "-------------- this is int tests -------------" << std::endl;
        Array<int> test(100);

        try
        {
            test[99];
            std::cout << "an Array of 99 integers Created Successfully" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "------------------------ next ------------------------" << std::endl;
        try
        {
            test[101];
            std::cout << "an Array of 101 integers not Created Successfully" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "------------------------ next ------------------------" << std::endl;
        try
        {
            test[-1];
            std::cout << "this can't be done" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        std::cout << "---------------------- finished ----------------------" << std::endl;
    }
    {
        std::cout << "-------------- this is char tests -------------" << std::endl;
        Array<char> test2(100);

        try
        {
            test2[99];
            std::cout << "an Array of 99 chars Created Successfully" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "------------------------ next ------------------------" << std::endl;
        try
        {
            test2[101];
            std::cout << "an Array of 101 chars not Created Successfully" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

}