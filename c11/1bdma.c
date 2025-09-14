// 1. When you do int arr[n];
// This creates an array on the stack (called a VLA – Variable Length Array in C99).
// Limitations:
// Stack size is small (usually a few MB). Large arrays can easily cause a stack overflow.
// Scope is local → The memory is automatically freed when the function ends. You cannot return it to another function safely.
// Not part of the C standard after C11 → Some compilers don’t even allow int arr[n];.

// 2. When you use malloc()
// Allocates memory on the heap.
// Advantages:
// Dynamic size: You can allocate memory at runtime for very large data structures without worrying about stack overflow.
// Persistence: The memory stays allocated until you explicitly free() it, even after the function returns.
// Flexibility: You can resize with realloc(), manage lifetimes, and share memory across different functions easily.
// Portability: Works consistently across compilers, unlike VLAs.

// In short:
// Use arr[n] (stack) for small, short-lived arrays inside a function.
// Use malloc() (heap) for large, dynamic, or long-lived arrays that need to be shared across functions.

// You can see about the stack and the heap memory from gpt.
