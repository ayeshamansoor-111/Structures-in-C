#include <stdio.h> 
int main() {
    int arr[8];
    int *ptr = arr; 
    int sum = 0; 
    for (int i = 0; i < 8; i++) {
        printf("Enter the number %d >>  ", i + 1); 
        scanf("%d", &arr[i]); 
    }
    for(int j = 0; j < 8; j++) {
     sum += *ptr;
       ptr++; }
        printf("The sum is equal to %d", sum); 
      return 0; 
}