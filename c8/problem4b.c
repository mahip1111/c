// This method is good to use tab tak hi jab tak aap space add nahi karta ho string ma bcz apna yahn scanf ke through input liya hai.

# include <stdio.h>

void str(char name[20]);

void str(char name[20]){
    int n=1,m=7;
    for(int i=n; i<=m; i++){
        printf("%c",name[i]);
    }

}
int main(){
    char name[30];
    printf("enter a string:- ");
    scanf("%s",name);
    str(name);
    return 0;
}