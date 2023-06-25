#include <stdio.h>

int main(void)
{

int score;

printf("what is your score \n");
scanf("%d",&score);

/**An automated MOUAU Grading System
 * 70 - 100 A
 * 60 - 69  B
 * 50 - 59  C
 * 45 - 49  D
 * 40 - 44  E
 *  0 - 39  F
 */

    if (score >=70 && score <=100)
    {
        printf("your grade is A");
    }
    else if (score >=60 && score <=69)
    {
        printf("your grade is B");
    }
    else if (score >= 50 && score <=59)
    {
        printf("your grade is C");
    }
     else if (score >= 45 && score <=49)
    {
        printf("your grade is D");
    }
     else if (score >= 40 && score <=44)
    {
        printf("your grade is E");
    }
     else if (score <= 39 && score >= 0)
    {
        printf("your grade is F");
    }
    else
    {
        printf("You entered an invalid score");
    }
    return 0;
}
