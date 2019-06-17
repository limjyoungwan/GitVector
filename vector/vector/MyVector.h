#pragma once
class MyVector
{
public:
	MyVector();
	~MyVector();

	void PushBack(int i);

	int operator[](size_t Pos);
	int GetSize();

private:
	unsigned int capacity;
	unsigned int Size;
	int * Data;
};

