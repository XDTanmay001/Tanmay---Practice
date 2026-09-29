#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35,98,37};
    cout<<marks[4]<<endl;
    marks[4] = 23;
    cout<<marks[4]<<endl;
    cout<<(sizeof(marks))/4<<endl;
    
}