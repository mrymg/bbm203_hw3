#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data  = newdata;
    newnode->prev = NULL;
    newnode->next = head;
    if(head !=  NULL)
        head->prev = newnode ;
    head = newnode;
}

int main() {

    int x = 10;
    int toplami = x+22;
    cout<<toplami;

    return 0;
}
