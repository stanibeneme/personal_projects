#include <stdio.h>

int main(){
    
int grade = 0;

/**An automated MOUAU Grading System
 * 70 - 100 A
 * 60 - 69  B
 * 50 - 59  C
 * 45 - 49  D
 * 40 - 44  E
 *  0 - 39  F
 */
 
    if (grade >=70 && grade <=100)
    {
        printf("your grade is A");
    }
    else if (grade >=60 && grade <=69)
    {
        printf("your grade is B");
    }
    else if (grade >= 50 && grade <=59)
    { 
        printf("your grade is C");
    }
     else if (grade >= 45 && grade <=49)
    { 
        printf("your grade is D");
    }
     else if (grade >= 40 && grade <=44)
    { 
        printf("your grade is E");
    }
     else if (grade <= 39)
    { 
        printf("your grade is F");
    }

    return 0;    
} 
