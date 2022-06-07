#include<iostream>
using namespace std;

class vector_add
{
    private:
        float x,y,z;
    public:
        vector_add operator +(const vector_add& obj);
        void input_vector();
        void display();
};

vector_add vector_add :: operator + (const vector_add& obj)
{
    vector_add temp_obj;
    temp_obj.x = x + obj.x;
    temp_obj.y = y + obj.y;
    temp_obj.z = z + obj.z;
    return temp_obj;
}
void vector_add::input_vector()
{
    cout << "Enter the vectors" << endl;
    cout << " Coeff of x : ";
    cin >> x;
    cout << " Coeff of y : ";
    cin >> y;
    cout << " Coeff of z : ";
    cin >> z;
}
void vector_add::display()
{
    cout << "Result of addition is : ";
    cout << x << "x + " << y << "y + " << z << "z";
}
int main()
{
    vector_add obj_1,obj_2,obj_3;
    obj_1.input_vector();
    obj_2.input_vector();
    obj_3 = obj_1 + obj_2;
    obj_3.display();
    return 0;
}