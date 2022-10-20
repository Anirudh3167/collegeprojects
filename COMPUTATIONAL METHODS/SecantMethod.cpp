#include <iostream>
using namespace std;

float f(float x) {
   return x*x*x + x - 1;
}

int main()
{   
    float x1; float x0; int iter; float x;
    cout << "\t\tEquation: x*x*x + x - 1\n\n";
    cout << "lower limit :";    cin >> x0;
    cout << "upper limit :";    cin >> x1;
    cout << ((f(x0)==0)?"The root is:"+to_string(x0):"");
    cout << ((f(x1)==0)?"The root is:"+to_string(x1):"");
    if (f(x0)*f(x1) >= 0) {
        cout << "No possible roots";
        exit(0);
    }
    cout << "Iterations limit:";    cin >> iter;
    cout << "iteration\tx0\t\tx1\t\tx\t\tf(x)\n";
    for (int i = 0;i<iter;i++) {
    x = x1 - ((x1 - x0)/(f(x1)-f(x0)));
    cout << to_string(i+1)+"\t\t"+to_string(x0)+"\t"+to_string(x1)+"\t"+to_string(x)+"\t"+to_string(f(x))+"\n";
    f(x) < 0? x0 = x : x1 = x; 
    i = ((f(x) <= 0.0001)&&(f(x) >= -0.0001)?iter:i);
    }
    cout << "\nThe nearest root is:" << x << "\n";

    return 0;
}
