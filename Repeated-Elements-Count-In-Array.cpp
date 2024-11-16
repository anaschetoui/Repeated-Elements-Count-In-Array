#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message;
		cin >> Num;
	} while (Num < 0);

	return Num;
}

void FillArrays(int arr[100], int &arrlength)
{
	cout << "Enter array elements: \n";
	int counter = 1;
	for (int i = 0; i < arrlength; i++)
	{
		
		cout << "Element [" << counter  << "] : ";
		cin >> arr[i];
		counter++;

	}
	
}

int CounterCheckNumber(int arr[100], int arrlength, short CheckNum)
{
	int counter = 0;
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] == CheckNum)
		{
			counter++;
		}
	}
	return counter;
}

void PrintArrays(int arr[100],int arrlength)
{
	for(int i=0;i< arrlength;i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100];
	int arrlength = ReadPositiveNumber("Enter how many elements: ");
	
	FillArrays(arr, arrlength);
	PrintArrays( arr, arrlength);

	cout << endl;
	int CheckNumber = ReadPositiveNumber("Enter the Number you want to check: ");
	cout << CheckNumber << " is repeated " << CounterCheckNumber(arr, arrlength,CheckNumber) << " time(s)\n";

	return 0;
}