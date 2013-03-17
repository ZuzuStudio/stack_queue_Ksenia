#include <iostream>
#include "mod_queue.h"

using namespace std;

int main()
{
    Node *begin = NULL;
    Node *end = NULL;
    int number,variable;

    cout<<"Enter the number of items: ";
    cin>>number;
    cout<<endl<<"Enter the elements: ";

    for(int i=0;i<number;++i){
        cin>>variable;
        enqueue(begin,end,variable);
    }

    cout<<endl<<"On top: "<<on_top(end)<<endl<<endl;

    cout<<"Enter the number of items retrieved ( <="<<number<<')'<<endl;
    cin>>number;

    cout<<endl<<"Dequeue: ";

    for(int i=0;i<number;++i){
        cout<<dequeue(end,begin)<<' ';
    }

    return 0;
}
