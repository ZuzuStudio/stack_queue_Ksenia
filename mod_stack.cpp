#include "mod_stack.h"
#include <iostream>

void push(Node *&top, Data dt){
    Node *p = NULL;
    p = new Node;
    p -> datum = dt;
    p -> link = top;
    top = p;
    p = NULL;
}

Data pop(Node *&top){
    Node *p = top;
    if(p){
        top = top -> link;
        Data dt = p -> datum;
        p -> datum = 0;
        p -> link = NULL;
        delete p;
        p = NULL;
        return dt;
    }
    else return -1;
}

void clear(Node *&top){
    while(top)
        pop(top);
}

Data on_top(Node *top){
    if(top)
        return top -> datum;
    else return -1;
}

bool is_empty(Node *top){
    if(top)
        return false;
    else return true;
}


