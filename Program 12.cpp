#include <iostream>
using namespace std;

template <typename Add>

Add add(Add num_a, Add num_b) 
{
    return (num_a + num_b);
}
int main() 
{
    int sum1;
    float sum2;
    sum1 = add <int> (1, 1);
    cout << "1 + 1 = " << sum1 << endl;
    sum2 = add <float> (0.2, 0.8);    
    cout << "2.2 + 3.3 = " << sum2 << endl;
    return 0;
}