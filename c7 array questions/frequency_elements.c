// wap to calculate the frequency of each element of array

// see ise code ko dry run karo khud sa and acha sa samjo about the visited array ka kya kaam hai

#include <stdio.h>

int main(){
    int arr[5]={1,2,2,4,4};
    int visited[5]={0};
    int n=5;

    for(int i=0; i<n; i++){
        if(visited[i] == 1)  // this will skip all those iterations which are duplicate and already counted
            continue;

        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j] && visited[j]==0){
                count++;
                visited[j]=1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}

