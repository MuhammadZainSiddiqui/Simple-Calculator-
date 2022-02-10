#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	
	cout<<"enter any two number"<<endl;
	cin >>a;
	cin >>b;
	cout<<"enter any operand(+,-<*,/)"<<endl;
	cin>>op;
	if( op=='+' )
	{
		cout<<"the sum of two number is ="<<a+b<<endl;
	}
	else if ( op=='-' )
	{
		cout<<"the difference of two number is ="<<a-b<<endl;
	}
	else if ( op=='*')
	{
		cout<<"the product of two number is ="<<a*b<<endl;
	}
	else if (op=='/')
	{
		cout<<"the division of two number is ="<<a/b<<endl;
	}
	else
	{
		cout<<"Wrong Operand";
	}
	
	return 0;
}
