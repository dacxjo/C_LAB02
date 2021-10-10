#include <stdio.h>
#include <stdlib.h>
#include "prod_scalar.c"
#include <math.h>

int main() {
    int n;
    float *x,*y,tol;

    printf("----Orthogonal Vectors----\n");
    printf("Vectors dimension:\n");
    scanf("%d",&n);

    x = (float *) malloc(n*sizeof (float));
    y = (float *) malloc(n*sizeof (float));

    printf("Enter the elements from Vector X:\n");
    for (int i = 0; i < n; ++i) {
            scanf("%f",&x[i]);
    }
    printf("Enter the elements from Vector Y:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%f",&y[i]);
    }
    printf("Enter the tolerance:\n");
    scanf("%f",&tol);

    float prod = prod_scalar(n,x,y);
    printf("Result: %f\n",prod);

    if(fabs(prod) < tol){
        printf("The vectors are orthogonal");
    }else{
        printf("The vectors aren't orthogonal");
    }
    return 0;
}
