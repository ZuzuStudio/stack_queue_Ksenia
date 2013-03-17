#include <iostream>
#include "mod_stack.h"

using namespace std;

int main()
{
    Node *stack = NULL;
    int number,variable;

    cout<<"Enter the number of items: ";
    cin>>number;
    cout<<endl<<"Enter the elements: ";

    for(int i=0;i<number;++i){
        cin>>variable;
        push(stack,variable);
    }

    cout<<endl<<"On top: "<<on_top(stack)<<endl<<endl;

    cout<<"Enter the number of items retrieved ( <="<<number<<')'<<endl;
    cin>>number;

    for(int i=0;i<number;++i){
        cout<<pop(stack)<<' ';
    }

    return 0;
}

