#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string a;
    cout << "Enter Name : ";
    cin >> a;
    ofstream file_ptr;
    file_ptr.open("C:\\Users\\asmit\\ProjectC++\\Sample.txt");
    file_ptr << "My name is " << a << "This is a file";
    file_ptr.close();
    return 0;
}