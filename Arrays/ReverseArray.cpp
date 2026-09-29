#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++){
        temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}