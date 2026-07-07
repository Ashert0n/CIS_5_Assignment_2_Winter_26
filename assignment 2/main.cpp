#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	
	cout << std::fixed << std::setprecision(2);
	cout << "Hello, please input your information for your BMI Grade" << endl;

	
	string Name;
	int Age;
	double heightInMeters;
	double weightInKilos;
	int testScore;
	float BMI;
	string BMItext;
	char Grade;



	cout << "Name: ";
	cin >> Name;
	cout << "Age: ";
	cin >> Age;
	cout << "Height (In meters): ";
	cin >> heightInMeters;
	cout << "Weight (In Kilograms): ";
	cin >> weightInKilos;

	BMI = weightInKilos / (heightInMeters * heightInMeters);

	if ( heightInMeters < 0 || weightInKilos < 0) {
		cout << "Invalid score entered!";
		return 0;
	}
	
	
	if (BMI < 18.5) {
	  BMItext = "Underweight";
	 }else if (BMI < 25) {
	  BMItext = "Normal weight ";
	 }
	 else if (BMI < 30) {
		BMItext =  "Overweight";
	} else {
		BMItext =  "Obese";
	}
	


	cout << "Please enter your test score: ";
	cin >> testScore;

	if (testScore < 0 || testScore > 100) {
		cout << "Invalid score entered!";
		return 0;
	}

	if (testScore >= 90 && testScore <= 100) {
		Grade = 'A';
	}
	else if (testScore >= 80) {
		Grade = 'B';
	}
	else if (testScore >= 70) {
		Grade = 'C';
	}
	else if (testScore >= 60) {
		Grade = 'D';
	}
	else {
		Grade = 'F';
	}

	cout << "Hey " << Name << ", you're " << Age << " years old with a BMI of " << BMI << " (" << BMItext << ") and you got a grade " << Grade << "! Keep it up!" << endl;





		return 0;
}