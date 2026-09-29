#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    cout<<"Enter z : ";
    cin>>z;

    if (x<y){
        if (x<z) cout<<x<<" is least";
        else cout<<z<<" is least"; // y>x>z
    }
    else  { // x>y
        if (y>z) cout<<z<<" is least"; // 
        else // x>y and y<z
    } 

    /* if (x<y && y<z) cout<<x<<" is least";
    else if (y<x && x<z) cout<<y<<" is least";
    else cout<<z<<" is least";
} */