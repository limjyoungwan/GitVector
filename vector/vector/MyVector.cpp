#include "MyVector.h"
#include <stdio.h>
#include <memory.h>

MyVector::MyVector()
{
	capacity = 100;
	Size = 0;
	Data = new int[capacity];
}


MyVector::~MyVector()
{
	delete[] Data;
}


void MyVector::PushBack(int i)
{
	if (capacity == Size)
	{
		int * T = new int[capacity * 2];

		/*
		for (int i = 0; i < Size; i++)
		{
			T[i] = Data[i];
		}
		*/

		memcpy(T, Data, Size * sizeof(int));
		delete[] Data;
		
		Data = T;
		capacity = capacity * 2;
		Data[Size++] = i;
	}
	else
	{
		Data[Size++] = i;
	}
}

int MyVector::operator[](size_t Pos)
{
	return Data[Pos];
}

int MyVector::GetSize()
{
	return Size;
}
