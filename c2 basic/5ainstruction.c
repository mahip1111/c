// Have a look at the below statement: 
// 3*x – 8*y is (3x)-(8y) or 3(x-8y)? 
// In C language simple mathematical rules like BODMAS, no longer apply. 
// The answer to the above questions is provided by operator precedence & associativity. 

// OPERATOR PRECEDENCE:-
// The following table lists the operator priority in C  
// Priority                   Operators 
// 1st                          * / %                    
// 2nd                           + -                    
// 3rd                            = 
// NOTE:- Operators of higher priority are evaluated first in the absence of parenthesis. 

// Therefore the ans of the 3*x – 8*y is (3x)-(8y).

// OPERATOR ASSOCIATIVITY:-
// When operators of equal priority are present in an expression, the tie is taken care of by associativity. 
// *, / follows left to right associativity
// +,- also follows left to right assiciativity 
// x*y/z → (x*y)/z 
// x/y*z → (x/y)*z 
// Pro Tip: Always use parenthesis in case of confusion

// Apko abhi bakhi sabhi ka bhi associativity rule padhna padega.