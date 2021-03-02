#include <iostream>

using namespace std;

int main() {

// define conversion values in cents
const int dollar_value = 100;

const int quarter_value = 25;
const int dime_value = 10;
const int nickel_value = 5;

int change_amount;
// user input for change amount
  cout << "Enter an amount in cents : ";
    cin >> change_amount;


int balance, dollars, quarters, dimes, nickels, pennies; // values which will the data needed to calculate the balence

// dollar balence equation
dollars = change_amount / dollar_value;   
balance = change_amount % dollar_value;

// quarter balence equation
quarters = balance/quarter_value;
balence %= quarter_value;

// dimes balence equation

 dimes = balance / dime_value;
    balance %= dime_value;

// nickel balence equation
    nickels = balance/nickel_value;
    balance%= nickel_value;

    // balance left in pennies

pennies = balance;

// output statements showing factored values in the program

 cout << "\nYou can provide this change as follows : " << endl;
 cout << "dollars :: " <dollars << endl;
  cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    cout << endl;


return 0;

}