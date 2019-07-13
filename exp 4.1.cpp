#include <iostream>
#include <conio.h>

using namespace std;

// addition function
void addition( int e)
{
	int a,b ;
		cout << " First number : "; cin >> a;
cout << " Second number :"; cin >> b;
	cout << endl;
	cout <<" "<< a << " + " << b << endl;
	cout << endl;
	cout << " The sum is = " << a + b << endl;
}
// subtraction function
void difference(int f)
{
	int a,b ;
	cout << " First number : "; cin >> a;
cout << " Second number :"; cin >> b;
		cout << endl;
		cout <<" "<<a << " - " << b << endl;
		cout << endl;
	cout << " The difference is = " << a - b << endl;
//multiplication function	
}
void multiplication(int g)
{
	int a,b ;
	cout << " First number : "; cin >> a;
cout << " Second number :"; cin >> b;
		cout << endl;
		cout << " "<< a << " * " << b << endl;
		cout << endl;
	cout << " The product is = " << a * b << endl;
}
// divide function
void division (int h)
{
		int a,b ;
			cout << " First number : "; cin >> a;
cout << " Second number :"; cin >> b;
		cout << endl;
		cout <<" "<< a << " / " << b << endl;
		cout<< endl;
	cout << " The QUOTIENT is = " << a / b << endl;
}
// mod function
void mod (int i)
{
	int a,b ;
	cout << " First number : "; cin >> a;
cout << " Second number :"; cin >> b;
			cout << endl;
		cout <<" "<<a << " % " << b << endl;
		cout<< endl;
	cout << " The answer is = " << a / b << endl;
}
// main function
int main()
{

bool test = true;
do
{	
int a,b ;
char x;

cout << " Calculator " << endl;
cout << endl;

cout << " Operations : " << endl;
cout << endl;

cout << " Addition"<< endl; 
cout << " Subtraction" << endl;
cout << " Multiplication" <<endl;
cout << " Division" <<endl;
cout << " Modulus" <<endl; 
cout << endl;

cout << " Press '1' for Addition " << endl;
cout << " Press '2' for Subtraction " << endl;
cout << " Press '3' for Multiplication " << endl;
cout << " Press '4' for Division  " << endl;
cout << " Press '5' for Modulus " << endl;
cout << endl;

// instructions
cout << " Enter the desired operation : ";
cin >> x;
cout << endl;
//Categorization of Operation
switch (x)
{
	
	case '1':
	addition(x);
	break;
	
	case '2':
	difference(x);
	break;
	
	
	case '3':
	multiplication(x);
	break;
	
	case '4':
	division(x);
	break;


	case '5':
	mod (x);
	break;
}

cout << endl; 
cout << endl;
char choice, y, n; //Continuation

cout << " Do you want to Continue? " << endl;
cout << endl;
cout<< " Press Y for Yes " << endl;
cout << endl;
cout << " Press N  for No " << endl;
cout << endl;
cout << endl;

char answer;
cout << " Do you wish to continue? : ";
cin >>  answer ;


switch (answer)
{
	case 'y':
	case 'Y':
	test = true; 
	break;
	
	case 'n':
	case 'N':
	cout << endl;
	cout << " Calculator" << endl;
	test = false;
	break;
	
	
	
}

} while (test);

getch();
return 0;

			
}

