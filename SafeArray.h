#pragma once
#include<iostream>
using namespace std;


class SafeArray
{
private:
	int size;
	int* arrayPointer[];

public:
	SafeArray();
	SafeArray(int S);
	int at(int index);
	~SafeArray();
};
