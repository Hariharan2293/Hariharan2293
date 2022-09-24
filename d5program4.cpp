#include <iostream>
#include <string>
using namespace std;
class Vehicle{
private:
	float Mileage;
	float Price;
public:
	Vehicle(){}
	Vehicle(float Mileage,float Price){
		this->Mileage=Mileage;
		this->Price=Price;
	}
	float getMileage(){
		return this->Mileage;
	}
	float getPrice(){
		return this->Price;
	}
	virtual void display(){
		cout<<"Mileage: "<<Mileage<<"\n";
		cout<<"Price: "<<Price<<"\n";
	}
};
class Car:public Vehicle{
private:
	float OwnershipCost;
	int Warranty;
	int SeatingCapacity;
	string FuelType;
public:
	Car(){}
	Car(float Mileage,float Price,float OwnershipCost,int Warranty,int SeatingCapacity,string FuelType):Vehicle(Mileage,Price){
		this->OwnershipCost=OwnershipCost;
		this->Warranty=Warranty;
		this->SeatingCapacity=SeatingCapacity;
		this->FuelType=FuelType;
	}
	float getOwnershipCost(){
		return this->OwnershipCost;
	}
	int getWarranty(){
		return this->Warranty;
	}
	int getSeatingCapacity(){
		return this->SeatingCapacity;
	}
	string getFuelType(){
		return this->FuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<OwnershipCost<<"\n";
		cout<<"Warranty: "<<Warranty<<"\n";
		cout<<"Seating capacity: "<<SeatingCapacity<<"\n";
		cout<<"Fuel type: "<<FuelType<<"\n";
	}
};
class Bike:public Vehicle{
private:
	int NumberCylinders;
	int NumberGears;
	string CoolingType;
public:
	Bike(){}
	Bike(float Mileage,float Price,int NumberCylinders,int NumberGears,string CoolingType):Vehicle(Mileage,Price){
		this->NumberCylinders=NumberCylinders;
		this->NumberGears=NumberGears;
		this->CoolingType=CoolingType;
	}
	int getNumberCylinders(){
		return this->NumberCylinders;
	}
	int getNumberGears(){
		return this->NumberGears;
	}
	string getCoolingType(){
		return this->CoolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<NumberCylinders<<"\n";
		cout<<"Number gears: "<<NumberGears<<"\n";
		cout<<"Cooling type: "<<CoolingType<<"\n";
	}
};
class Audi:public Car{
private:
	string ModelType;
public:
	Audi(float Mileage,float Price,float OwnershipCost,int Warranty,int SeatingCapacity,string FuelType):
	Car(Mileage,Price,OwnershipCost,Warranty,SeatingCapacity,FuelType){
		this->ModelType="Audi";
	}


	void display(){
		Car::display();
		cout<<"Model type: "<<ModelType<<"\n";
	}
};
class Ford:public Car{
private:
	string ModelType;
public:
	Ford(float Mileage,float Price,float OwnershipCost,int Warranty,int SeatingCapacity,string FuelType):
	Car(Mileage,Price,OwnershipCost,Warranty,SeatingCapacity,FuelType){
		this->ModelType="Ford";
	}
	void display(){
		Car::display();
		cout<<"Model type: "<<ModelType<<"\n";
	}
};

class Bajaj:public Bike{;
private:
	string MakeType;
public:
	Bajaj(float Mileage,float Price,int NumberCylinders,int NumberGears,string CoolingType):
	Bike(Mileage,Price,NumberCylinders,NumberGears,CoolingType){
		this->MakeType="Bajaj";
	}
	void display(){
		Bike::display();
		cout<<"The make-type: "<<MakeType<<"\n";
	}
};


class TVS:public Bike{
private:
	string MakeType;
public:
	TVS(float Mileage,float Price,int NumberCylinders,int NumberGears,string CoolingType):
	Bike(Mileage,Price,NumberCylinders,NumberGears,CoolingType){
		this->MakeType="TVS";
	}
	void display(){
		Bike::display();
		cout<<"The make-type: "<<MakeType<<"\n";
	}
};




int main()
{
	Audi carAudi(10000,36000,29000,10,3,"diesel");
	Audi carFord(20000,26000,19000,5,1,"petrol");
	Bajaj bikeBajaj(16000,12000,1,1,"liquid");
	TVS bikeTVS(56000,52000,6,6,"liquid");
	carAudi.display();
	cout<<"\n";
	carFord.display();
	cout<<"\n";
	bikeBajaj.display();
	cout<<"\n";
	bikeTVS.display();
	system("pause");
	return 0;
}