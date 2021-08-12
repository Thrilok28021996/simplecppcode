#include<iostream>

using namespace std;

int main()
{
	float weight, height,bmi;
	cout << "weight(kg), height(m):";
	cin >> weight >> height;

	bmi = weight/(height*height);

	if(bmi < 18.5)
		cout << "Underweight" << endl;
	else if(bmi > 25)
		cout << "overweight" << endl;
	else
		cout << "normal weight" << endl;

	cout << "YOUR BMI: " << bmi ;

	return 0;
}