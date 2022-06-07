#include <iostream>
using namespace std;

void perimeter(float a)
{
    float perimeter = 2*3.14159*a;
    cout << perimeter << endl;
}

void perimeter(float a, float b)
{
    float perimeter = 2*(a+b);
    cout << perimeter << endl;
}

void perimeter(float a, float b, float c)
{
    float perimeter = a + b + c;
    cout << perimeter << endl;
}

int main()
{
    perimeter(5.0,9.9);
    perimeter(4.5,6.2,2.6);
    perimeter(5.2);
    return 0;
}