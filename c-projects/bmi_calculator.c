#include <stdio.h>

int main() 
{
    /** BMI Calculator Project
     *  BMI Category 
     *  Underweight (Severe thinness)   < 16.0
     *  Underweight (Moderate thinness)   16.0 – 16.9
     *  Underweight (Mild thinness) 17.0 – 18.4
     *  Normal range  18.5 – 24.9
     *  Overweight (Pre-obese)  25.0 – 29.9
     *  Obese (Class I) 30.0 – 34.9
     *  Obese (Class II) 35.0 – 39.9
     *  Obese (Class III) ≥ 40.0
    */ 

    float weight, height, bmi;
    printf("Input weight in kg \n");
    scanf("%f", &weight);
    printf("Input height in m \n");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your body mass index (BMI) is %f\n", bmi);    
    
    if(bmi < 16)
    {
        printf("Your BMI Category is Underweight (Severe thinness)\n");
    }
    else if(bmi <= 16.9 && bmi >= 16)
    {
        printf("Your BMI Category is Underweight (Moderate thinness)\n");
    }
    else if(bmi <= 18.4 && bmi >= 17)
    {
        printf("Your BMI Category is Underweight (Mild thinness)\n");
    }
    else if(bmi <= 24.9 && bmi >= 18.5)
    {
        printf("Your BMI Category is Underweight (Normal range)\n");
    }
    else if(bmi <= 29.9 && bmi >= 25)
    {
        printf("Your BMI Category is Overweight (Pre-obese)\n");
    }
    else if(bmi <= 34.9 && bmi >= 30)
    {
        printf("Your BMI Category is Obese (Class I)\n");
    }
    else if(bmi <= 39.9 && bmi >= 35)
    {
        printf("Your BMI Category is Obese (Class II)\n");
    }
    else if(bmi >= 40)
    {
        printf("Your BMI Category is Obese (Class III)\n");
    }
    else
    {
        printf("INVALID\n");
    } 
        
    return 0;
}
