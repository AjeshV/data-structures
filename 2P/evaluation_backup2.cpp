/* CS515 Assignment 2
File: evaluation.cpp
Name: Ajesh Vijay Vijayaragavan
Section: 01
Date: 02/22/2017
Collaboration Declaration: Assistance received from TA, PAC, online resources.
*/

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <string.h>
#include <cctype>
#include <istream>

using namespace std;

string infixToPostfix( string exp );
bool operandcheck( char c );
bool operatorcheck( char c );
int prioritycheck( string c );

stack<int> Stack;
string result = " ";
int calculatePostfix(string expression);

int main( int argc, char **argv )
{
		string userinput;
/*		cout << "Expression: " << flush;
		cin >> ws;
		int c = cin.peek();
                        if (isdigit(c))
                        {
                                int n;
                                cin >> n;
                        cout << n;
                        }
*/
		
		
		string holder = "";		
		while( ( userinput.empty() || userinput != "exit" ) && !cin.eof() )
		{
			cout << "Expression: " << flush;
			cin >> ws;
			getline( cin, userinput );
			int a = atoi(userinput.c_str());
			cout << a;
/*			
			if( userinput == "exit" )
			{
				//cout << endl;
				return 0;
			}
			//else if( userinput == "\n")
			//{

			//}
			int c = userinput.peek();
			if (isdigit(c))
			{
				int n;
				cin >> n;
			cout << n;
			}
			stringstream stream(userinput);
			int count;
			stream >> count;

			string ans = infixToPostfix(userinput);
			int iii = calculatePostfix( ans );
			cout << "Answer: " << iii << endl;
			*/
		}
		return 0;
}
/*
string infixToPostfix( string expp )
{
	stack <string> S;
	for( int i = 0; i < expp.length(); i++ )
	{
		if( expp[i] >= '0' && expp[i] <= '9' )
		{
			cout << expp.length() << expp[i] << endl;

			int j = i;
			while( j < expp.length() && ( expp[j] >= '0' && expp[j] <= '9' ) )
			{
				result += string(1,expp[j]);
				j++;
			}

			result += " ";
			i = j-1;			
		}
		else if( operatorcheck( expp[i]) )
		{
		while( !S.empty() && ( prioritycheck( S.top() ) >= prioritycheck( string(1,expp[i])) ) &&  ( S.top() != "("  || S.top() != "{"  || S.top() != "[" ) )
			{
				if( prioritycheck(string(1,expp[i])) ==  prioritycheck(S.top()) )
				{
				 break;
				}
				result += S.top() + " ";
				S.pop();
			}
			Stack.push( expp[i] );
			S.push( string(1,expp[i])); 
		}
		else if( string(1,expp[i]) == "(" || string(1,expp[i]) == "{" || string(1,expp[i]) == "[" )
		{
			S.push( string( 1,expp[i]) );
		}
		else if( string(1,expp[i]) == ")" || string(1,expp[i]) == "}" || string(1,expp[i]) == "]" )
		{
			while( !S.empty() &&  ( S.top() != "(" && S.top() != "[" && S.top() != "{" ) )
			{
				result += S.top() + " ";
				S.pop();
			}
			S.pop();
		}
	}
	while( !S.empty() )
	{
		result += S.top() + " ";
		S.pop();
	}
	return result;
}
int calculatePostfix( string expression )
{
	stack<int> Stack;
	for( int i = 0; i < expression.length(); i++ )
	{
		if( operatorcheck( expression[i] ) )
		{
			int second = Stack.top();
			Stack.pop();
			int first = Stack.top();
			Stack.pop();
			int resultt;
			if( expression[i] == '+' )
			{
				resultt = first + second;
			}
			else if( expression[i] == '-' )
			{
				resultt = first - second;
			}
			else if( expression[i] == '*' )
			{
				resultt = first * second;
			}
			else
			{
				resultt = first / second;
			}
			Stack.push(resultt);
		}
		else if( expression[i] >= '0' && expression[i] <= '9' )
		{
			int t = 0;
			int q = i;
			while( q < expression.length() && ( expression[q] >= '0' && expression[q] <= '9' ) )			
			{
													
			  t = ( t * 10 ) + (expression[q] - '0' );
				q++;
			}
			i = q;
			Stack.push( t );
		}
	}
	return Stack.top();
}

bool operandcheck( char c )
{
	if( c >= '0' && c <= '9' )
	{
		return true;
	}
	if( c >= 'a' && c <= 'z')
	{
		return true;
	}
	if( c >= 'A' && c <= 'Z')
	{
		return true;
	}
	return false;
}

bool operatorcheck( char c )
{
	if( c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
	{
		return true;
	}
	return false;
}
					
int prioritycheck( string c )
{

	int order = 0;
	if( c == "+" || c == "-" )
	{
		order = 1;
	}
	if( c == "*" || c == "/" )							
	{
		order =  2;
	}
	return order;	
}*/
