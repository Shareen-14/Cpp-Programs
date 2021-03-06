#include<iostream>
using namespace std;

//Specific Function
void Swap(char*p, char*q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//Generic Function
template <class T>
void SwapX(T *p, T *q)
{
	T temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char x='A', y='B';
	SwapX(&x,&y); //Swap(100,200);
    
	cout<<"Value of X becomes : "<<x<<"\n";
	cout<<"Value of Y becomes : "<<y<<"\n";
	
	int i=11, j=21;
	SwapX(&x,&y); //Swap(100,200);
    
	cout<<"Value of I becomes : "<<i<<"\n";
	cout<<"Value of J becomes : "<<j<<"\n";

    return 0;	
}