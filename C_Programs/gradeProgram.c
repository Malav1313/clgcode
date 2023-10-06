//Grade Program
#include <stdio.h>

int main()
{
    int per;
    printf("Enter Your Percentage  : ");
    scanf("%d", &per);
    
    switch (per/10){
        
        case 3:
        printf("You Failed");
        break;
        
        case 4:
        printf("You Just Passed");
        printf("\nGrade : E");
        break;
        
        case 5:
        printf("Second Class !");
        printf("\nGrade : D");
        break;
        
        case 6:
        printf("First Class !");
        printf("\nGrade is : C");
        break;
        
        case 7:
        printf("First Class With Distinction");
        printf("\nGrade is : B");
        break;
        
        case 8:
        printf("First Class with Distinction");
        printf("\nGrade is : A");
        break;
        
        case 9:
        printf("First Class with Distinction");
        printf("\nGrade is : A++");
        break;
        
        default:
        printf("Please Enter Marks");
        break;
    }
    return 0;
}

