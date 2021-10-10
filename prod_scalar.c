//
// Created by David Blandon on 10/10/21.
//


/**
 * Scalar product
 * @param dimension
 * @param x
 * @param y
 * @return The scalar product of two vectors
 */
float prod_scalar(int dimension, float *x, float *y){
    float result = 0;
    for (int i = 0; i < dimension; ++i) {
        result += x[i]*y[i];
    }
    return result;
}
