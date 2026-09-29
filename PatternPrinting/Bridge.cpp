#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : "; 
    cin>>n;

    //base line
    for (int k=1;k<=2*(n+1)-1;k++){
        cout<<"* ";
    }
    cout<<endl;

    //first triangle
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
    
       //space
       for(int j=1;j<=2*i-1;j++){
        cout<<"  ";
       }
       //second triangle
       for (int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;  
    }
     
}