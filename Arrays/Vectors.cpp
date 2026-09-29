#include<iostream>
using namespace std;
int main(){
    vector<int> arr(8,-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.size()<<endl;
    
    arr.push_back(5);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     cout<<arr.size()<<endl ;

     arr.pop_back();
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}