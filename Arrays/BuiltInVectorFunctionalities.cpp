#include <iostream>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    // sort(v.begin(),v.end());
    reverse(v.begin()+1,v.end()-1); // +1 to leave 4 as it is
    for(int ele : v) cout<<ele<<" "; // -1 to leave 9 as it is
}