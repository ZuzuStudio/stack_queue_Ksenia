#ifndef MOD_QUEUE_H
#define MOD_QUEUE_H

typedef int Data;

struct Node {
    Data datum;
    Node *next;
};

void enqueue(Node *&begin,Node *&end, Data dt);

Data dequeue(Node *&end,Node *&begin);

void clear(Node *&end,Node *&begin);

Data on_top(Node *end);

bool is_empty(Node *end);

#endif
