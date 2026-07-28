#include <stdio.h> 
void reduce(int *nume, int *deno); 
int main () {
    int num1, num2; 
    printf("Enter the numerator >> "); 
    scanf("%d", &num1); 
    printf("Enter the denominator >> "); 
    scanf("%d", &num2); 
    if (num2 == 0) {
        printf("Your function is invalid!"); 
        return 1; 
    }
    printf("The fraction is %d/%d\n", num1, num2); 
    reduce(&num1, &num2); 
    printf("The simplified fraction is %d/%d", num1, num2); 
    return 0; 
}
void reduce(int *nume, int *deno) {

    int a = *nume, b = *deno; 
    if (a < 0) a = -a; 
    if (b < 0) b = -b; 
    while (b != 0) {
        int temp = b; 
        b = a % b; 
        a = temp; 
    }
    *nume = *nume / a; 
    *deno = *deno / a; 
}

