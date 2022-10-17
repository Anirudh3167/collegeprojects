/*NEWTON RAPHSON MTEHOD*/

#include <iostream>
#include <math.h>
using namespace std;

float f(float x) {
    x*x*x + x - 1
    return eq;
}

int SECANT(float x1,float x0,int iter) {
    float x;
    for (int i = 0;i<iter;i++) {
    x = x1 - ((x1 - x0)/(f(x1)-f(x0)));
    f(x,0) < 0? x0 = x : x1 = x; 
    i = ((f(x) <= 0.0001)&&(f(x) >= 0)?iter:i);
    }
    cout << "\n\tx = " << x << "\n";
    return 0;
}

int main()
{   
    float x1; float x0;
    cout << "lower limit :";
    cin >> x0;
    cout << "upper limit :";
    cin >> x1;
    cout << "Iterations limit:";
    cin >> iter;
    SECANT(x1,x0,iter);
    return 0;
}
