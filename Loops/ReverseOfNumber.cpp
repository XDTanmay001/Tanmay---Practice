#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int rev = 0;
    int x = n;

    while(n!=0){
        
        rev = rev*10; // reverse digit ko 10 se multiply kerdo
        rev = rev + (n%10); // reverse digit mein last digit add kerdo
        n/=10;

    }
    
    cout<<rev<<endl;
    cout<<"Sum of number and its reverse is : "<<(rev + x);
    
}