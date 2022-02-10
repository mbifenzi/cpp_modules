
#include "Array.hpp"

int main()
{
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