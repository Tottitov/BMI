//Function definitions
#include "BMI.h"
BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
}

BMI::BMI(int height, double weight) {
    newWeight = weight;
    newHeight = height;
}

BMI::~BMI() {

}
//---------------------------------------------
int BMI::getHeight() const {
    return newHeight;
}

double BMI::getWeight() const {
    return newWeight;
}
//---------------------------------------------
void BMI::setHeight(int height) {
    newHeight = height;
}

void BMI::setWeight(double weight) {
	newWeight = weight;
}
//---------------------------------------------
double BMI::calculateBMI() const {
	return ((newWeight * 705) / (newHeight * newHeight));
}
