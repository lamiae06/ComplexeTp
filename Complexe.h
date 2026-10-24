#pragma once
class Complexe
{
	double re;
	double img;
public:
	Complexe(double, double);
	Complexe(const Complexe& C);
	Complexe operator+(Complexe C);
	Complexe operator+(double C);
	Complexe operator-(Complexe C);
	Complexe operator-(double C);
	Complexe operator*(Complexe C);
	Complexe operator*(double C);
	Complexe operator/(Complexe C);
	Complexe operator/(double C);
	bool operator==(Complexe C);
	bool operator!=(Complexe C);
	bool operator<=(Complexe C);
	bool operator>=(Complexe C);
	bool operator<(Complexe C);
	bool operator>(Complexe C);
	~Complexe();
	void afficher() ;


};

