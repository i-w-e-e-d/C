/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

/* 
 * by iweed™
 * 
*/ 
int user_main() {
    //  IMPLEMENTATION
    int x, y;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n",x,y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n",x,y);
    else if (x < 0 && y < 0)
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n",x,y);
    else if (x > 0 && y < 0)
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n",x,y);
    else if (x == 0 && y == 0)
        printf("The coordinate point (%d,%d) lies at the origin.\n",x,y);

    return 0;
}
