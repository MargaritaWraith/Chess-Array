// Chess Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "HeaderArray.h"
using namespace std;

//void PrintArr()
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)	  cout << " " << arr[i][j] << " ";
//		cout << endl;
//	}
//}

void ChessArray()
{
	const int m = 19;
	const int n = 13;
	int arr[m][n] = { 0 };

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j += 2)
		{
			int k = i % 2;
			arr[i][j + k] = 1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	  cout << " " << arr[i][j] << " ";
		cout << endl;
	}
}

void PerimetrArray()
{
	const int m = 8;
	const int n = m;
	int arr[m][n] = { 0 };

	for (int i = 0; i < (m % 2) + m / 2; i++)
	{
		for (int j = 0; j < n / 2 - i; j++)
		{
			arr[i][j + i] = i + 1;
			arr[m - 1 - i][n - j - i - 1] = i + 1;

			arr[i][n - j - i - 1] = i + 1;
			arr[m - 1 - i][i + j] = i + 1;


		}
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	  cout << " " << arr[i][j] << " ";
		cout << endl;
	}

}

