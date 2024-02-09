#include<iostream>
using namespace std;
/*
int main()
{
	int a,b,ADD;
	
	cout<<"Enter two numbers :";
	cin>>a>>b;
	ADD=b+a;
	cout<<"Addition is: "<<ADD;
	
	return 0;
}
*/


/*
class mobiles
{
	string MobName;
	int IMEI;
	float Value;

	public:
		
			void InputData()
			{
				cout<<"\n Enter mobile name: ";
				cin>>MobName;
				cout<<"\n Enter IMEI number: ";
				cin>>IMEI;
				cout<<"\n Enter value of mobile ";
				cin>>Value;
			}
			void  DisplayData()
			{
				cout<<"\n NAME OF MOBILE IS "<<MobName;
				cout<<"\n IMEI NUMBER  IS "<<IMEI;
				cout<<"\n VALUE OF MOBILE IS "<<Value;
			}
};

int main()
{
	mobiles MOB;
	MOB.InputData();
	MOB.DisplayData();
	return 0;
}
*/
/*
//					C++ Programm to get 5 inputs and display addition of that numbers.
int main()
{
	int i,num,sum=0;
	
	cout<<"\n\t Enter 5 numbers: ";
	for(i=1;i<=5;i++)
	{
		cin>>num;
		sum=sum+num;
	}
	cout<<"\n\t\t ADDITION IS : "<<sum;
	return 0;
}
*/
//						OOP in C++ to enter emp. info. like id, name, salary, and display it.....
/*
class EMPLOYEE
{
	int EMP_ID;
	char NAME[15];
	float SALARY;
	
	public:
		void get();
		void disp();
};

void EMPLOYEE::get()
{
	cout<<"ENTER EMPLOYEE ID : ";
	cin>>EMP_ID;
	cout<<"ENTER EMPLOYEE NAME : ";
	cin>>NAME;
	cout<<"ENTER EMPLOYEE SALARY : ";
	cin>>SALARY;
}
void EMPLOYEE::disp()
{
	cout<<"\n\t\t EMPLOYEE ID IS : "<<EMP_ID;
	cout<<"\n\t\t EMPLOYEE NAME IS : "<<NAME;
	cout<<"\n\t\t EMPLOYEE SALARY IS : "<<SALARY;
}

int main()
{
	EMPLOYEE E;
	E.get();
	E.disp();
	return 0; 
}
*/
/*
class CARINFO
{
	int EngineNo;
	string CarName;
	float Price;
	
	public:
		CARINFO(int E,string C,float P)
		{
		EngineNo=E;
		CarName=C;
		Price=P;
		}
		
		CARINFO()
		{
			cout<<"\n\t ENTER ENGIN NUMBER : ";
			cin>>EngineNo;
			cout<<"\n\t ENTER CAR NAME : ";
			cin>>CarName;
			cout<<"\n\t ENTER PRICE OF CAR : ";
			cin>>Price;
		}
		void displaydetails()
		{
			cout<<"\n\t\t ENGIN NUMBER : "<<EngineNo;
			cout<<"\n\t\t CAR NAME : "<<CarName;
			cout<<"\n\t\t PRICE OF CAR : "<<Price;
		}
};
int main()
{
	CARINFO C(102,"BENZ",452.54652);
	
	C.displaydetails();
	return 0;
}
*/
