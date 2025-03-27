#include "calculator.h"

double sum(double x, double y){
    return (x+y);
}
double sub(double x, double y){
    return (x-y);
}
double mult(double x, double y){
    return (x*y);
}
double div(double x, double y){
    return (x/y);
}
int fact(int n){
    int n1=1;
    while(n>0){
        n1*=n;
        n--;
    }
    return n1;
}
//not working as intended
int GCD(int n1, int n2){
    if(n2==0){
        return n1;
    }
    return GCD(n2,n1%n2);
}
int LCM(int n1, int n2){
    return (n1*n2)/GCD(n1,n2);
}

int randomNum(){
    return (1+rand()%100);
}

