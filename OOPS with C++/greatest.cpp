#include <iostream>
using namespace std;
    class a;
    
    class b  
    {
        private:
            int number;
        public:
        b(int x)    {number=x;}
        void friend greatest(a a1,b b1);
    };
    
    class a    
    {
        private:
            int number;
        public:
        a(int x)    {number=x;}
        void friend greatest(a a1,b b1);
    };
    void greatest(a a1,b b1) {
        cout <<  "greatest number is:" + to_string((a1.number>b1.number)? a1.number:b1.number);
    }
    
int main() {
    int num;
    cout << "A:";   cin >> num;a a1(num);
    cout << "B:";   cin >> num;b b1(num);
    
    greatest(a1,b1);
    return 0;
}
