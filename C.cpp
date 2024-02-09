#include <stdio.h>

/*
//Program to find largest number.
int main()
{
	int a,b;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is smaller than %d",a,b);
	}
	
	return 0;	
}
*/


/*
//Program to Finding greater number.
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n\t\t %d is gtreater",a);
		}
		else
		{
			printf("\n\t\tt %d is greater",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n\t\t %d is greater",b);
		}
		else
		{
			printf("\n\t\t %d is greater",c);
		}
	}
	return 0;
}
*/

/*
//Program to on mathemetical operations
int main()
{
	int a,b;
	
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	
	printf("\n\t\t Addition of %d and %d is:%d",a,b,a+b);
	printf("\n\t\t Substraction of %d and %d is:%d",a,b,a-b);
	printf("\n\t\t Multiplication of %d and %d is:%d",a,b,a*b);
	printf("\n\t\t Division of %d and %d is:%d",a,b,a/b);
	
	return 0;
}
*/
/*
//Program of Switch case.
int main()
{
	int n1,n2,opt;
	

	printf("Enter Two Numbers:");
	scanf("%d%d",&n1,&n2);
	
	printf("\n\t 1 .ADDITION");
	printf("\n\t 2 .SUBSTRACTION");
	printf("\n\t 3 .MULTIPLICATION");
	printf("\n\t 4 .DIVISION");
	printf("\n\t\t-----------------------------------");
	
	printf("\n\t\t Enter your choice from 1 to 4:");
	scanf(" %d",&opt);
	

	switch(opt)
	{
		case 1:printf("\n\t\t ADDITION :%d",n1+n2);
			break;
		case 2:printf("\n\t\t SUBSTRACTION :%d",n1-n2);
			break;
		case 3:printf("\n\t\t MULTIPLICATION :%d",n1*n2);
			break;
		case 4:printf("\n\t\t DIVISION :%d",n1/n2);
			break;
		default:printf("WRONG CHOICE");
	}
	
	printf("\n\t\t YOU HAVE SUCCESSFULLY EXECUTED SWITCH CASE");
	
	return 0;
}
*/
/*
//Program using ASCII Code
int main()
{
	char ch;
	printf("\n\t\t Enter your character: ",ch);
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n\t\t Your character is CAPITAL");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n\t\t Your character is SMALL");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n\t\t You entered a NUMBER");
	}
	else
	{
		printf("\n\t\t You entered a SPECIAL CHARACTER");
	}
	return 0;
}
*/
/*
//program on pointers.
int main()
{
	int a=5,*p;
	
	p=&a;
	
	printf("\n\t Value of a is: %d",a);
	printf("\n\t Value of *p is: %d",*p);
	
	
	printf("\n\t\t value of p is: %d",p);
	printf("\n\t\t value of p is: %X",p);

	return 0;
}
*/
/*
//addition of matrix
int main()
{
	int m1[4][3],m2[4][3],m3[4][3];
	int i,j;
	
	printf("\n\t\t Enter first matrix: \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\n\t\t Enter value for second matrix: \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}

	printf("\n\t\t Addition of matrix: \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",&m3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
*/

int main(){
	int I;
	long int II;
	char CH;
	float F;
	double FF;

	printf("\n\t\t ENTER SOME RANDOM VALUES : ");
	scanf("%d%d%c%f%f",&I,&II,&CH,&F,&FF);

	printf("\n\t\t YOUR VALUES : %d%d%c%f%f",I,II,CH,F,FF);
//	printf("%d%ld%c%lf%lf","\n"I,"\n"II,"\n"CH,"\n"F,"\n"FF);

	return 0;
}


// C program to demonstrate the working of long keyword
/*
int main()
{

	long longType;
	int integerType;
	long int longIntegerType;
	long long int longLongIntegerType;
	float floatType;
	double doubleType;
	long double longDoubleType;

	// Calculate and Print the size of all variables
	printf("Size of longType is: %ld\n",
		sizeof(longType));
	printf("Size of integerType is: %ld\n",
		sizeof(integerType));
	printf("Size of longIntegerType is: %ld\n",
		sizeof(longIntegerType));
	printf("Size of longLongIntegerType is: %ld\n",
		sizeof(longLongIntegerType));
	printf("Size of floatType is: %ld\n",
		sizeof(floatType));
	printf("Size of doubleType is: %ld\n",
		sizeof(doubleType));
	printf("Size of longDoubleType is: %ld\n",
		sizeof(longDoubleType));
	return 0;
}
*/
