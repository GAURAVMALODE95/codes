#include <iostream>
using namespace std;
typedef struct stack
{
    int elements[10];
    int top;
} st;

void create_emptystack(st *s)
{
    s->top = -1;
}
int count = 0;

int isfull(st *s)
{
    if (s->top == 10 - 1)
        return 1;

    else
        return 0;
}

int ismepty(st *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(st *s, int newitem)
{
    if (isfull(s))
    {
        cout << "stack is full";
    }
    else
    {
        s->top++;
        s->elements[s->top] = newitem;
    }
    count++;
}
void pop(st *s)
{
    if (ismepty(s))
    {
        cout << "stack empty";
    }
    else
    {
        cout << "item popped" << s->elements[s->top] << endl;
        s->top--;
    }
    count--;
}
void print_stack(st *s)
{
    cout << "stack : " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << s->elements[i] << endl;
    }
}
int main()
{
    st *s;
    s = (st *)malloc(sizeof(st));
    create_emptystack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    pop(s);
    print_stack(s);

    
    return 0;
}
