#include <iostream>
using namespace std;

float f(float x) {
     //Let us assume the equation as x*x*x + x - 1.
     return x*x*x + x - 1;
}

int main() {
     float a;float b;float x;int iter=0;string out;
     cout << "\t\tEquation: x*x*x + x - 1\n\n";
     cout << "Lower limit:"; cin >> a;
     cout << "Upper limit:"; cin >> b;
     cout << ((f(a)==0)?"root is:"+to_string(a):"");
     cout << ((f(b)==0)?"root is:"+to_string(b):"");
     if (f(a)*f(b) >= 0) {
         cout << "There is no possible root";
         exit(0);
     }
     if ((f(a)!=0)&&(f(b)!=0)) {
           cout << "iteration limit:"; cin >> iter;
     }
     cout << "iteration\ta\t\tb\t\tx\t\tf(x)\n";
     for (int i=0;i<iter;i++) {
           x = (a+b)/2;
           cout << to_string(i+1)+"\t\t"+to_string(a)+"\t"+to_string(b)+"\t"+to_string(x)+"\t"+to_string(f(x))+"\n";
           (f(x)<0)? a=x:b=x;
           i=((f(x)>0)&&(f(x)<0.0001)? iter:i);
     }
     cout << "\nThe nearest root is:" << x;
}
