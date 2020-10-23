// Basic calculator that adds, subtracts, multiplies, and divides
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {
    char yor = 'y';
    char op;
    float num1, num2;

	while(yor=='y'){
		cin>>num1>>op>>num2;
    switch(op)
    {

        case '+': // Adds num1 by num2
            cout << num1+num2<<"\n";
            break;
        case '-': // Subtracts num1 by num2
            cout << num1-num2<<"\n";
            break;
        case '*': // Multiplies num1 by num2
            cout << num1*num2<<"\n";
            break;
        case '/': // Divides num1 by num2
			if (num2 != 0)
				cout << num1/num2<<"\n";
			else
				cout << "You cannot divide by 0!";
            break;
        case '%': // Returns remainder of num1 divided by num2
			if (num2 != 0)
				cout << (int)num1%(int)num2<<"\n";
			else
				cout << "You cannot divide by 0!";
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! Operator is not correct!" << endl;
            break;
    }
    cout<<"do you want to use calculator y/n:";
    cin>>yor;
    cout<<"\n";
	}	

	return 0;


}
