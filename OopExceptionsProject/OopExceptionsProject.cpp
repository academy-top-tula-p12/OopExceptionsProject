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
    std::cout << "other code...\n";
}
