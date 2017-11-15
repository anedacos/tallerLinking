/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include <definicion.h>

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

struct Vector v1;
strcpy(v1.x[2],{1,2});
strcpy(v1.y[2],{3,4});
//strcpy(v1.z[2]);

int main() 
{
    addvec(v1, 2);
    printf("z = [%d %d]\n", v1.z[0], v1.z[1]);
    multvec(x, y, z, 3);
    printf("z = [%d %d]\n", z[0], z[1]);
    return 0;
}
/* $end main2 */
