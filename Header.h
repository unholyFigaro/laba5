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

	virtual void anything() {

	}
	Auto() {
		carName = "abc";
	}
	Auto(string carName) {
		this->carName = carName;
	}
	virtual ~Auto()
	{

	}
protected:
	string carName;
};

class WithTrailer :public Auto
{
protected:
	int trailerId;
public:
	WithTrailer() : Auto()
	{
		this->trailerId = 123333;
	}
	WithTrailer(int trailerId, string carName) :Auto(carName)
	{
		this->trailerId = trailerId;
	}

	void showInformaiton()
	{
		cout << "Trailer ID is " << trailerId << endl;
		cout << "CarName is " << carName << endl;
	}
	void anything() {
		if (trailerId % 2 == 0) {
			cout << "This trailer is full" << endl;
			return;
		}
		cout << "This trailer isn't full" << endl;
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
	WithoutTrailer() : Auto()
	{
		this->carMileage = 77777;
	}
	WithoutTrailer(int carMileage, string carName): Auto(carName)
	{
		this->carMileage = carMileage;
	}

	void showInformaiton()
	{
		cout << "Car mileage is about " << carMileage << endl;
		cout << "CarName is " << carName << endl;
	}

	void anything() {
		int years;
		years = carMileage / 20000;
		cout << "This car is about " << years << " years" << endl;
	}

	~WithoutTrailer()
	{

	}
};

class PassengerCar : public WithoutTrailer {
protected:
	autoClass classOfAuto;
public:
	PassengerCar() : WithoutTrailer()
	{
		this->classOfAuto = A;
	}
	PassengerCar(int carMileage, autoClass classOfAuto, string carName) : WithoutTrailer(carMileage, carName)
	{

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
		cout << "CarName is " << carName << endl;
	}
	void anything() {
		cout << "That's cool car" << endl;
	}
	~PassengerCar()
	{

	}
};

