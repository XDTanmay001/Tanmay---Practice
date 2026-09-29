#include <iostream>
using namespace std;
int main(){
    int n,smx=INT_MIN;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
     for(int j=0;j<=n-1;j++){
         smx=mx;
         if(arr[j]>mx)  mx=arr[j];
         
    }
   cout<<"Second Max element is : "<<smx;
}