#include "ArrList.h"

template<typename T>
void ArrList<T>::resize(int newSize)
{
	current_maxSize = newSize;
	T* temp = new T[newSize];
	for (int i = 0; i < size; i++)
	{
		temp[i] = a[i];
	}
	delete[] a;
	a = temp;
}

template<typename T>
ArrList<T>::ArrList()
{
	a = new T[INIT_SIZE];
	size = 0;
	current_maxSize = INIT_SIZE;
}

template<typename T>
T ArrList<T>::peek(int k)
{
	if (size == 0)
		throw "값을 읽을 수 없습니다.";
	return a[k];
}

template<typename T>
void ArrList<T>::setValue(int k, T newValue)
{
	a[k] = newValue;
}

template<typename T>
void ArrList<T>::insertLast(T newItem)
{
	if (size == current_maxSize)
		resize(2 * current_maxSize);
	a[size++] = newItem;
}

template<typename T>
void ArrList<T>::insert(T newItem, int k)
{
	if (size == current_maxSize)
		resize(2 * current_maxSize);
	for (int i = size - 1; i >= k; i--) a[i + 1] = a[i];
	a[k] = newItem;
	size++;
}

template<typename T>
T ArrList<T>::delItem(int k)
{
	if (isEmpty())
		throw "제거할 원소가 없음.";
	T item = a[k];
	for (int i = k; i < size; i++) a[i] = a[i + 1];
	size--;
	if (size > 0 && size == current_maxSize / 4)
		resize(current_maxSize / 2);
	return item;
}

template<typename T>
bool ArrList<T>::isEmpty()
{
	return size==0;
}

template<typename T>
int ArrList<T>::getCount()
{
	return size;
}





