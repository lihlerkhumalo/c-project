#include<oistream>
#include<cmath>

using namespace std;


int main() {
	string studentName;
	int studentGrade;
	char PassSymbol;

}
cout << "Enter student name "<<endl;
cin >> studentName;
cout << "Enter student grade" << endl;
cin >> studentGrade;
cout << "Enter student pass symbol" << endl;
cin >> PassSymbol;
 

switch(studentGrade) {
	case"A";
		cout << "Outstanding result ";
		break;
	case"B" :
		cout << "Excellent result";
		break;
	case'C' :
		cout << "Beautiful marks"
		break;
	case"D":
		cout << "Average mark"'
		break;
	case"U":
		cout << "Failed";
		break;
	default:
		cout << "Undefined value";
		break;

		

}