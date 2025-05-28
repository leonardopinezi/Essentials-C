#ifndef ESSENTIALS_H
#define ESSENTIALS_H

/** Old Names to avoid broke existing projects. */
#define replaceChar replace_char
#define bubbleSort bubble_sort
#define startsWith starts_with
#define endsWith ends_with

typedef char str[]; // Experimental

int length(char s[]);

void input(char s[], char output[]);

int indexof(char s[], char letter);

int lastindexof(char s[], char letter);

void reverse(char s[], char output[]);

void substring(char s[], char output[], int start, int end);

void trim(char s[], char output[]);

void replace_char(char s[], char letter, char rletter);

int includes(char s[], char word[]);

void bubble_sort(int arr[], int n, int val);

int starts_with(char entry[], char character[1]);

int ends_with(char entry[], char character[]);

void uppercase(char s[], char output[]);

void lowercase(char s[], char output[]);

void swapcase(char s[], char output[]);

#endif
