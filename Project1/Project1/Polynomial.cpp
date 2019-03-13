#include "Polynomial.h"

Polynomial::Polynomial(int maxDegree,ArrList<float> coef)
{
	this->maxDegree = maxDegree-1;
	this->coef = coef;
}

int Polynomial::getDegree()
{
	return maxDegree;
}

float Polynomial::getCoef(int k)
{
	return coef.peek(k);
}
