// Thsi is the easy and the best method for this problem.

# include <stdio.h>

void str(char name_slice[20], int n, int m){
    for(int i=n; i<=m; i++){
        printf("%c",name_slice[i]);
    }

}
int main(){
    char name[30];
    printf("Enter the string:- ");
    gets(name);
    str(name,1,7);    // This will print the string from index 1 to 7.
    return 0;
}