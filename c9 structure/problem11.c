// Q: Find the error 
// struct emp{
//  int ecode;
//  struct emp e;
//  };

// Ans: This creates a structure variable of the same type inside itself, which causes infinite memory allocation, because each emp contains another emp, which again contains another emp, and so on…
// This is not allowed.
// ✅ If you want to refer to the same structure type inside it, use a pointer:

// Why Pointer Works: A pointer only stores a memory address (typically 4 or 8 bytes), so it does not create infinite copies of the structure.