#include <stdio.h>

int main() {
    
    int i; // declare variables
   
    
    for (i = 1; i <=100; i++) { // parameters for printing
        
        if (i % 15 == 0) {  // parameters to print FizzBuzz
            
            printf("FizzBuzz\n");
        }
        else if (i % 5 == 0) {  // parameters to print Buzz
            printf("Buzz\n");
        }
        else if(i % 3 == 0){  // parameters to printf Fizz
            printf("Fizz\n");
            
        }
        else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}