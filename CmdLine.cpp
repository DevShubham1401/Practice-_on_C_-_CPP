//#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/*
int main(int argc, char* argv[])
{
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	
	printf("Addition is:%d",a+b);
	
	return 0;
}
*/


int main(int argc, char* argv[])
{
    int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	int c=atoi(argv[3]);

    cout<<"\n\t ENTER VALUES OF A AND B : ";
    cin>>a>>b;

    cout<<"\n\t A. ADDITION";
    cout<<"\n\t B. SUBSTRACTION";
    cout<<"\n\t C. DIVISION";
    cout<<"\n\t D. MULTIPLICATION";

    cout<<"\n\t\t ENTER YOUR CHOICE : ";
    cin>>c;

    switch (c)
    {
    case 1:cout<<"n\t\t ADDITION IS : "<<a+b;
        break;
    case 2:cout<<"\n\t\t SUBSTRACTION IS : "<<a-b;
        break;
    case 3:cout<<"\n\t\t DIVISION IS : "<<a/b;
        break;
    case 4:cout<<"\n\t\t MULTIPLICATION IS : "<<a*b;
        break;
    default:cout<<"\n\t\t YOU ENTERED A WRONG CHOICE !";
        break;
    } 
    cout<<"\n\t\t YOU HAVE SUCCESSFULLY EXECUTED SWITCH CASE AND CMD LINE ARGUMENTS";
    return 0;
}

