#include <iostream>
#include <string>
#include "BMI.h"

using namespace std;

int main() {

	string name;
  	int height;
  	double weight;
	char choice;

	do {
		cout << endl << "Nhu and Tony's BMI Program!" << endl << endl;
		for (int count = 0; count < 2; count++) {
  			cout << "Enter your height (in inches): ";
  			cin >> height;
  			cout << "Enter your weight (in pounds): ";
  			cin >> weight;

			if (count == 0) {
  				BMI Tony(height, weight);
				cout << endl << "First Patient" << endl;
  				cout << endl << "Patient Name: Tony" << endl <<
				"Height: " << Tony.getHeight() << endl <<
    			"Weight: " << Tony.getWeight() << endl <<
				"BMI: " << Tony.calculateBMI() << endl << endl;

			} else if (count == 1) {
				BMI Nhu;
				Nhu.setHeight(height);
				Nhu.setWeight(weight);
				cout << endl << "Second Patient" << endl;
				cout << endl << "Patient Name: Nhu" << endl <<
				"Height: " << Nhu.getHeight() << endl <<
  				"Weight: " << Nhu.getWeight() << endl <<
				"BMI: " << Nhu.calculateBMI() << endl << endl;
			}	
		}

		cout << "Would you like to restart the program again?: ";
		cin >> choice;
		if (choice == 'N' || choice == 'n') {
			cout << "Exiting program..." << endl << endl;
			return false;
		}
	} while (true);
}
