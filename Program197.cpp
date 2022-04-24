#include<iostream>

using namespace std;

typedef unsigned int UINT;

UINT ONRange(UINT iNo, int iStart, int iEnd)
{
	return (iNo ^((0XFFFFFFFF << (iStart - 1))&(0XFFFFFFFFF >> (32-iEnd))));

}

// iStart = 5
// iEnd = 16

int main()
{
	UINT iValue = 0, i = 0, j = 0, iRet = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter Starting position\n";
	cin>>i;
	
	cout<<"Enter Ending position\n";
	cin>>j;
	
	iRet = ONRange(iValue, i, j);
	
	cout<<"Updated number is : "<<iRet<<"\n";
	return 0;
}