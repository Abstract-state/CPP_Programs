#include<iostream>
using namespace std;

class area
{
    private:
    float radius,area;
    public:
    void input_radius();
    void area_circle();
};

void area::input_radius()
{
    cin >> radius;
}

void area::area_circle()
{
    area = 3.14*radius*radius;
    cout << "Area of circle is : "<<area;
}

int main()
{
    area obj;
    obj.input_radius();
    obj.area_circle();
    return 0;
}