#include <iostream>
#include <vector>

int main(){
  std::vector<int> digits;
  digits.push_back(4);
  digits.push_back(5);
  digits.push_back(8);
  digits.push_back(9);
  digits.push_back(10);
  digits.push_back(1);
  int even_sum=0, odd_product=1;

  for (int i=0; i<digits.size();i++){
    if(digits[i]%2==0){
      even_sum += digits[i]; 
    } else {
      odd_product *= digits[i];
    }
  }

  std::cout<<"Sum of even numbers is "<<even_sum<<"\n";
  std::cout<<"Product of odd numbers is "<<odd_product<<"\n";

  
  return 0;
}