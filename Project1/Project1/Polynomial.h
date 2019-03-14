#pragma once
#include "ArrList.cpp"
class Polynomial
{
private:
	int maxDegree;
	ArrList<float> coef;
public:
	Polynomial(int maxDegree,ArrList<float> coef);
	int getDegree();
	float getCoef(int k);
	void add(Polynomial p);
};

