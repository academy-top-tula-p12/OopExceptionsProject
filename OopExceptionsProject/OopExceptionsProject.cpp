#include <iostream>

enum class ExcType
{
    IntExc,
    FloatExp,
    CharExp
};

void ExcThrow(ExcType type)
{
    switch (type)
    {
    case ExcType::IntExc:
        throw 100L;
    case ExcType::FloatExp:
        throw 123.45;
    case ExcType::CharExp:
        throw "ERROR";
    default:
        throw true;
    }
}

void Func1();
void Func2();
void Func3();
void Func4();

int main()
{
    /*
    try
    {
        ExcThrow(ExcType::IntExc);
    }
    catch (int e)
    {
        std::cout << "Integer value exception " << e << "\n";
    }
    catch (float e)
    {
        std::cout << "Float value exception " << e << "\n";
    }
    catch (const char* e)
    {
        std::cout << "C-style string value exception " << e << "\n";
    }
    catch (...)
    {
        std::cout << "Any type value exception " << "\n";
    }

    std::cout << "other code...\n";
    */
    /*
    try
    {
        int n;
        std::cin >> n;

        if (n == 0) throw 1;

        std::cout << 10 / n;
    }
    catch (...)
    {
        std::cout << "Divide by zero\n";
    }
    */

    std::cout << "main start\n";

    Func1();

    std::cout << "other code...\n";
    
}


void Func1()
{
    std::cout << "func 1 start\n";

    Func2();

    std::cout << "func 1 finish\n";
}

void Func2()
{
    std::cout << "func 2 start\n";

    try
    {
        Func3();
    }
    catch (int e)
    {
        std::cout << "func 2 catch " << e << "\n";
    }

    std::cout << "func 2 finish\n";
}

void Func3()
{
    std::cout << "func 3 start\n";
    
    try
    {
        Func4();
    }
    catch (int e)
    {
        std::cout << "func 3 catch " << e << "\n";
        throw;
    }


    std::cout << "func 3 finish\n";
}

void Func4()
{
    std::cout << "func 4 start\n";

    throw 100;

    std::cout << "func 4 finish\n";
}