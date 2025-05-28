# Essentials-C / A C Utility Library

<div>
   <img src="https://cdn.discordapp.com/attachments/1143230167607681096/1347360023583391868/Essentials.gif?ex=67cb8a4e&is=67ca38ce&hm=07ff511db6eb0371d2684f2e31bf62e31bb9e3a0e19d7b44feeea1e9a7f81c9e&" width="100%" />
</div>

## 📌 About
Essentials-C is a simple yet useful collection of utility functions written in C. It provides helpful string manipulation functions that can make handling C strings more intuitive. This library is open-source under the MIT license, so feel free to use and modify it. Just don't forget to credit the author! 😆

**Author:** Shinpi (Leonardo Gonçalves)  
**Version:** 2  
**Made in:** Brazil  

## 📥 Installation

To use **Essentials-C** in your project, follow these steps:

### 1. Clone the repository

```bash
git clone https://github.com/leonardopinezi/Essentials-C
cd Essentials-C
```
### 2. Build with CMake.

```bash
mkdir  build && cd build
cmake ..
make
```

### 3. Install

```bash
cmake --install .
# Note: You may need to set CMAKE_INSTALL_PREFIX in some cases.
```

# 4. Including in Your Project

### Header

To use the library, include the main header in your C source file:

```c
#include <essentialsc.h>
```

---

### Using with CMake

Make sure the library is installed and accessible via `CMAKE_PREFIX_PATH` or is located in a standard system directory like `/usr/lib/cmake`.

```cmake
# Find the installed package
find_package(Essentials-C REQUIRED)

# Link the library to your target
target_link_libraries(your_target PRIVATE Essentials-C::Essentials-C)
```

> **Note:** The `Essentials-C::Essentials-C` target automatically sets include paths.

---

### Using with GCC

If the library is installed in standard system paths:

```bash
gcc main.c -lEssentials-C -o main
```

If installed to a custom location:

```bash
gcc main.c -I/path/to/include -L/path/to/lib -lEssentials-C -o main
```

## 📖 Functions and Usage

### 📌 length(string)
Returns the length of a given string (excluding the null terminator `\0`).

#### Example:
```c
char str[] = "Hello";
int len = length(str);
printf("Length: %d\n", len); // Output: Length: 5
```

---

### 📌 input(prompt, output)
Prompts the user for input and stores the result in `output`.

#### Example:
```c
char name[50];
input("Enter your name: ", name);
printf("Hello, %s!\n", name);
```

---

### 📌 indexof(string, letter)
Finds the first occurrence of a character in a string and returns its index. Returns `-1` if not found.

#### Example:
```c
char str[] = "banana";
int index = indexof(str, 'n');
printf("Index of 'n': %d\n", index); // Output: 2
```

---

### 📌 lastindexof(string, letter)
Finds the last occurrence of a character in a string and returns its index. Returns `-1` if not found.

#### Example:
```c
char str[] = "banana";
int index = lastindexof(str, 'n');
printf("Last index of 'n': %d\n", index); // Output: 4
```

---

### 📌 reverse(string, output)
Reverses a given string and stores it in `output`.

#### Example:
```c
char str[] = "Hello";
char rev[10];
reverse(str, rev);
printf("Reversed: %s\n", rev); // Output: olleH
```

---

### 📌 substring(string, output, start, end)
Extracts a substring from `s` starting at `start` and ending at `end`.

#### Example:
```c
char str[] = "Essentials";
char sub[10];
substring(str, sub, 2, 6);
printf("Substring: %s\n", sub); // Output: sent
```

---

### 📌 trim(string, output)
Removes leading and trailing spaces from a string.

#### Example:
```c
char str[] = "Hello, World!";
char trimmed[50];
trim(str, trimmed);
printf("Trimmed: '%s'\n", trimmed); // Output: 'Hello, World!'
```

---

### 📌 replace_char(string, char, charToReplace)
Change a specific character in a string.

#### Example:
```c
char str[] = "Hello, World!";
replace_char(str, 'e', 'a');
printf("Message: '%s'\n", str); // Output: 'Hallo, World!'
```

---

### 📌 includes(string, stringToFind)
Verify if a string have a other string inside.

#### Example:
```c
char str[] = "Hello, World!";

if(includes(str, "Hello") == 1) { // Verify if exist : Return 0 if not exist.
	// Code to execute
}
```

---

### 📌 bubble_sort(arr, n, val)  
Sorts an int array using Bubble Sort.

#### Example:  
```c
int arr[] = {5, 3, 8, 4, 2};  
int n = sizeof(arr) / sizeof(arr[0]);
bubble_sort(arr, n, 0);  // if 0 => descend : else => ascend
```

---

### 📌 starts_with(entry, character)  
Verify if a string starts with a character.

#### Example:  
```c
if(starts_with("alfred", 'a') == 0) {
	// Starts with "a"
}
```

---

### 📌 endsWith(entry, character)  
Verify if a string ends with a character.

#### Example:  
```c
if(ends_with("alfred", 'a') == 0) {
	// Ends with "a"
}
```

---

### 📌 uppercase(string, output)  
Converts a `string` to uppercase and stores it in `output`.

#### Example:  
```c
char str[] = "Hello World!";
char uppercased[13];
uppercase(str, uppercased);
printf("%s", uppercased); // Output: HELLO WORLD!
```

---

### 📌 lowercase(string, output)  
Converts a `string` to lowercase and stores it in `output`.

#### Example:  
```c
char str[] = "Hello World!";
char lowercased[13];
lowercase(str, lowercased);
printf("%s", lowercased); // Output: hello world!
```

---

### 📌 swapcase(string, output)  
Swaps the case of characters in a string and stores it in `output`.

#### Example:  
```c
char str[] = "Hello World!";
char swapped[13];
swapcase(str, swapped);
printf("%s", swapped); // Output: hELLO wORLD!
```

---

## 📜 License
This project is licensed under the MIT License. Do whatever you want with it, just don’t forget to give me some credit. 😆

## ⭐ Support
If you like this project, consider giving it a ⭐ on GitHub!

🔗 **GitHub Repository:** [https://github.com/leonardopinezi/Essentials-C](https://github.com/oileo/Essentials-C)

