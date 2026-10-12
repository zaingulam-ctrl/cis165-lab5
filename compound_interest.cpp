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
    double principal;
    double rate_percent;
    int times_compounded;

    cout << "Enter the principal balance: $";
    cin >> principal;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate_percent;
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> times_compounded;

    
    double rate = rate_percent / 100.0;

    double amount = principal * pow(1.0 + rate / times_compounded,times_compounded);
    double interest_earned = amount - principal;

    cout << fixed << setprecision(2);
    cout << endl;
 
    cout << "Interest Earned:    $" << setw(10) << interest_earned << endl;
    cout << "Amount in Savings:  $" << setw(10) << amount << endl;

    return 0;
}