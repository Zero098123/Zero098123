#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"first number:";
    cin>>a;
    int b;
    cout<<"second number:";
    cin>>b;
    cout<<"The result of average is equal to "<<(a+b)/2<<"\nThe result of product is equal to "<<
    a*b<<endl;

float height;
cout<<"Height of triangle:";
cin>>height;
float base;
cout<<"Base of triangle:";
cin>>base;
cout<<"The area of triangle is: "<<base*height/2<<endl;

float temperature_in_celsius;
cout<<"Temperature in celsius:";
cin>>temperature_in_celsius;
cout<<"The temprature in Farenheit is equal to "<<temperature_in_celsius*1.8+32<<endl;

int N;
cout<<"Number of students:";
cin>>N;
cout<<"The number of free computers in last group is equal to "<<50-N%50<<endl;

cout<<"size of char: "<< sizeof(char);
cout<<"\nsize of int: "<< sizeof(int);
cout<<"\nsize of float: "<< sizeof(float);
cout<<"\nsize of double: "<< sizeof(double);

}
