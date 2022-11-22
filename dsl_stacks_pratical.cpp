#include <iostream>
using namespace std;

 
int top = -1;
char stack[100];
 
void push(char);
void pop();
void find_top();
 
int main()
{
	int i;
	char a[100];
	cout<<"enter expression : ";
	cin>>a;
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
}
 

void push(char a)
{
	stack[top] = a;
	top++;
}
 

void pop()
{
	if (top == -1)
	{
		cout<<"expression is invalid";
		exit(0);
    }	
	else
	{		
		top--;
	}
}
 

void find_top()
{
	if (top == -1)
		cout<<"expression is valid";
	else
		cout<<"expression is invalid";
}
