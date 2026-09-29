#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i+=1){
        cout<<i<<endl<<n-i+1<<endl;
    }

}