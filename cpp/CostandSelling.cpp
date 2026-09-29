#include<iostream>
using namespace std;
int main(){
    float cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    float sp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    
    if (cp < sp) cout<<"Profit is : "<<sp-cp;
    else if (cp > sp) cout<<"Incurred Loss is : "<<cp-sp;
    else cout<<"No Profit No Loss";
}