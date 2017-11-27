#include <iostream>
#include <vector>

using namespace std;

// Create a linked list using classes.
// If you are not similar whit linked lists look it up on the Internet.
// Feel free to walk through some tutorials, get familiar with your implementation.

struct node {

    int data;
    node *next;
    node *n;
    node *t;
    node *h;

    n = new node;
    n->data = 1;
    t = n;
    h = n;

    n = new node;
    n->data = 2;
    t->next = n;
    t = t->next;

    n = new node;
    n->data = 3;
    t->next = n;

    n = new node;

    t = t->next;
    n->data = 4;
    t->next = n;
    n->next = NULL;
};

int main()
{
    return 0;
}
