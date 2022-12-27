#inlcude <iostream>
using namespace std;

class LIST {
    public:
        virtual void store() = 0;    
        virtual void retrive() = 0;
};

class Stack:public LIST {
    
};

class Queue:public LIST {
    
};

int main() {
    
    return 0;
}
