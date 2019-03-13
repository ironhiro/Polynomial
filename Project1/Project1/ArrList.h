#pragma once
const int INIT_SIZE = 1;

template <typename T>
class ArrList
{
private:
	T* a;
	int size;
	int current_maxSize;
	void resize(int newSize);
	
public:
	ArrList();
	T peek(int k);
	void insertLast(T newItem);
	void insert(T newItem, int k);
	T delItem(int k);
	bool isEmpty();
	int getCount();
};



