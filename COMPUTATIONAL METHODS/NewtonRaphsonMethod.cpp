#include <iostream>
using namespace std;

float f(float x,int deriv) {
    float eq;
    eq = (deriv == 0? x*x*x + x - 1 : 3*x*x + 1);
    return eq;
}

int main()
{   
    
    float x;int iter;
    cout << "\t\tEquation: x*x*x + x - 1\n\n";
    cout << "Assumed root:";
    cin >> x;
    cout << "Iterations limit:";
    cin >> iter;
    cout << "iteration\tx\t\tf(x)\t\tf'(x)\n";
    for(int i = 0;i<iter;i++){
        x = x - (f(x,0)/f(x,1));
        cout << to_string(i+1)+"\t\t"+to_string(x)+"\t"+to_string(f(x,0))+"\t"+to_string(f(x,1))+"\n";
        i =(f(x,0) <= 0.0001?iter:i);
    }
    
    cout << "\n\tThe nearest root is:" << x << "\n";
    return 0;
}
