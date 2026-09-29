#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x coordinate : ";
    cin>>x;
    cout<<"Enter y coordinate : ";
    cin>>y;

    if (x>0 && y>0) cout<<"Point lies in 1st Quadrant";
    else if (x<0 && y>0) cout<<"Point lies in 2nd Quadrant";
    else if (x<0 && y<0) cout<<"Point lies in 3rd Quadrant";
    else if (x == 0 && y == 0) cout<<"Point lies on origin ";
    else if (x == 0) cout<<"Point lies on y axis";
    else if (y == 0) cout<<"Point lies on x axis";
    else cout<<"Point lies in 4th Quadrant";


}