// Reviewed and Updated by Chase Chisholm
// Feature by Tyler: This is a Lab part where we check a pass fail situtaion.
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

  if (gpa == 70) {
    cout << "You pass." << endl;
    }
  else {
    cout << "You fail." << endl;
    }
    cout << "Hello from Tyler." << endl;
    cout << "Hello from Chase." << endl;
    cout << "Git makes collaboration easy!" << endl;
    cout << "TYPO LINE!!";
    cout << "Changes made by Chase Chisholm" << endl;
    cout << "Lab 1 completed on 8/19/2026!" << endl;
    cout << "Feature by Tyler: Branching is awesome!" << endl;

  }

 return 0;

}
//Edited directly on GitHub
=======
   
//Edited directly on GitHub

