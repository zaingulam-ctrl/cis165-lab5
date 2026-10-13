# CIS 165 Lab 5

**Course:** CIS-165-W099

## Initial plans 

**compound_interest.cpp:** The Inputs are : principal, annual rate as a percentage, and
how many times interest is compounded in a year. I have to divide the
percentage by 100 first (4.25 becomes 0.0425). Then amount = principal *
pow(1 + rate / times, times), and interest_earned = amount - principal. Then i will
print the rate, times compounded, principal, interest earned, and amount in
a column report using fixed, setprecision(2), and setw. 

**loan_payment.cpp:** The Inputs are : loan amount, annual rate as a percentage, and
number of monthly payments. monthly_rate = annual_rate / 100 / 12. I will use
pow(1 + monthly_rate, payments) in the payment formula. Then amount_paid_back
= monthly_payment * payments and interest_paid = amount_paid_back -
loan_amount. I will print all six values. 

## How to run


With OnlineGDB: go to onlinegdb.com, choose C++, write the code according to the instructions then  click Run. Type the inputs into the console
at the bottom. Do this separately for each file.

## Test table

| Program and test | Inputs | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Compound interest, assigned | 1000, 4.25%, 12 | rate per period = 1.04334, so amount is about $1043.34 and interest is about $43.34 | Interest Earned: $43.34, Amount in Savings: $1043.34 | Match |
| Compound interest, changed | 2500, 3.5%, 4 | rate per period =  1.03546, so amount is about $2588.66 and interest is about $88.66 | Interest Earned: $88.66, Amount in Savings: $2588.66 | Match |
| Loan payment, assigned | 10000, 12%, 36 | monthly rate = 0.01. Payment is about $332.14, paid back is 332.14 * 36 = about $11957.15, interest is about $1957.15 | Monthly Payment: $332.14, Amount Paid Back: $11957.15, Interest Paid: $1957.15 | Match |
| Loan payment, changed | 5000, 6%, 24 | monthly rate =   is about 1.12716, so payment = 0.005 * 1.12716 / 0.12716 * 5000 = about $221.60. Paid back is about $5318.47, interest is about $318.47 | Monthly Payment: $221.60, Amount Paid Back: $5318.47, Interest Paid: $318.47 | Match |



Both programs take  input, so there are no values hardcoded in the
source that I needed to change back. The submitted .cpp files are the same
ones I used for all four tests, and I reran the assigned inputs on the final
files before uploading.

## Code explanations

**Why divide a percentage by 100?**
A percent means "per hundred," so 4.25%  means 0.0425. If I used 4.25  the program would act like the rate was 425%.

**How does pow represent exponentiation?**
In C++  pow means (base, exponent) from <cmath> raises the base to the exponent, so pow(1.0 + rate / times, times) means
(1 + rate/times) to the power of times.

**What does the number of compounding periods change?** 
It changes how many times interest is added during the year and how big each piece is. The yearly
rate is split into rate / times for each period.More periods means interest earns interest more often, so
the final amount is a little higher.

**How do you convert annual rate to monthly rate?**
Divide by 100 to get a decimal, then divide by 12 for twelve months. For 12%, that is 12 / 100 / 12 =
0.01.

**Why use double?** The values have decimals 4.25%, cents, and tiny rates like
0.0035417, and pow returns a double. An int would drop the decimals and give
wrong answers. I used int only for the counts since those are whole numbers.

**Why use full precision when money is shown with two decimals?** setprecision(2)
only changes how the number is displayed, not the value stored. If I rounded to
cents during the calculation, small errors would add up, especially when
multiplying the payment by the number of payments. 

**How are amount paid back and total interest calculated?** amount_paid_back =
monthly_payment * number_of_payments, and interest_paid = amount_paid_back -
loan_amount. 

**Why store calculations in variables before cout?** It keeps the math separate
from the printing, makes the code easier to read, and makes it easier to find
bugs . 
