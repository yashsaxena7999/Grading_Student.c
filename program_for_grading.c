#include <stdio.h>
                                         
int main(){
    float marks;    //considering if marks can have a decimal value as well. for eg : 95.6,46.2,etc.
    printf("Enter your marks: ");     
    scanf("%f",&marks);         
    if(marks>=85 && marks<=100){
        printf("Grade A\n");
    }
    else if(marks>=70 && marks<=84){
        printf("Grade B\n");
    }
    else if(marks>=55 && marks<=69){
        printf("Grade C\n");
    }
    else if(marks>=40 && marks<=54){
        printf("Grade D\n");
    }
    else if(marks>=0 && marks<40){
        printf("Grade F\n");
    }
    else{
        printf("Invalid Input!\n");
    }
    
    //we can also execute the above code using TERNARY OPERATOR which is given below 
    // (marks>=85 && marks<=100)?printf("Grade A\n"):((marks>=70 && marks<=84)?printf("Grade B\n"):((marks>=55 && marks<=69)?printf("Grade C\n"):((marks>=40 && marks<=54)?printf("Grade D\n"):((marks>=0 && marks<40)?printf("Grade F\n"):printf("Invalid Input!\n")))));  

return 0;
}
