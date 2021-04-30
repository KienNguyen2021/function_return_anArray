#include<iostream>
#include <string>

using namespace std;

// Pass an array as argument pointer

void printArray( int* array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] <<"   "<< *(array +i) << endl;
	}

}

// return of this function is an Array

int* reverseOrder(int * array, int arraySize)
{
	for (int i = 0, j = arraySize - 1; i < j; i++, j--)    // i is the first element of array -  j is the last one /  -1 because index from 0.....
	{
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
	return array;
}

int main()
{
	int myArray[] = { 5, 2, 1, 3, 4 };

	printArray(myArray, 5 );  // pass 2 arguments for function printArray

	cout << endl;      // to make a seperation between the origina and the reversse
	cout << endl; 
	
	reverseOrder(myArray, 5);

	printArray(myArray, 5);


	return 0;


}