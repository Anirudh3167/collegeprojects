#include <iostream>
using namespace std;

float f(float x,int deriv) {
    float eq;
    eq = (deriv == 0? x*x*x + x - 1 : 3*x*x + 1);
    return eq;
}


int NRM(float x,int iter) {
    for(int i = 0;i<iter;i++){
        x = x - (f(x,0)/f(x,1));
        i =(f(x,0) <= 0.0001?iter:i);
    }
    
    cout << "\n\tx = " << x << "\n";
    return 0;
}

int main()
{   
    
    float x;int iter;
    cout << "Assumed root:";
    cin >> x;
    cout << "Iterations limit:";
    cin >> iter;
    NRM(x,iter);
    return 0;
}
