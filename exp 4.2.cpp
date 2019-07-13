#include <iostream>
#include <conio.h>
using namespace std;

//Bubble Sort Function
void bubble (int d)
{
	//Desired Variable Input
	int a, arr[100];
	cout << "Enter the chosen integers: " <<endl;
	for (a=0; a<d; a++)
	
	{
		cin >> arr[a];
	}

	//Bubble Sort Arithmetic
	int b, c;
	for (b=0; b < d ; b++)
	{
		for (c=0; c<d-b-1; c++)
		{
			if (arr[c] > arr [c+1])
			{
			int temp;
			temp = arr[c];
			arr[c] = arr[c+1];
			arr[c+1]= temp;
			}
		
		}
	}
	
	

	//Displaying Output
	
	cout <<"sorted integers : " << endl;
	int f;
	for (f=0; f < d ; f++)
	{
		cout <<arr[f] << " ";
	}

	cout << endl;
	}


	int main ()
	{

	//Looping Process
	bool next  = true;
	do
	{

	//Array Size Input
	int d;
	cout << "Enter the array size: "; cin >> d; // instruction
	cout<<endl;
	
	//Function Declaration
	bubble (d);
	

	//Continuation Input
	char x;
	cout << " Do you want to continue ? " << endl;
	cout << "Yes or No :   " ; cin >> x;
	cout << endl; 


	//Switch Categorization of Answer, if to proceed or not
	switch (x)
	{
		case 'Y':
		case 'y':
			next = true;
			break;
		case 'N' :
		case 'n' :
		next = false;
		default:
		next = false;
		break;
		
	}
	}while (next);


getch();
return 0;
}
	
	
