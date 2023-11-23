#include <iostream>
using namespace std;

void TraverseString(string &infixExp, int N)
{
    cout<<"The infix Expression you entered is : "<<endl;
    for (int i =0; i<N; i++)
    {
        cout<<infixExp[i]<<" ";
    }
}

void intopostfixExp(string &infixExp, int N)
{
    for(int i=0; i<N; i++)
    {

    }
}

int main()
{
    string infix_expression;
    cout<<"Convert Infix to Postfix Expression"<<endl;
    cout<<"Enter the Infix Expression >> ";
    cin>>infix_expression;

    int N = infix_expression.length();

    TraverseString(infix_expression, N);
    intopostfixExp(infix_expression, N);
}