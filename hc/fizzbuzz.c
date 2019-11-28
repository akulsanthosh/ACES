#include <stdio.h> 
  
int main(void) 
{ 
    int i; 
    for (i=1; i<=100; i++) 
    { 
        // number divisible by 3 and 5 will 
        // always be divisible by 15, print  
        // 'FizzBuzz' in place of the number 
        if (i%15 == 0)         
            printf ("FizzBuzz\n");     
          
        // number divisible by 3? print 'Fizz' 
        // in place of the number 
        else if ((i%3) == 0)     
            printf("Fizz\n");                  
          
        // number divisible by 5, print 'Buzz'   
        // in place of the number 
        else if ((i%5) == 0)                        
            printf("Buzz\n");                  
      
        else // print the number             
            printf("%d\n", i);                  
  
    } 
  
    return 0; 
} 