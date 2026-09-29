#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter a number :";
    // cin >> n;
    // int factors = 0;
    // for (int i=1; i<=n; i++) {
    //     if (n%i == 0) {
    //         factors++;
    //     }
    // }
    // if(factors == 1) cout<<"Neither Prime nor Composite";
    // else if (factors >= 3) cout<<"Composite Number";
    // else cout<<"Prime Number";

    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    bool flag = false; // false means prime
    for(int i=2;i<=sqrt(n);i++){
        if (n%i == 0) { // factor mil gaya except 1 and n
            flag = true;
            break;
        }
    }
    if(n==1) cout<<"Neither Prime nor composite";
    else if(flag==true) cout<<"Composite Number";
    else cout<<"Prime Number";
}