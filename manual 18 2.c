#include <stdio.h> 
#include <string.h> 
int main () {
    char str[100]; 
    scanf("%s", str); 
    char *left = str; 
    char *right = str + (strlen(str) - 1); 
    while (left < right) {
    char temp; 
    temp = *left; 
    *left = *right; 
    *right = temp; 
    left++; 
    right--; }
        printf("The reverse order is %s\n", str); 
    return 0; 
}