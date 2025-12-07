// Q: Write a program in c using the function to find the gcd of the two numbers?

#include <stdio.h>

int gcd(int a, int b){
    int num1=a;
    int num2=b;
    int gcd;
    while (num1!=num2)
    {
        if (num1>num2)
        {
            num1=num1-num2;
        }
        else{
            num2=num2-num1;
        }
        gcd=num1;
    }
    return gcd; 
}

int lcm(int a, int b){
    int lcm;
    lcm = a*b/gcd(a,b);
    return lcm;
}

int main(){ int g,k;
    printf("Enter two numbers whose gcd and lcm you want: ");
    scanf("%d %d", &g, &k);
    printf("The lcm is %d and the gcd is %d.", lcm(g,k), gcd(g,k));
    return 0;
}