#include<iostream>
using namespace std;
int main(){
    int n,a=2,r=2;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a *= r;
    }

}