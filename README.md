//hamming difference 
#include<iostream>
  using namespace std; 
  int hamming_distance(unsigned int a, unsigned int b)
  {
  int temp = a^b; 
  int count = 0; 
  while(temp>0){
  int mask = temp&1; 
  if(mask!= 0){
  count ++; 
  }
  temp= temp>>1; 
  }
  return count ; 
  }
   int main()
  {
  int a , b; 
  //taking input in all number systems
   std::cin.unsetf(std::ios::dec);
	std::cin.unsetf(std::ios::hex);
	std::cin.unsetf(std::ios::oct);
   cout <<" Enter value of a" ; 
  cin>> a; 
  cout<<" Enter value of b" ; 
  cin>>b ; 
  cout<<"Hamming Difference of two unsigned integer"<<hamming_distance(a, b); 
  return 0 ; 
  } 
