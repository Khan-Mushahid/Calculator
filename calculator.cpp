//calculator switch
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enrer first value"<<endl;
	cin>>a;
	int b;
	cout<<"Enter second value"<<endl;
	cin>>b;
	char op;
	cout<<"Enter the operator"<<endl;
	cin>>op;
     switch(op)
     {
     	case '+':
      cout<<"Addition  of two num is ="<<a<<"+"<<b<<"="<<a+b;
	 break; 
	 	case '-':
      cout<<"subtraction  of two num is ="<<a<<"-"<<b<<"="<<a-b;
	 break; 
	 	case '*':
      cout<<"multiplication   of two num is ="<<a<<"*"<<b<<"="<<a*b;
	 break; 
    case '/':
    cout<<"division of two num is ="<<a<<"/"<<b<<"="<<a/b;
	 break; 
     	case '%':
      cout<<"mod  of two num is ="<<a<<"%"<<b<<"="<<a%b;
	 break; 	
     	
	 
	default:
		cout<<"Logical error occur you enter wrong operator"<<endl;
}
	
	
}
