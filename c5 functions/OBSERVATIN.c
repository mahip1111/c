#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9.0/5*c) + 32);
}

int main(){
    float c = 45;
    c2f(c);
    return 0;
}

// NOTE:- return tabhi kaam karta hai jab tum main ka andhar ye toh print kar rahe ho ya variable ka andhar fxn ko store karke fir print kar rhae ho inhi case ma return use ho pata hai and sinse yahan  par tumne sirf fxn. call kiya ha na store kiya na print kiya therefore silently calculation hogi and thus no output will come in this case.

// CAORRECT WAY ON NEXT FILE.