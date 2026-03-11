#include "stringutil.h"
#include <iostream>

using namespace std;

//int* P = new int; // heap영역에 int공간 하나 만들기
//delete P;
//P = nullptr;

//int Size = 10;
//int* N = new int[Size]; //dynamically alloacte array of size size
//
//delete[] N;
//
//
//void* P = malloc(10);
//free(P);
//
//int* Player = new int;
//delete Player; // heap영역 반환 (포인터 변수의 주소가 가지고있던)
//Player = nullptr;
//if (Player)
//{
//
//}
//delete N;

void Fillin(int* Array, int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		Array[i] = i + 1;
	}
}

void PrintArray(int* Array, int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout<< Array[i] << " "; //*(Array +1)
		if (i == (ArraySize - 1))
		{
			cout << "\n";
		}
	}
}

int main()
{
	int SizeArray = 0;
	cout << "1d 배열의 크기를 입력하시오 \n";
	cin >> SizeArray;
	cout << "\n";
	int* DArray = new int[SizeArray];
	Fillin(DArray, SizeArray);
	PrintArray(DArray, SizeArray);

	delete[] DArray;
	DArray = nullptr;
	return 0;
}











