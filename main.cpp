#include <iostream>

void func2();
void func3();
void func4();
void func5();
void func6();

void func2()
{
    std::cout << "Enter the Func 2" << "\n";
    func3();
    std::cout << "Exit the Func 2" << "\n";
}

void func3()
{
    try
    {
        std::cout << "Enter the Func 3" << "\n";
        func4();
    }
    catch(int except)
    {
        std::cout << "Catched by func3(int)!!!" << "\n";
    }
    catch(double except)
    {
        std::cout << "Catched by func3(double)!!!" << "\n";
    }
    std::cout << "Exit the Func 3" << "\n";
}
void func4()
{
    try
    {
    std::cout << "Enter the Func 4" << "\n";
    func5();
    }
    catch(int except)
    {
        std::cout << "Catched by func4(int)!!!" << "\n";
    }
    std::cout << "Exit the Func 4" << "\n";
}

void func5()
{
    std::cout << "Enter the Func 5" << "\n";
    func6();
    std::cout << "Exit the Func 5";
}
void func6()
{
    std::cout << "Enter the Func 6" << "\n";
    throw 6.0;
}



/**
 * @brief делит число а на число b 
 * 
 * @param a - делитель
 * @param b  - частное
 * @return int 
 */
int dividing(int a, int b)
{
    int i =0;
    int counter = 0;
    bool below_zero;
    if((a <0 && b > 0) || (a >0 && b<0)) below_zero = true;
    a = abs(a);
    b = abs(b);
    while(counter < a)
    {
        i++;
        counter+=b;
    }
    if(counter>a) i--;
    i*=-1*below_zero;
    return i;
}


int main(int, char**){
    std::cout << dividing(-10, 5) << "\n";
    func2();
}