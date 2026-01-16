// write a code to calculate the tax on the income in year 2024?

// | Income Range            | Rate             |
// | ----------------------- |                  |
// | Up to **₹3,00,000**     | Nil              |
// | ₹3,00,001 – ₹7,00,000   | 5%               |
// | ₹7,00,001 – ₹10,00,000  | 10%              |
// | ₹10,00,001 – ₹12,00,000 | 15%              |
// | ₹12,00,001 – ₹15,00,000 | 20%              |
// | Above ₹15,00,000        | 30%              |

// there is also a proffesional method using the aray revise and then do it.

#include <stdio.h>

int main() {

    int income;
    float tax;
    printf("Enter your income: ");
    scanf("%d", &income);

    if (income<=300000)
    {
        tax=0;
    }

    else if (income>300000 && income<=700000)
    {
        tax=(income-300000)*0.05;
    }

    else if (income>700000 && income<=1000000)
    {
        tax=((income-700000)*0.1) + (700000-300000)*0.05;
    }

    else if (income>1000000 && income<=1200000)
    {
        tax= ((income-1000000)*0.15) + (1000000-700000)*0.10 + (700000-300000)*0.05;
    }
    
    else if (income>1200000 && income<=1500000)
    {
        tax= ((income-1200000)*0.2) + ((1200000-1000000)*0.15) + (1000000-700000)*0.10 + (700000-300000)*0.05;
    }
    
    else if (income>1500000)
    {
        tax= ((income-1500000)*0.3) + ((1500000-1200000)*0.2) + ((1200000-1000000)*0.15) + (1000000-700000)*0.10 + (700000-300000)*0.05;
    }
    
    printf("The total tax you need to pay is %.3f", tax);   // .3f means ki kitna decimal points tak apko numbers chahiya.
    return 0;
}
