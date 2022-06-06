//Test 1 Task 1 by Stefan Markovski
#include <stdio.h>
#include <math.h>
#define PI 3.14

int cylinder(double r, double h, double* V, double* S);
int main(){
    double radius, height, vol, s_cyl;
    while(EOF){
        scanf("%lf", &radius);
        scanf("%lf", &height);
        if(radius > 0 && height > 0){
            cylinder(radius, height, &vol, &s_cyl);
            printf("S = %.2lf V = %.2lf\n", vol, s_cyl);
        }else{
            printf("Invalid numbers\n");
        }
    }
}
int cylinder(double r, double h, double* V, double* S){
    *V = PI * pow(r, 2) * h;
    double B = 2 * PI * r * h;
    double S_base = PI * pow(r, 2);
    *S = 2*S_base + B;
}