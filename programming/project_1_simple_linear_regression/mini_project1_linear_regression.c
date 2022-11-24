/*
Name: Michal Szczecinski
This program calculates the Simple Linear Regression coefficients 
and predicts value y for new data point x.
*/

#include  <stdio.h>
#include <math.h>
float calc_x_mean(float num[], int size);

// define training points to which we fit the line
float x[] = {1,2,3,4,5};
float y[] = {2,4,6,8,10};

// initialise variables
float x_mean, y_mean;
float numerator = 0.0;
float denominator = 0.0;
float b0 = 0.0;
float b1 = 0.0;
float num = 0.0;
float prediction = 0.0;

// find length of the array
// we divide size of the array by size of one element
int size = sizeof x / sizeof x[0];
int size2 = sizeof y / sizeof y[0];

float calculateMean(float x[], int size) {
    float sum = 0.0;
    float mean = 0.0;

    for (int i=0; i <size; i++)
    {
        sum +=x[i];
    }
    mean = sum / size;
    return mean;
}

void Line(int length){
    for (int i = 0; i < length; i++)
    {
        printf("-");
    }
    printf("\n");
    }


int main()
{
    printf("\n");
    Line(80);
    printf("Instructions\n");
    Line(80);
    printf("1. Define training data in the arrays x and y at the beginning of the program.\n");
    printf("2. Run program.\n");
    printf("3. Enter data point X to predict value Y.\n");
    Line(80);

    // check if training data for x and y have same array sizes
    if (size == size2)
    {
         // calculate means
        x_mean = calculateMean(x, size);
        y_mean = calculateMean(y, size);

        // calculate beta 1
        for (int i=0; i <size; i++)
        {
            numerator += (x[i] - x_mean)*(y[i] - y_mean);
            denominator += pow((x[i] - x_mean), 2);
        }
        b1 = numerator/denominator;

        // calculate beta 0
        b0 = y_mean - b1 * x_mean;

        // return prediction for user input
        printf("Enter a number (X): ");
        scanf("%f", &num);
        prediction = num * b1 + b0;
        printf("Prediction for X = %.2f is Y = %.2f.\n", num, prediction);

        // print diagnostic information
        printf("\n");
        Line(80);
        printf("Diagnostics\n");
        Line(80);
        printf("Mean X: %.2f\n",x_mean);
        printf("Mean Y: %.2f\n",y_mean);
        printf("numerator : %.2f\n", numerator);
        printf("denominator : %.2f\n", denominator);
        printf("Linear Model Function: y_hat = %.2f + %.2f * x\n", b0, b1);
        Line(80);
    }
    else
    {
        printf("Arrays X and Y are not of the same size, please correct values and rerun the program.");
    }
}

