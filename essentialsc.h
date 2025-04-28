#ifndef ESSENTIALS_H
#define ESSENTIALS_H

typedef char str[]; // Experimental

int length(char s[]);
void input(char s[], char output[]);
int indexof(char s[], char letter);
int lastindexof(char s[], char letter);
void reverse(char s[], char output[]);
void substring(char s[], char output[], int start, int end);
void trim(char s[], char output[]);
void replaceChar(char s[], char letter, char rletter);
int includes(char s[], char word[]);
void bubbleSort(int arr[], int n, int val);
int startsWith(char entry[], char character[1]);
int endsWith(char entry[], char character[]);
void uppercase(char s[], char output[]);
void lowercase(char s[], char output[]);
void swapcase(char s[], char output[]);

#endif
