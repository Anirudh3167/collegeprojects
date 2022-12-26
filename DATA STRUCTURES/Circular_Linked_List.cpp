
#include <iostream>

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
    struct Node *r;
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
        //finding the end node (NULL for the first time)
        while(p->next != first) {
            if (p->next == NULL) {
                break;
            }
            p=p->next;
        }
        //linking the end node with the first node
        p->next = t;
        first = t;
    }    
}

//Insertion at MIDDLE
void MiddleInsert(struct Node *p,int data) {
    struct Node *t;
    struct Node *r; 
    if (first == NULL) {
        t = new Node;
        t->data = data;
        t->next = NULL;
        first = t;
    }
    else {
        t = new Node;
        t->data = data;
        //Inserting the element after the element with data as 4.
        while (p->data != 4) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

//Insertion at ending
void EndInsert(struct Node *p,int data) {
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
        t->next = first;
        while (p->next != first) {
            p = p->next;    
        }
        p->next = t;
    }
}

//Deletion at begining
void BeginDelete(struct Node *p) {
    struct Node *t;
    if (first == NULL) {
        cout << "NO NODE PRESENT";
    }
    else {
        // pointing the last noe
        while(p->next != first) {
            p=p->next;
        }
        // t will point to first node
        t = p->next;
        // assigning second node to last node
        p->next = (p->next)->next;
        delete t;
        first = p->next;
        //finding the end node
        //linking last node with the first node.
    }
}

//Deletion at middle
void MiddleDelete(struct Node *p,int data) {
    struct Node *t;
    struct Node *r; 
    if (first == NULL) {
        cout << "NO NODE IS PRESENT";
    }
    else {
        while (p->data != data) {
            r = p;
            p = p->next;
        }
        r->next = p->next;
        delete p;
    }
}

//Deletion at Ending
void EndDelete(struct Node *p) {
    struct Node *t;
    if (first == NULL) {
        cout << "NO NODE IS PRESENT";
    }
    else {
        while (p->next != first) {
            t = p;
            p = p->next;    
        }
        t->next = first;
        delete p;
    }
}

void display(struct Node *p) {
    cout << "List: ";
    while (p!=NULL) {
        cout << p->data << " ";
        p = p->next;
        if (p->next == first) {
            cout << p->data << " ";
            break;
        }
    }
}

int main(){
    int val;
    cout << "Inserting some random values:";
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
