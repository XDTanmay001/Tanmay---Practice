#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : "; 
    cin>>n;
    int stars = 1;
    
    //Upper Pyramid 
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=stars;j++){
        cout<<"* ";
        }
        
        stars = stars + 2;
        cout<<endl;
    }
    //Lower Pyramid
    int staars = 2*n-1; 
    
    for (int k=1;k<=n;k++){
        for(int l=1;l<=k-1;l++){
            cout<<"  ";
        }
        for (int l=1;l<=staars;l++){ 
            cout<<"* ";
        }
        staars -=2;
        cout<<endl;
    }
    }
