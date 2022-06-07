#include<iostream>
using namespace std;

// New and Delete for dynamic memory allocation in C++

int main()
{
    int a;
    string *ptr;
    cout << "If you want to enter name press 1 : ";
    cin >> a;
    if (a == 1)
    {
        ptr = new string[30];
        cin >> *ptr;
        cout << "Name is : " << *ptr;
    }
    else
    {
        return 0;
    }
    delete ptr;
    return 0; 
}