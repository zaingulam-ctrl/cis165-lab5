# AI Reflection

**Tools used:** I used ChatGPT to explain the loan payment formula and how pow
works, and to check my plan before I wrote the code. 

**One decision:** I asked, "How do I convert an annual percentage rate into a
monthly decimal rate? Do not write the whole program." It explained dividing by
100 and then by 12. I used that. The loan formula has (1 + monthly_rate)
raised to the number of payments twice, so I decided to calculate it once with
pow and store it in a variable called growth. That made the payment line much
shorter and easier to read. I also decided to use int for the number of
payments and double for everything with decimals.

**Verification:** I compiled both programs  and got no warnings. I ran the assigned tests and compared them with the numbers in the
lab: $43.34 interest and $1043.34 for compound interest, and $332.14,
$11957.15, and $1957.15 for the loan. I also worked out my changed tests by
hand with a calculator first , and the program matched both.

**Learning:** I can now explain why a percentage has to be converted to a
decimal and how pow does exponents, and I can use setw and setprecision to line
up a report. I still need to practice choosing the right width for setw
without trial and error, and reading long formulas without mixing up the
parentheses.
