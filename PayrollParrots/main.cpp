//==========================================================
//
// Title: Payroll Parrots
// Author: Mercyllia Harmon
// Description:
// application that determines the pays and taxes on a paycheck. Prompt the user for the paycheck month (string), an hourly rate (real), and a number of hours worked (integer). Calculate the gross pay, federal tax, FICA (Social Security and Medicare) tax, state tax, and net pay based on the hourly rate and time worked. Here are the formulas:
//
//gross pay = hourly rate * time worked
//federal tax = gross pay * 0.15
//FICA tax = gross pay * 0.0765
//state tax = gross pay * 0.0435
//net pay = gross pay – federal tax – FICA tax – state tax
//
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    
    // Declare variables
    string month;
    int hourlyRate;
    int hours;
    double grossPay;
    double federalTax;
    double ficaTax;
    double stateTax;
    double netPay;
    
    // Show application header
    cout << "Welcome to Payroll Parrots" << endl;
    cout << "--------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "Please input the payvheck month: ";
    cin >> month;
    cout << "Please input an hourly rate: ";
    cin >> hourlyRate;
    cout << "Please input a number of hours worked (Integer):";
    cin >> hours;
    
    // Caculate pays and taxes on a paycheck
    grossPay = hourlyRate * hours;
    federalTax = grossPay * 0.15;
    ficaTax = grossPay * 0.0765;
    stateTax = grossPay * 0.0435;
    netPay = grossPay - federalTax - ficaTax - stateTax;
    
    // Show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << "Paycheck month " << month << endl;
    cout << "HourlyRate: " << fixed << setprecision (2)<< hourlyRate << "$/hour" << endl;
    cout << "Number of Hours Worked: " << hours << "hours" << endl;
    cout << "GrossPay: " << setprecision(2) << grossPay << "$" << endl;
    cout << "Federal Tax: " << setprecision(2) << federalTax << "$" << endl;
    cout << "State Tax: " << setprecision(2) << stateTax << "$" << endl;
    cout << "NetPay: " << setprecision(2) << netPay << "$" << endl;
    
    // Show application close
    cout << "\nEnd of Payroll Parrot" << endl << endl;
    
    // Pause before application window closes
    
    cout << "Press any key to exit ..." << endl;
    return 0;
}

