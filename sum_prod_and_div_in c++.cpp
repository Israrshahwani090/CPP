

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	float x, y, z, sum, prod, div;
	// current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);
   
   
	cout<<"Enter First_____\t";
	cin>>x;
	
	
	cout<<"\nEnter Seconde_____\t";
	cin>>y;
	
	cout<<"\nEnter Third_____\t";
	cin>>z;
	
	sum = x+y+z;
	prod =x*y*z;
	div =x/y/z;
	
	cout<<"\n\nSum of Given Values___\t="<<sum;
	
	cout<<"\n\nProduct of Given Values___\t="<<prod;
	
	cout<<"\n\nDivision of Given Values___\t="<<div;
	
	cout << "\n\nDate and Time: " << dt << endl;
}
