#include <stdio.h>

int main(){
    int x=1;
    x=1,2,3;   // ans =1;
    printf("%d\n",x);
    x = (1, 2, 3);  // ans =3;
    printf("%d",x);
    return 0;
}

// reason told in previous file.