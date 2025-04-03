// Project Name: Lab 04 Payment Calculations Loop
// Date Written: September 27, 2022
// Description: Calculates how much income would be earned with different pay levels for hourly income with time and a half on hours worked over 40 
//Tells you how much you made in how many hours inputted with included pay level and overtime
//included loop for continious employees to be processed

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double Min_wage {9.87};
const double Norm_hours {40};

int main(){

//input

int num = 1;

string EmployeeID;
double payRate, totalPay, Hours, TOTAL;
	char payCode, again;

	
do {
	cout << "Lab 04 Payment Calculations Loop" << endl;
	cout << "...Programmed By: Cam S" << endl;
	cout << "Please enter your EmployeeID #, payCode, and Hours worked " << endl;
	cin >> EmployeeID >> payCode >> Hours; 
	
	//processing
	
	switch (payCode){
		
		case 'M':
			payRate = Min_wage;
			break;
		
		case 'O':
			payRate = Min_wage + 1.00;
			break;
			
		case 'T':
			payRate = Min_wage + 2.00;
			break;
			
		default:
			cout << "You've entered a wrong payCode option\n";
			break;	
	
   }
   	
	
    if 
	(Hours > Norm_hours)
	totalPay = payRate * Norm_hours + payRate * 1.5 * (Hours - Norm_hours);
	++num;
	
	if (payRate) 
	totalPay = Hours * payRate;
	
    TOTAL += totalPay;
    
    
	 //output
	     
     cout << setprecision(2) << fixed;
	cout << "Hourly pay: $ " << setw(2) << payRate << " Total pay: $ " << setw(2) << totalPay << '\n';
	

    cout << "add another employee? (Y/N): ";
    cin >> again; 
   
    }
     while ( again == 'Y' || again == 'y' || 'N' == num-- );

   

cout << "You processed " << num << " Employees." << endl;
cout << "Total Payroll is $" << TOTAL << endl;
cout << endl << "Normal Job Terminated" << endl;
return 0;
}