//sides of triangle
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter Side 1 : ");
    scanf("%d", &side1);
    printf("Enter Side 2 : ");
    scanf("%d", &side2);
    printf("Enter Side 3 : ");
    scanf("%d", &side3);
    
    if(side1 == side2 && side2 == side3){
        printf("Side1 : %d Side2 : %d Side 3 : %d", side1, side2, side3);
        printf("\nEquilateral Triangle");
    }else if (side1 == side2 || side2 == side3){
        printf("Side1 : %d Side2 : %d Side 3 : %d", side1, side2, side3);
        printf("\nIsoceles Triangle");
    }else{
        printf("Side1 : %d Side2 : %d Side 3 : %d", side1, side2, side3);
        printf("\nScalane Triangle");
    }
    
    return 0;
}

