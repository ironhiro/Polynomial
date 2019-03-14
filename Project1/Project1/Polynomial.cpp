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

void Polynomial::add(Polynomial p)
{
	int max_degree;
	if (getDegree() < p.getDegree())
		max_degree = p.getDegree();
	else
		max_degree = getDegree();
	ArrList<float> t;
	for (int i = 0; i <= max_degree; i++)
	{
		if (p.getDegree() > getDegree())
			t.insertLast(p.getCoef(i));
		else
			t.insertLast(p.getCoef(i) + getCoef(i));	
	}
	maxDegree = max_degree;
	coef = t;
}
