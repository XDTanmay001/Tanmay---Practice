#include<iostream>
using namespace std;
int main () {
float radius;
cout<<"Enter radius : ";
cin>>radius;
float volume;
volume = (4*3.141592*radius*radius*radius)/3;
cout<<"The volume of sphere is : ";
cout<<volume;
}