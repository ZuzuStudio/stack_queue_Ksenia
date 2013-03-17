#ifndef MOD_STACK_H
#define MOD_STACK_H

typedef int Data;

struct Node {
    Data datum;
    Node *link;
};

void push(Node *&top, Data dt);

Data pop(Node *&top);

void clear(Node *&top);

Data on_top(Node *top);

bool is_empty(Node *top);

#endif
