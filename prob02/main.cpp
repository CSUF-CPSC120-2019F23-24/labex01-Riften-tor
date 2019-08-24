// This program calculates the user's pay.

#include <iostream>

int main()
{
  int bars;
  double price, earnings;

  std::cout << "Welcome to the Earnings Calculator! "

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> price;

  // Calculate the pay.
  earnings = bars * price;

  // Display the pay.
  std::cout << "Congratulations! You have earned " << pay << "for the organization!" std::endl;

  return 0;
}
