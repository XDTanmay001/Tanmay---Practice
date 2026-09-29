#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter Principle : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enter Time : ";
    cin>>t;
    float sri = (p*r*t)/100;
    cout<<"Simple rate interest is : "<<sri;
   
}