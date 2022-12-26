#include <iostream>
#include <vector>
using namespace std;
//defining the node
struct Node {
    int data;
    struct Node *next;
};

//creating pointer to our first node of linked list
struct Node *first;

//Insertion at Begining
void BeginInsert(struct Node *p,int data) {
    struct Node *t;
    if (first == NULL) {
        t = new Node;
        t->data = data;
        t->next = NULL;
        first = t;
    }
    else {
        t = new Node;
        t->data = data;
        t->next = p;
        first = t;
    }    
}

void display(struct Node *p) {
    cout << "\nList: ";
    while (p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void reverse(struct Node *p) {
    cout << "Reverse List: ";
    vector<int> v1;
    while (p!=NULL) {
        v1.push_back(p->data);
        p = p->next;
        
    }
    int len = v1.size();
    for(int i = 0; i < len; i++) {
        cout << v1[len-1-i] << " ";
    }
}
int main(){
    int val;
    cout << "Inserting some random values:";
    BeginInsert(first,3);
    BeginInsert(first,4);
    BeginInsert(first,5);
    BeginInsert(first,6);
    display(first);
    cout <<"\n REVERSE OF A LINKED LIST \n";
    reverse(first);
    return 0;
}
