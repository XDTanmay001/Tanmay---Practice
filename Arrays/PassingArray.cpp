#include<iostream>
using namespace std;
void change(int y[]){
    y[2]=20;
}
int main(){
    int x[]={6,1,2};
    change(x);
    cout<<x[2]<<endl;
}