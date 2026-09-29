#include<iostream>
using namespace std;
int main(){
    float l;
    cout<<"Enter length of rectangle : ";
    cin>>l;
    float b;
    cout<<"Enter breadth of rectangle : ";
    cin>>b;
    float a = l*b;
    cout<<"Area of Rectangle is : ";
    cout<<a<<endl;
    float p = 2*(l+b);
    cout<<"Perimeter of Rectangle is : ";
    cout<<p<<endl;

    if (a>p) cout<<"Area is greater than perimeter : ";
    else cout<<"Perimeter is greather area";


}