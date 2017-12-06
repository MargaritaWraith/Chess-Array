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
	const int m = 5;
	const int n = 5;
	int arr[m][n] = { 0 };

	for (int i = 0; i < 1 + n / 2; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = arr[n - 1 - i][j] = i + 1;
		}
	}

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j < 1+m/2; j++)
		{
			arr[i][j] = arr[n - 1 - i][m-1-j] = i + 1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)	  cout << " " << arr[i][j] << " ";
		cout << endl;
	}

}

