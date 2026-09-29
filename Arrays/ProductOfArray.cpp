#include <iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int j=0;j<=n-1;j++){
     product *= arr[j];
    }
    cout<<"Product of array is : "<<product;
}