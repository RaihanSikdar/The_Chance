  /*
    11. Given the coordinate of two points p1(x1,y1) and p2(x2,y2). Find which point is closest to the center (0,0).
    Input_1:
25 15 35 10
Output_1:
25 15

Input_2:
78 12 36 61
Output_2:
36 61
    */

    #include <stdio.h>
    #include <math.h>
    int main()
    {
        double x1, y1, x2, y2, c1, c2;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        c1 = sqrt(pow( x1, 2 ) + pow( y1, 2 ));
        c2 = sqrt(pow( x2, 2 ) + pow( y2, 2 ));
        if (c1 < c2)
        {
            printf("%.lf %.lf", x1, y1);
        }
        else
        {
            printf("%.lf %.lf", x2, y2);
        }
    }

