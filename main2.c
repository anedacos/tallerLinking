/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <definicion.h>

/*
int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];*/

vec x;
vec y;
vec z;

int main() 
{
    /*addvec(v1, 2);
    printf("z = [%d %d]\n", v1.z[0], v1.z[1]);
    multvec(x, y, z, 3);
    printf("z = [%d %d]\n", z[0], z[1]);
    return 0;*/

    printf("ingrese los valores del primer vector: \n");
    printf("x: ");
    scanf("%d", &x.xy[0]);
    printf(" \n");
    printf("y: ");
    scanf("%d", &x.xy[1]);
    printf(" \n");

    printf("ingrese los valores del segundo vector: \n");
    printf("x: ");
    scanf("%d", &y.xy[0]);
    printf(" \n");
    printf("y: ");
    scanf("%d", &y.xy[1]);
    addvec(x.xy, y.xy, z.xy, 2);
    printf(" \n");
    printf("z = [%d %d]\n", z.xy[0], z.xy[1]);
    return 0;
}
/* $end main2 */
