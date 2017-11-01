#include<iostream>
using namespace std;  
int hamming_diff(unsigned int  a , unsigned  int b)
{
	/* first we calculate xor or exclusive or of two unsigned integer 
	a = 0x1121= 0001000101000001
	b = 0x2367= 0100010101100111    */  
		// calculate difference in bits, xor of a and b = temp = 0101010000100110 , we will count total number of 1 in temp , here is 6        
	int  temp  = a^b; 
 // count them 
	int count= 0; 
	// until there are some bit remain to set 1 in temp
	while (temp> 0) {
		// mask with number 1 e.g. 0000000000000001
         int mask  = temp &1 ;
    // if the last bit is not zero, 
        if (mask != 0) {
         // increment in count with 1   
		    count++;
        }
        // shift bits in temp to right with 1 
        temp   = temp>>1;
    }
    //
    return count ; 
}
int main()
{      int a , b; 
// input a and b are taking in all number of systems //
    std::cin.unsetf(std::ios::dec);
	std::cin.unsetf(std::ios::hex);
	std::cin.unsetf(std::ios::oct);
     cout<<"Enter value of a "<<endl; 
      cin>>a;
	 cout<<" Enter value of b "<<endl ; 
	 cin>>b;   
	 cout<<"Hamming difference of a and b = "<<hamming_diff(a, b)<< endl; 
	  return 0 ;  
}
