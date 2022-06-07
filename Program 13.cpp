#include <iostream>
using namespace std;

template <class T>

class Number 
{
    private:
    T num;
    public:
    Number(T n) : num(n) {} 
    T getNum() 
    {
    return num;
    }
};

int main() 
{
    Number<int> numberInt(10);
    Number<double> numberDouble(0.1);
    cout << "Integer Number = " << numberInt.getNum() << endl;
    cout << "Decimal Number = " << numberDouble.getNum() << endl;
    return 0;
}
