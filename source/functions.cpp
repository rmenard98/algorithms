#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "functions.hpp"

int abs_val(int x) {
  return (x > 0) ? x : x * -1;
}

int pow(int base, int num) {
  int ret = 1;
  for (int i = 0; i < num; ++i) {
    ret *= base;
  }
  return ret;
}

int log(int base, int num) {
  int count = 0;
  for (num = 0; num > 1; num /= base)
    ++count;
  return count;
}

int chartoint(char c) {
  int result = (int)c;
  result -= '0';
  return result;
}

char inttochar(int x) {
  return (char)(x + '0');
}

char chr(int x) {
  return (char)x;
}

int ord(char c) {
  return (int)c;
}

int max(int x, int y) {
  return (x > y) ? x : y;
}

int max(int x, int y, int z) {
  return max(x, max(y, z));
}

int min(int x, int y) {
  return (x < y) ? x : y;
}

int min(int x, int y, int z) {
  return min(x, min(y, z));
}

int round(double x, char c) {
  if (x > 0) {
    return (c == 'd') ? (int)x : (int)x + 1;
  } else {
    return (c == 'd') ? (int)x - 1 : (int)x;
  }
}

bool all(bool arr[], int n){
    for(int i =0; i <n; i++){
      if (arr[i]== false)
        return false;
    }
    return true;
}

bool any(bool arr[], int n){
  for(int i =0; i <n; i++){
      if (arr[i]== true)
        return true;
    }
    return false;
}

int frequency(int arr[], int n, int x){
  int counter =0;
  for (int i=0; i<n; i++){
    if(arr[i]==x){
      counter++;
    }
  }
  return counter;
}

long sum(int arr[], int n){
  long temp =0;
  for (int i = 0; i<n;i++){
    temp += arr[i];
  }
  return temp;
}

int index(char str[], char substr[]){
  int temp =0;
  for (int i=0; substr[i]!='\0';i++){
    temp++;
  }
  for (int i=0; str[i]!='\0';i++){
    if(str[i]== substr[i]){
      return i;
    }
    
  }
  return -1;
}

bool is_sorted(int arr[], int n){
  int x =0;
  int y =0;
  int z =0;
  for (int i =0;i<n;i++){
    if(arr[i]==arr[i+1])
      z++;
    else if(arr[i]>arr[i+1])
      x++;
    else if(arr[i]<arr[i+1])
      y++;
    
  }
  if(x==n||y==n||y+z==n||x+z==n||z==n){
    return true;
  }
  return false;
}

int max(int arr[], int n){
int maxNum = arr[0];
for (int i=1; i<n; i++){
  if(arr[i]>maxNum){
    maxNum = arr[i];
    }
  }
  return maxNum;
}

int min(int arr[], int n){
int minNum = arr[0];
for (int i=1; i<n; i++){
  if(arr[i]<minNum){
    minNum = arr[i];
    }
  }
  return minNum;
}

