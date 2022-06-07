// Error Hnadling in C++ Asmith

#include<iostream>
using namespace std;

float division(float a, float b)
{
    float c;
    if (b == 0)
    {
        throw "A number divided by zero gives infinity as result, This is a math error";
    }
    else if (a == 0)
    {
        throw "Dividing zero by any number gives zero!";
    }
    
    c = a/b;
    return c;
}

int main()
{
    float a,b,result;
    cout << "Enter the numbers for division : ";
    cin >> a >> b;
    try
    {
        result = division(a,b);
        cout << "Result = " << result;
    }
    catch(const char* error)
    {
        cerr << error;
    }
    return 0;
    
}