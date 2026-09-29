#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of element ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array : ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int product=1;
    for(int i=0;i<n;i++){
        product *=arr[i];
    }
    cout<<"Product of alll element of array is : "<<product;
}