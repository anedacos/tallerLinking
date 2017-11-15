/* addvec.c */
/* $begin addvec */
struct vector {
	int x,y,z;
};

/*Vector *v1_nuevo(){
	Vector *v1 = malloc(sizeof(Vector));
	return v1; 
}*/

void addvec(Vector *v1, int n) 
{
    int i;

    for (i = 0; i < n; i++)
	v1.z[i] = v1.x[i] + v1.y[i];
}
/* $end addvec */
