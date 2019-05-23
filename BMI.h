#include <iostream>
#include <string>

using namespace std;

#ifndef WORLD_H
#define WORLD_H

class BMI {
public:
	//Default constructor
	BMI();
	//Overload constructor
	BMI(int, double);
	//Destructor
	~BMI();
	//----------------------------------------------------------
	//Accessor functions
	int getHeight() const; //getHeight - returns height of patient
  	double getWeight() const; //getWeight - returns weight of patient
	//----------------------------------------------------------
   	//Mutator functions
	void setHeight(int); //setHeight - sets height of patient
	void setWeight(double); //setWeight - sets weight of patient
	//----------------------------------------------------------
	double calculateBMI() const; //calculate BMI of patient;

private:
  	//Member variables
  	int newHeight;
  	double newWeight;

};

#endif
