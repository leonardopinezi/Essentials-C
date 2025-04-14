#include <stdio.h>
#include "essentialsc.h"

/*
	<< ESSENTIALS-C >>

	Simple or Important essentials functions made in C

	This project is Open Source with MIT license, so you can feel free to Download and edit this project to improve it
	- Give the credits to the author <3

	Check the Doc and learn how to use : https://github.com/oileo/Essentials-C
	
	Made by Shinpi (Leonardo Gonçalves)
	Version : 3

	Made in Brazil
*/

void input(char s[], char output[])
{
	printf("%s", s);
	int i = 0;
	char c;

	while((c = getchar()) != '\n' && c != EOF) {
		output[i] = c;
		++i;
	}

	output[i] = '\0';
}

int length(char s[])
{
	int n = 0;
	while(s[n] != '\0' && s[n] != '\n')
		n++;

	return n;
}

int indexof(char s[], char letter)
{
	int l = 0;
	while(l < (length(s) - 1)) {
		if(s[l] == letter) {
			return l;
		}
		++l;
	}
	return -1;
}

int lastindexof(char s[], char letter)
{
	int l = length(s) - 1;
	while(l > 0) {
		if(s[l] == letter) {
			return l;
		}
		--l;
	}
	return -1;
}

void reverse(char s[], char output[])
{
	int l = length(s)-1;
	int a = 0;

	while(l >= 0) {
		if(s[l] != '\0' && s[l] != '\n') output[a] = s[l];
		++a;
		--l;
	}
	--l;
	output[a] = '\0';
}

void substring(char s[], char output[], int start, int end)
{
	int size = length(s) - 2;

	if(start > size || start < 0) printf("Error : the string start need be more than 0 and in size of string\n");
	if(end > size || end < 0) printf("Error : the string end need be more than 0 and in size of string\n");
	if(start > end) printf("Error : the substring end need be more than start\n");	

	if(start > size || start < 0 || end > size || end < 0 || start > end) return;

	int i = start;
	int j = 0;
	while(i < end) {
		if(s[i] != '\0' && s[i] != '\n') {
			output[j] = s[i];
			++j;
		}
		++i;
	}

	output[i] = '\0';
}

void trim(char s[], char output[])
{
	int i, j;

	i = j = 0;
	
	int __length = length(s);
	int _space = 0;

	while(i < __length){
		if(s[i] == ' ') {
			if(_space == 1) {
				if(i >= 1 && s[i-1] == ' ') break;
				output[j] = s[i];
				j++;
			}
		} else {
			if(_space == 0)
				_space = 1;
			output[j] = s[i];
			j++;
		}
		++i;
	}

	_space = 0;
	if(i >= 1 && s[i-1] == ' ') {
		output[j-1] = '\0';
	} else output[j] = '\0';
}

void replaceChar(char s[], char letter, char rletter)
{
	int _l = 0;

	while(_l < length(s)) {
		++_l;
		if(s[_l] == letter) {
			s[_l] = rletter;
		}
	}
}

int includes(char s[], char word[])
{
	int h = 0;
	int count = 0;
	int count1 = -1;

	while(count < length(s)) {
		if(count1 > -1 && count1 < length(word)) ++count1;
		if(s[count] == word[0]) {
			h = 1;
			++count1;
		}

		if(s[count] != word[count1]) {
			if(word[count1] != '\0') {
				h = 0;				
			}
		}

		++count;
	}
	
	return h;
}

void bubbleSort(int arr[], int n, int val)
{
    int i, j, temp, swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if ((val && arr[j] > arr[j + 1]) || (!val && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

int startsWith(char entry[], char character[])
{
	if(entry[0] == character[0]) {
		return 0;
	} else {
		return 1;
	}
}

int endsWith(char entry[], char character[])
{
	if(entry[length(entry) - 1] == character[length(character)]) {
		return 0;
	} else {
		return 1;
	}
}
