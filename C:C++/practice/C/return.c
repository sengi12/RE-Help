#include <stdio.h>
#include <stdlib.h>

double cube(double a);

int main(){
    printf("%f\n", cube(7));
    return 0;
}

double cube(double a){
    return a*a*a; 
} 