#include <stdio.h>

int main() {
    printf("ht\n");
    if (printf("")) {}
    printf("hik");
    return 0;
}

// In this case if statement is not running bcz the return value of that printf is 0 and 0 inside the if is the only case when it donot work
// NOTE:-
// C me if ke andar jo expression likhte ho, uska value evaluate hota hai:
// Agar 0 aata hai → condition false hoti hai → andar ka block execute nahi hota.
// Agar non-zero (1, 2, -3, 12, … kuch bhi) aata hai → condition true hoti hai → andar ka block execute hota hai.