// Q:- What are Identifiers in C?
// An identifier is a name given to a variable, function, array, or any user-defined item in a C program.
// It helps the programmer refer to memory locations and perform operations on them.
// Examples of Identifiers
// int age;           // 'age' is an identifier
// float salary;      // 'salary' is an identifier
// void display() {}  // 'display' is an identifier
// Here, age, salary, and display are identifiers.

// 🔹 Rules for Identifiers in C
// Can contain letters, digits, and underscore (_) only. Example: myVar, count_1 ✅. Example: @age ❌ (invalid)
// Must start with a letter or underscore. Example: _temp, value ✅. Example: 1count ❌ (invalid)
// Cannot be a C keyword. Example: int, if, while ❌ cannot be used as identifiers
// Case-sensitive. Age and age are different identifiers
// No spaces allowed. Example: my age ❌ (invalid). Use _ instead: my_age ✅
// No special symbols allowed except underscore (_). Example: my$var ❌ (invalid)
// Length: There is no strict limit in modern C, but only the first 31 characters are guaranteed to be unique in older C standards.

