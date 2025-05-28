#include "essentialsc.h"

#include <stdio.h>

/**
  * << ESSENTIALS-C >>
  *
  * Simple or Important essentials functions made in C
  *
  * This project is Open Source with MIT license, so you can feel free to Download
  * and edit this project to improve it
  * - Give the credits to the authors <3

  * Check the Doc and learn how to use : https://github.com/leonardopinezi/Essentials-C

  * Version : 4.0.0

  * Made in Brazil
*/

/**
 * << AUTHORS >>
 *
 * Shinpi       (Leonardo Gonçalves)
 * PedroLucaV   (Pedro Lucas)
 * briansantoss (Brian Santos)
 * trindadedev  (Aquiles Trindade)
 */

void input(const cstr in, cstr output)
{
  printf("%s", in);
  int i = 0;
  int c;

  while ((c = getchar()) != '\n' && c != EOF) {
    output[i] = c;
    ++i;
  }

  output[i] = '\0';
}

int length(const cstr in)
{
  int n = 0;
  while (in[n] != '\0' && in[n] != '\n')
    n++;

  return n;
}

int indexof(const cstr in, char letter)
{
  int l = 0;
  while (l < (length(in) - 1)) {
    if (in[l] == letter) {
      return l;
    }
    ++l;
  }
  return -1;
}

int lastindexof(const cstr in, char letter)
{
  int l = length(in) - 1;
  while (l > 0) {
    if (in[l] == letter) {
      return l;
    }
    --l;
  }
  return -1;
}

void reverse(const cstr in, cstr output)
{
  int l = length(in) - 1;
  int a = 0;

  while (l >= 0) {
    if (in[l] != '\0' && in[l] != '\n')
      output[a] = in[l];
    ++a;
    --l;
  }
  --l;
  output[a] = '\0';
}

void substring(const cstr in, cstr output, int start, int end)
{
  int size = length(in) - 2;

  if (start > size || start < 0)
    printf(
        "Error : the string start need be more than 0 and in size of string\n");
  if (end > size || end < 0)
    printf(
        "Error : the string end need be more than 0 and in size of string\n");
  if (start > end)
    printf("Error : the substring end need be more than start\n");

  if (start > size || start < 0 || end > size || end < 0 || start > end)
    return;

  int i = start;
  int j = 0;
  while (i < end) {
    if (in[i] != '\0' && in[i] != '\n') {
      output[j] = in[i];
      ++j;
    }
    ++i;
  }

  output[i] = '\0';
}

void trim(const cstr in, cstr output)
{
  int i, j;

  i = j = 0;

  int __length = length(in);
  int _space = 0;

  while (i < __length) {
    if (in[i] == ' ') {
      if (_space == 1) {
        if (i >= 1 && in[i - 1] == ' ')
          break;
        output[j] = in[i];
        j++;
      }
    } else {
      if (_space == 0)
        _space = 1;
      output[j] = in[i];
      j++;
    }
    ++i;
  }

  _space = 0;
  if (i >= 1 && in[i - 1] == ' ') {
    output[j - 1] = '\0';
  } else
    output[j] = '\0';
}

void replace_char(const cstr in, char letter, char rletter)
{
  int _l = 0;

  while (_l < length(in)) {
    ++_l;
    if (in[_l] == letter) {
      in[_l] = rletter;
    }
  }
}

int includes(const cstr in, const cstr word)
{
  int h = 0;
  int count = 0;
  int count1 = -1;

  while (count < length(in)) {
    if (count1 > -1 && count1 < length(word))
      ++count1;
    if (in[count] == word[0]) {
      h = 1;
      ++count1;
    }

    if (in[count] != word[count1]) {
      if (word[count1] != '\0') {
        h = 0;
      }
    }

    ++count;
  }

  return h;
}

void bubble_sort(int arr[], int n, int val)
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
    if (swapped == 0)
      break;
  }
}

int starts_with(const cstr entry, char character)
{
  if (entry[0] == character) {
    return 0;
  } else {
    return 1;
  }
}

int ends_with(const cstr entry, char character)
{
  if (entry[length(entry) - 1] == character) {
    return 0;
  } else {
    return 1;
  }
}

void uppercase(const cstr in, cstr output)
{
  if (in == NULL || output == NULL) {
    return;
  } else {
    int i = 0;
    while (i < length(in)) {
      output[i] = in[i] >= 'a' && in[i] <= 'z' ? in[i] - 'a' + 'A' : in[i];
      i++;
    }
    output[i] = '\0';
  }
}

void lowercase(const cstr in, cstr output)
{
  if (in == NULL || output == NULL) {
    return;
  } else {
    int i = 0;
    while (i < length(in)) {
      output[i] = in[i] >= 'A' && in[i] <= 'Z' ? in[i] - 'A' + 'a' : in[i];
      i++;
    }
    output[i] = '\0';
  }
}

void swapcase(const cstr in, cstr output)
{
  if (in == NULL || output == NULL) {
    return;
  } else {
    int i = 0;
    while (i < length(in)) {
      if (in[i] >= 'A' && in[i] <= 'Z') {
        output[i] = in[i] - 'A' + 'a';
      } else if (in[i] >= 'a' && in[i] <= 'z') {
        output[i] = in[i] - 'a' + 'A';
      } else {
        output[i] = in[i];
      }
      i++;
    }
    output[i] = '\0';
  }
}