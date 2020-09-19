#pragma once
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

enum autoClass
{
	A,
	B,
	C,
	D,
	S
};

enum truckType {
	ClassicTruck,
	Lorry,
	AutoTrack,
};

class Auto
{
public:


	virtual void showInformaiton()
	{
	}

	virtual ~Auto()
	{

	}
};

class WithTrailer :public Auto
{
protected:
	int trailerId;
public:
	WithTrailer()
	{
		this->trailerId = 123333;
	}
	WithTrailer(int trailerId)
	{
		this->trailerId = trailerId;
	}

	void showInformaiton()
	{
		cout << "Trailer ID is " << trailerId << endl;
	}
	~WithTrailer()
	{

	}
};

class WithoutTrailer : public Auto
{
protected:
	int carMileage;
public:
	WithoutTrailer()
	{
		this->carMileage = 77777;
	}
	WithoutTrailer(int carMileage)
	{
		this->carMileage = carMileage;
	}

	void showInformaiton()
	{
		cout << "Car mileage is about " << carMileage << endl;
	}
	~WithoutTrailer()
	{

	}
};

class PassengerCar : public WithoutTrailer {
protected:
	autoClass classOfAuto;
public:
	PassengerCar()
	{
		this->classOfAuto = A;
	}
	PassengerCar(int carMileage, autoClass classOfAuto)
	{
		this->carMileage = carMileage;
		this->classOfAuto = classOfAuto;
	}
	void showInformaiton()
	{
		cout << "Car mileage is about " << carMileage << endl;
		cout << "It`s auto of ";
		if (classOfAuto == 0) cout << "A";
		if (classOfAuto == 1) cout << "B";
		if (classOfAuto == 2) cout << "C";
		if (classOfAuto == 3) cout << "D";
		if (classOfAuto == 4) cout << "S";
		cout << " class" << endl;
	}
	~PassengerCar()
	{

	}
};


