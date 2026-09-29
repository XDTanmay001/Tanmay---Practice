#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent : ";
    cin>>b;
    int ans = 1;
        
    for(int i=1;i<=b;i++){
        ans *= a;
    }
    cout<<ans;
  
    }