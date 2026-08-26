// Reviewed and Updated by Chase Chisholm
#include <iostream>
using namespace std;

// Feature by Chase: Calculates the GPA of a student based on their grades in Math, English, and Science
int main()
{
	int math;
	int english;
	int science;
	double gpa{};


	cout << "Enter your Math Grade:" << endl;
	cin >> math;

	cout << "Enter your English Grade:" << endl;
	cin >> english;

	cout << "Enter your Science Grade:" << endl;
	cin >> science;

	gpa = (math + english + science) / 3;
	cout << "Your GPA is: " << gpa << endl;


}
//Edited directly on GitHub
