// Online C compiler to run C program online
#include <stdio.h>
// create 3 variables as follows. Length Width Area
int Length,Width,Area;
int main() {
    // Write C code here
     printf("Enter the length: ");
    scanf( "%d", &Length);
    printf("Enter the width: ");
    scanf("%d", &Width);

    Area = Length * Width;

    printf("The area of a rectangle is: %d",Area);

    return 0;
}