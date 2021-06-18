//LOGIC: 
//A general obsrvation from truth table of XOR is that it gives 1 for unequal inputs(bits) and gives 0 for equal inputs(bits)
//We can use it as follows:
//take XOR of A and B and and count the number of set bits in it.Thats the answer. that will be the count of all unequal bits  

//Issue:
//TC O(logn) kaise aaya ye nhi pata. kuch to log2n ka logic hai. Figure it out later

#include<iostream>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
	unsigned int count=0;
	
	//while(n) is equivalent to while(n!=0)
	while(n)
	{
		count=count+(n&1);
		n=n>>1;    //rightshift by 1
	}
	return count;
}

//U can also use Brian Kernighan's algorithm. It has same TC as upper one

/*
unsigned int count=0;

	while(n>0)
	{
		count++;
		n=n&(n-1); 
	}
	return count;
*/

int main() 
{ 
	//bitwise operations becomes undefined in negative numbers. so unsigned int is used.
	unsigned int A,B;
	
	cout<<"\nEnter A ";
	cin>>A;
	cout<<"\nEnter B ";
	cin>>B;
	
	//calling our function
	cout<<"\nThe number of bits to be flippled to get B from A is "<<" "<<countSetBits(A^B);
	
	return 0;
}
