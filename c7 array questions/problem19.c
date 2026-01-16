// wap to calculate the frequency of each element of array

// see its more efficient way.

#include <stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nFrequency of each element:\n");

    for(i = 0; i < n; i++) {
        count = 1;
        
        // skip if already counted before
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count = 0;
                break;
            }
        }

        // count frequency of new element
        if(count != 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
