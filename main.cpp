#include "calculator.h"
int main(){
    cout<<"The sum of 50 and 30 is: "<<sum(50, 30)<<endl;
    cout<<"The subtraction of 30 from 50 is: "<<sub(50, 30)<<endl;
    cout<<"The product of 50 and 30 is: "<<mult(50,30)<<endl;
    cout<<"The division of 24 and 12 is: "<<div(24.0,12.0)<<endl;
    cout<<"The GCD of 50 and 30 is: "<<GCD(50, 30)<<endl;
    cout<<"The LCM of 50 and 30 is: "<<LCM(50, 30)<<endl;
    cout<<"A random number is generated: "<<randomNum()<<endl;
    cout<<"Thank you for using the calculator"<<endl;
    srand(time(0));
    return 0;
}

