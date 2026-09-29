#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : "; //4
    cin>>n;
    int staars = 2*n-1; // 7

    for (int k=1;k<=n;k++)
        for(int l=1;l<=k-1;l++){
            cout<<"  ";
        }
        for (int l=1;l<=staars;l++){ 
            cout<<"* ";
        }
        staars -=2;
        cout<<endl;
    }
