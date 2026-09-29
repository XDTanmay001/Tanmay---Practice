#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    

    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //      if (i+j>n) cout<<"* ";
    //      else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // n+1-i ki jagah n-i because 
            cout<<"  ";             // +1 se extra space create hora h
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}