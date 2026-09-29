#include <iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40};
    int b[]={50,60,80,90,100};
    int m,n,i=0,j=0,k=0;
    m = sizeof(a)/4, n = sizeof(b)/4;
    int c[m+n];
    while(i<m && j<m){
        if (a[i] < b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        else {
        c[k]=b[j];
        k++;
        j++;
    }
    
}
if(i==m){
        while(j<n){
            c[k]=b[j];
        k++;
        j++;
        }
    }
    else {
            c[k]=a[i];
            k++;
            i++;
    }
    for(int l=0;l<m+n;l++) 
    cout<<c[l]<<" ";
    

}