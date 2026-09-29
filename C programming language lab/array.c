#include <stdio.h>
int main(){
    int marks[] = {-1,-2,-6,1,2,3,4,5,6};
    int n = sizeof(marks)/sizeof(marks[0]);
    for (int i=0;i<n;i++){
        if (marks[i]) printf("%d ",marks[i]); 
    }
    

    return 0;
}