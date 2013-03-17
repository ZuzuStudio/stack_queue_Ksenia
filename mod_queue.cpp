#include "mod_queue.h"
#include <iostream>

void enqueue(Node *&begin,Node *&end, Data dt){
    Node *p = NULL;
    p = new Node;
    p -> datum = dt;
    if((!begin)&&(!end)){
        begin = end = p;
    }
    else{
    begin -> next = p;
    begin = p;
    p = NULL;
    }
}

Data dequeue(Node *&end,Node *&begin){
    Node *p = end;
    if(p){
        end = end -> next;
        Data dt = p -> datum;
        p -> datum = 0;
        p -> next = NULL;
        delete p;
        p = NULL;
        return dt;
    }
    else{
        end=NULL;
        begin=NULL;
        return -1;
    }
}

void clear(Node *&end,Node *&begin){
    while(end)
        dequeue(end,begin);
}

Data on_top(Node *end){
    if(end) return end -> datum;
    else return -1;
}

bool is_empty(Node *end){
    if(end)
        return false;
    else return true;
}
