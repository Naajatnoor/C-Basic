
#include <stdio.h>

// Function to multiply floating point
// numbers
float multiply(float a, float b) 
{ 
  return a * b; 
}

//main function
int main()
{
    float A = 2.12, B = 3.88, product;
    product = multiply(A, B);// Calling product function

    // Displaying result up to 3 decimal places.
    printf("Product of entered numbers is:%.3f", product);

    return 0;
}