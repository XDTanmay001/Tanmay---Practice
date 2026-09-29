#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a Real Number : ";
    cin>>x;
    int y = (int)x;
    if (x==y) cout<<"Real Number is an integer";
    else cout<<"Real Number is not an integer";

}