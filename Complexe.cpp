#include "Complexe.h"
#include<cmath>
#include <iostream>
using namespace std;

Complexe::Complexe(double a, double b)
{
	this->re = a;
	this->img = b;
}

Complexe::Complexe(const Complexe& C)
{
	this->re = C.re;
	this->img = C.img;
}

Complexe Complexe::operator+(Complexe C)
{
	Complexe* res = new Complexe(0, 0);
	res->re = this->re + C.re;
	res->img = this->img + C.img;
	return *res;
}

Complexe Complexe::operator+(double C)
{

	Complexe* res = new Complexe(0, 0);
	res->re = this->re + C;
	res->img = this->img + 0;
	return *res;
}

Complexe Complexe::operator-(Complexe C)
{
	Complexe* res = new Complexe(0, 0);
	res->re = this->re - C.re;
	res->img = this->img - C.img;
	return *res;
}

Complexe Complexe::operator-(double C)
{
	Complexe* res = new Complexe(0, 0);
	res->re = this->re - C;
	res->img = this->img - 0;
	return *res;
}

Complexe Complexe::operator*(Complexe C)
{
	Complexe* res = new Complexe(0, 0);
	res->re = (this->re * C.re)- (this->img* C.img);
	res->img = (this->re * C.img)+(this->img* C.re);
	return *res;
}

Complexe Complexe::operator*(double C)
{
	Complexe* res = new Complexe(0, 0);
	res->re = this->re * C;
	res->img = this->img * C;
	return *res;
}


Complexe Complexe::operator/(Complexe C)
{
	Complexe* res = new Complexe(0, 0);
	double denominateur = pow(C.re, 2) + pow(C.img, 2);
	if (denominateur != 0) {
		res->re = ((this->re * C.re) + (this->img * C.img) )/ denominateur;
		res->img =( (this->img * C.re) - (this->re * C.img)) / denominateur;
	}
	else {
		cout <<  "Division impossible"  << endl;
	}
	return *res;
}

Complexe Complexe::operator/(double C)
{
	Complexe* res = new Complexe(0, 0);
	if (C != 0) {
		res->re = this->re / C;
		res->img = this->img / C;
	}
	else {
		cout << "Division impossible" << endl;
	}
	return *res;
}

bool Complexe::operator==(Complexe C)
{
	if ((this->re == C.re) && (this->img == C.img)) {
		return true;
	}
	return false;
}

bool Complexe::operator!=(Complexe C)
{
	if ((this->re != C.re) || (this->img != C.img)) {
		return true;
	}
	return false;
}

bool Complexe::operator<=(Complexe C)
{
	double mod1 = 0;
	double mod2 = 0;

	mod1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
	mod2 = sqrt(pow(C.re, 2) + pow(C.img, 2));
	if (mod1 <= mod2) {
		return true;
	}

	return false;
}

bool Complexe::operator>=(Complexe C)
{
	double mod1 = 0;
	double mod2 = 0;

	mod1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
	mod2 = sqrt(pow(C.re, 2) + pow(C.img, 2));
	if (mod1 >= mod2) {
		return true;
	}

	return false;
}

bool Complexe::operator<(Complexe C)
{
	double mod1 = 0;
	double mod2 = 0;

	mod1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
	mod2 = sqrt(pow(C.re, 2) + pow(C.img, 2));
	if (mod1 < mod2) {
		return true;
	}

	return false;
}

bool Complexe::operator>(Complexe C)
{
	double mod1 = 0;
	double mod2 = 0;

	mod1 = sqrt(pow(this->re, 2) + pow(this->img, 2));
	mod2 = sqrt(pow(C.re, 2) + pow(C.img, 2));
	if (mod1 > mod2) {
		return true;
	}

	return false;
}




Complexe::~Complexe()
{	
}


void Complexe::afficher()
{
	if (this->img >= 0) {
		cout << this->re << "+i" << this->img << endl;
	}
	else {
		cout << this->re << "-i" << -this->img << endl;
	}
}

















