// Is the following code snippet correct?
// char str[13] = “PhysicsWallah”

// Ans: False bcz the size of array is 14 and you initiallize here with 14.
// This is incorrect, because it provides space for only 13 characters, but the compiler must store 14 characters (including '\0').