#include <iostream>
using namespace std;

float f(float x) {
     //Let us assume the equation as x*x*x + x - 1.
     return x*x*x + x - 1;
}

int main() {
     float a;float b;float x;int iter=0;
     cout << "Lower limit:"; cin >> a;
     cout << "Upper limit:"; cin >> b;
     cout << ((f(a)==0)?"root is:"+to_string(a):"");
     cout << ((f(b)==0)?"root is:"+to_string(b):"");
     if ((f(a)!=0)&&(f(b)!=0)) {
           cout << "iteration limit:"; cin >> iter;
     }
     for (int i=0;i<iter;i++) {
           x = (a+b)/2;
           (f(x)<0)? a=x:b=x;
           i=((f(x)>0)&&(f(x)<0.0001)? iter:i);
     }
     cout << "The nearest root is:" << x;
}
