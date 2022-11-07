#include <iostream>

using namespace std;

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *first;

void BeginInsert(struct Node *p,int data) {
    struct Node *t;
    if (first == NULL) {
        t = new Node;
        t->data = data;
        t->next = t->prev = NULL;
        first = t;
    }
    else {
        t = new Node;
        t->data = data;
        t->prev = NULL;
        t->next = p;
        p->prev = t;
        first = t;
    }
}

void MiddleInsert(struct Node *p,int data) {
    struct Node *t;
    struct Node *r; 
    if (first == NULL) {
        t = new Node;
        t->data = data;
        t->next = t->prev = NULL;
        first = t;
    }
    else {
        t = new Node;
        t->data = data;
        while (p->data != 4) {
            p = p->next;
        }
        r = p->next;
        r->prev = t;
        t->prev = p;
        t->next = r;
        p->next = t;
    }
}

void EndInsert(struct Node *p,int data) {
    struct Node *t;
    if (first == NULL) {
        t = new Node;
        t->data = data;
        t->next = t->prev = NULL;
        first = t;
    }
    else {
        t = new Node;
        t->data = data;
        t->next = NULL;
        
        while (p->next != NULL) {
            p = p->next;    
        }
        p->next = t;
        t->prev = p;

    }
}

void BeginDelete(struct Node *p) {
    struct Node *t;
    if (first == NULL) {
        cout << "NO NODE PRESENT";
    }
    else {
        t = p;
        p = p->next;
        delete t;
        first = p;
    }
}

void MiddleDelete(struct Node *p,int data) {
    struct Node *t;
    struct Node *r; 
    if (first == NULL) {
        cout << "NO NODE IS PRESENT";
    }
    else {
        while (p->data != data) {
            p = p->next;
        }
        t = p->prev;
        t->next = p->next;
        r = p->next;
        r->prev = p->prev;
        delete p;
    }
}

void EndDelete(struct Node *p) {
    struct Node *t;
    if (first == NULL) {
        cout << "NO NODE IS PRESENT";
    }
    else {
        while (p->next != NULL) {
            p = p->next;    
        }
        t = p->prev;
        t->next = NULL;
        delete p;

    }
}


void display(struct Node *p) {
    cout << "List: ";
    while (p!=NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    int val;
    // first = new Node;
    cout << "Adding some random values";
    BeginInsert(first,3);
    BeginInsert(first,4);
    BeginInsert(first,5);
    BeginInsert(first,6);
    EndInsert(first,6);
    display(first);
    cout <<"\nINSERTION AT BEGINING \n";
    //cout << "Value:";
    //cin >> val;
    val = 3;
    BeginInsert(first,val);
    display(first);
    cout <<"\n INSERTION AT MIDDLE \n";
    //cout << "\nValue:";
    //cin >> val;
    val = 7;
    MiddleInsert(first,val);
    display(first);
    cout <<"\n INSERTION AT ENDING \n";
    //cout << "Value:";
    //cin >> val;
    val =9;
    EndInsert(first,val);
    display(first);
    cout <<"\nDELETION AT BEGINING \n";
    //cout << "Value:";
    //cin >> val;
    val = 3;
    BeginDelete(first);
    display(first);
    cout <<"\n DELETION AT MIDDLE \n";
    //cout << "\nValue:";
    //cin >> val;
    val = 7;
    MiddleDelete(first,val);
    display(first);
    cout <<"\n DELETION AT ENDING \n";
    //cout << "Value:";
    //cin >> val;
    val =9;
    EndDelete(first);
    display(first);
    return 0;   
}
