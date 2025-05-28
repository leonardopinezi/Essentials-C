#ifndef __ESSENTIALS_C_H__
#define __ESSENTIALS_C_H__

#define ESSENTIALS_C_VERSION 201

/** Old Names to avoid broke existing projects. */
#define replaceChar replace_char
#define bubbleSort bubble_sort
#define startsWith starts_with
#define endsWith ends_with

typedef char* cstr;

int length(const cstr in);

void input(const cstr in, cstr out);

int indexof(const cstr in, char letter);

int lastindexof(const cstr in, char letter);

void reverse(const cstr in, const cstr out);

void substring(const cstr in, const cstr out, int start, int end);

void trim(const cstr in, const cstr out);

void replace_char(const cstr in, char letter, char replacement);

int includes(const cstr in, const cstr word);

void bubble_sort(int arr[], int n, int val);

int starts_with(const cstr in, const char character);

int ends_with(const cstr in, const char character);

void uppercase(const cstr in, const cstr out);

void lowercase(const cstr in, const cstr out);

void swapcase(const cstr in, const cstr out);

#endif
