/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double loan_amount;
    double annual_rate_percent;
    int number_of_payments;

    cout << "Enter the loan amount: $";
    cin >> loan_amount;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annual_rate_percent;
    cout << "Enter the number of monthly payments: ";
    cin >> number_of_payments;


    double monthly_rate = annual_rate_percent / 100.0 / 12.0;

    double growth = pow(1.0 + monthly_rate, number_of_payments);
    double monthly_payment = (monthly_rate * growth) / (growth - 1.0) * loan_amount;

    double amount_paid_back = monthly_payment * number_of_payments;
    double interest_paid = amount_paid_back - loan_amount;

    double monthly_rate_percent = monthly_rate * 100.0;

    cout << fixed << setprecision(2);
    cout << endl;
   
    cout << "Monthly Payment:       $" << setw(10) << monthly_payment << endl;
    cout << "Amount Paid Back:      $" << setw(10) << amount_paid_back << endl;
    cout << "Interest Paid:         $" << setw(10) << interest_paid << endl;
    
    return 0;

}