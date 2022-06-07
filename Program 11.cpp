#include<iostream>
using namespace std;

// Pure virtual function - Having no definition in base class and value is equal to zero 

class Figure
{
    int a = 5;
    public:
    virtual void display() = 0;
};

class Shape : public Figure
{
    public:
    void display()
    {
        cout << "This is a shape";
    }
};

int main()
{
    Figure *ptr;
    Shape obj;
    ptr = &obj;
    ptr->display();
    return 0;
}