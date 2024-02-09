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

//					C++ Programm to get 5 inputs and display addition of that numbers.
/*
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
/*
int main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
class item
{
	int num;
	float cost;
	public:
		void get();
		void put();
};

		void item::get()
		{
			cout<<"\n\t ENTER PRODUCT ID : ";
			cin>>num;
			cout<<"\n\t ENTER COST : ";
			cin>>cost;
		}
		void item::put()
		{
			cout<<"\n PRODUCT ID : "<<num;
			cout<<"\n COST   : "<<cost;
		}
		
int main()
{
	item I;
	I.get();
	I.put();
	return 0;
}
*/
/*
struct STUDENT
{
	string name;
	int Rno;
}S;

int main()
{
cout<<"\n\t\t ENTER YOUR NAME : ";
cin>>S.name;
cout<<"\n\t\t ENTER YOUR ROLL NUMBER : ";
cin>>S.Rno;


cout<<"\n\t\t YOUR NAME : "<<S.name;
cout<<"\n\t\t YOUR ROLL NUMBER : "<<S.Rno;

return 0;
}
*/
/*
int main()
{
	int n1,n2;
	cout<<"\n\t\t enter two numbers:";
	cin>>n1>>n2;
	
	cout<<"\n\t A. ADDITION";
	cout<<"\n\t B. SUBSTRACTION";
	cout<<"\n\t C. MULTIPLICATION";
	cout<<"\n\t D. DIVISION";
	
	char CH;
	cout<<"\n\t\t ENTER YOUR CHOICE : ";
	cin>>CH;
	
	switch(CH)
	{
	case 'A':cout<<"\n\t\t ADDITION IS : "<<n1+n2;
			break;
	case 'B':cout<<"\n\t\t SUBDTRACTION IS : "<<n1-n2;
			break;
	case 'C':cout<<"\n\t\t MULTIPLICATION IS : "<<n1*n2;	
			break;
	case 'D':cout<<"\n\t\t DIVISION IS : "<<n1/n2;
			break;
	default :cout<<"\n\t\t YOU ENTERED A WRONG CHOICE..!";
			break;
	}
	return 0;
}
*/
/*
int main()
{
	struct STUDENT
	{
		int RNo;
		string NAME;
	}S;

	cout<<"ENTER YOUR NAME : ";
	cin>>S.NAME;
	cout<<"ENTER YOUR ROLL  NUMBER : ";
	cin>>S.RNo;

	cout<<"\n\t\t ROLL NUMBER : "<<S.RNo;
	cout<<"\n\t\t YOUR NAME : "<<S.NAME;

	return 0;
}
*/
/*
int main(){
	int I;
	long int II;
	char CH;
	float F;
	double FF;

	cout<<"\n\t\t ENTER SOME RANDOM VALUES : ";
	cin>>I>>II>>CH>>F>>FF;

	cout<<"\n\t\t YOUR VALUES : ";
	cout<<I<<II<<CH<<F<<FF;

	return 1;
	
}
*/
/*
int main(){
	int arr[10],i,n,elem,pos;
	
	cout<<"\n\t ENTER VALUE OF N : ";
	cin>>n;
	cout<<"\n\t\t ENTER  "<<n<<"  ELEMENTS OF ARRAY : ";
	
	
	for(i=0;i<=n;i++){
		cin>>arr[i];
	}
	cout<<"\t\t ARRAY IS ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n\t ENTER ELEMENT TO INSERTION ARRAY : ";
	cin>>elem;
	cout<<"\n\tENTER POSITION OF ELEMENT : ";
	cin>>pos;
	for(i=n;i<pos;i++){
		arr[i]=arr[i-1];
	}
	arr[i]=elem;
	n++;
	cout<<"\n\t\t NEW ARRAY IS : ";
	for(i=0;i<n;i++){
		cout<<"  "<<arr[i];
	}
	return 0;
}
*/
/*
union emp
{
	int ID;
	char name[10];
	float sal;
};

int main()
{
	emp E;
	cout<<"\n\t\t ENTER EMPLOYEE ID : ";
	cin>>E.ID;
	cout<<"\n\t\t EPLOYEE ID IS : "<<E.ID;
	
	cout<<"\n\t\t ENTER EMPLOYEE NAME : ";
	cin>>E.name;
	cout<<"\n\t\t EMPLOYEE NAME IS : "<<E.name;

	cout<<"\n\t\t ENTER EMPLOYEE SALARY : ";
	cin>>E.sal;
	cout<<"\n\t\t EMPLOYEE SALARY IS : "<<E.sal;
	return 0;
}
*/
/*
enum week{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main()
{
	week today;
	today=SUNDAY;
	cout<<"\n\t\t DAY : "<<today+1;
	return 0;
}
*/
/*
class PRODUCT{
	int id,qty;
	string name;
	float rate,cost;
	public:
		void get();
		void cal();
		void dis();
};

void PRODUCT::get(){
	cout<<"\n\t\t ENTER PRODUCT ID : ";
	cin>>id;
	cout<<"\n\t\t ENTER PRODUCT NAME : ";
	cin>>name;
	cout<<"\n\t\t ENTER PRODUCT RATE : ";
	cin>>rate;
	cout<<"\n\t\t ENTER PRODUCT QUANTITY : ";
	cin>>qty;
	cout<<"\n\t-------------------------------------------------------";
}

void PRODUCT::cal(){
	cost=qty*rate;
}

void PRODUCT::dis(){
	cout<<"\n\t\t PRODUCT ID 	   : "<<id;
	cout<<"\n\t\t PRODUCT NAME 	   : "<<name;
	cout<<"\n\t\t PRODUCT RATE 	   : "<<rate;
	cout<<"\n\t\t PRODUCT QUANTITY : "<<qty;
	cout<<"\n\t\t TOTAL COST 	   : "<<cost;
	cout<<"\n\t-------------------------------------------------------";
}

int main(){
	PRODUCT P[5];
	int a,i;
	cout<<"\n\t\t ENTER NUMBER OF PRODUCT'S : ";
	cin>>a;
	for ( i=0; i <a; i++)
	{
		P[i].get();
	}
	cout<<"\n\t---------------PRODUCT_DETAIL'S--------------";
	for ( i=0; i <a; i++)
	{
		P[i].cal();
		P[i].dis();
	}
	return 0;
}
*/
/*
void ADD();
int main(){
	ADD();
	return 0;
}

void ADD(){
	int a,b;
	cout<<"\n\t\t ENTER TWO NUMBER'S TO BE ADD : ";
	cin>>a>>b;
	cout<<"\n\t\t ADDITION IS : "<<a+b;
}
*/
/*
int add(int,int);
int main(){
	int n1,n2,SUM;
	cout<<"\n\t\t ENTER TWO NUMBER'S : ";
	cin>>n1>>n2;
	SUM=add(n1,n2);
	cout<<"\n\t\t ADDITION IS : "<<SUM;
	return 0;
}
int add(int a,int b){
	int ans=a+b;
	return ans;
}
*/
/*
float DIV(int,int);
int main(){
	int a,b;
	float c;
	cout<<"\n\t\t ENTER TWO NUMBER'S : ";
	cin>>a>>b;
	c=DIV(a,b);
	cout<<"\n\t\t DIVISION IS : "<<c;
	return 0;
}
float DIV(int O,int P){
	float ANS=O/P;
	return ANS;
}
*/
/*
int main(){
	int i=5;
	cout<<"\n\t\t "<<++i;
	return 0;
}
*/
/*
int big(int,int,int,int);
int main(){
	int m,n,o,p;

	cout<<"\n\t\t ENTER FOUR NUMBER'S : ";
	cin>>m>>n>>o>>p;

	int b=big(m,n,o,p);
	cout<<"\n\t\t BIGGEST NUMBER IS : "<<b;
	return 0;
}

int big(int a,int b, int c,int d){
	int BIG;
	if (a>b)
	{
		if (a>c)
			{
				if(a>d)
				BIG=a;
				else{
				BIG=d;
				}
			}
			else{
				if(c>d)
				BIG=c;
				else{
				BIG=d;
				}
			}
			}
			else if(b>c)
			{
				if(b>d)
				BIG=b;
				else{
				BIG=d;
				}
			
	}
	return BIG;
}
*/

/*
int big(int,int,int,int);

int main(){
    int a,b,c,d;
    cout<<"enter four number";

    cin >>a>>b>>c>>d;
    int x=big(a,b,c,d);
    cout<<"the bigest number is "<<x;

} 
int big (int a,int b,int c,int d){
    if((a>b) && (a>c )&& (a>d))
    {
        return a;

    }
    else{
        if((b>c) && (b>d)){
            return b;

        }else{
            if(c>d){
                return c;

            }else{
                return d;
            }
        }
    }
}
*/
