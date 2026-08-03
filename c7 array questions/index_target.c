// wap to program to find the index of the search element in the give array.

#include <stdio.h>

int index_target (int arr[],int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int c =index_target(arr,5,2);
    if(c==-1){
        printf("Target not found");
    }
    else printf("Target found at the index %d",c);
    
    return 0;
}