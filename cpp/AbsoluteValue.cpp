#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Absolute Value Generator"<<endl;
    cout<<"Enter the Number: ";
    cin>>n;

    if (n < 0) n *= -1;
    cout<<n;

    //if(n < 0) cout<<(-1*n);
    //else cout<<n;

}