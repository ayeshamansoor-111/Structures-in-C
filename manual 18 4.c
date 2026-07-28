#include <stdio.h> 
int largest(int num[], int size);  
int main() {
    int arr[10]; 
    for (int i = 0; i < 10; i++) {
        printf("Enter the number %d >> ", i + 1); 
        scanf("%d", &arr[i]); 
    }
printf("The largest number is %d\n", largest(arr, 10)); 
return 0; 
}
int largest(int num[], int size) {
    int max = num[0]; 
    for (int i = 1; i < size ; i++) {
    if (num[i] > max) {
        max = num[i]; 
    } }
   return max; 

}