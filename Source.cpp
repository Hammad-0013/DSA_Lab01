#include<iostream>
using namespace std;
int main()
{
	int size = 5;
	int arr[5] = { 2, 8, 4, 5, 1 };

	cout << "Array of 5 elements is: ";
	for (int i = 0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int tem = arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}
		}
	}
	cout << "Ascending Order Array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
