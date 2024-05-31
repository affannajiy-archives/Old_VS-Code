//W4_Lab 'Affan 22010453
#include <iostream>
using namespace std;
int main()
{
  float oriPrice, sellPrice, finalPrice, percentageMarkup, taxRate, taxAmount;
  cout << "Enter the original price: ";
  cin >> oriPrice;
  cout << "Enter the percentage  mark-up price (eg. 10 for 10%): ";
  cin >> percentageMarkup;
  cout << "Enter the sale tax rate (eg. 5 for 5%): ";
  cin >> taxRate;

  sellPrice = oriPrice + (oriPrice * percentageMarkup / 100);
  taxAmount = sellPrice * (taxRate / 100);
  finalPrice = sellPrice + taxAmount;
  
  cout << "Original Price: " << oriPrice << endl;
  cout << "Percentage Mark-up: " << percentageMarkup << "%" << endl;
  cout << "Selling Price: " << sellPrice << endl;
  cout << "Sales Tax Rate: " << taxRate << "%" << endl;
  cout << "Sales Tax Amount: " << taxAmount << endl;
  cout << "Final Price for Item: " << finalPrice << endl;
  return 0;
}