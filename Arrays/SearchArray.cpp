#include <iostream>
using namespace std;
int main(){
    int n,search;

    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"What element you want to search : ";
    cin>>search;
    bool flag = false;
    for(int j=0;j<=n-1;j++){
     if(search==arr[j]){
        flag = true;
        break;
     } 
     
    } 
   if(flag==true) cout<<"Element Found";
   else cout<<"Element not found"<<endl;
}