#include <iostream>

using namespace std;

bool pythogorianTriplet(int num1, int num2, int num3) {
	int a,b,c;
	a = max(num1, max(num2,num3));

	if (a==num1) {
		b=num2;
		c=num3;
	}
	else if (a==num2) {
		b=num1;
		c=num3;
	}
	else {
		b=num2;
		c=num1;
	}

	if (a*a == ((b*b) + (c*c))) {
		return true;
	}
	else {
		return false;
	}

}

int main() {
	int x,y,z;
	cout<<"Enter three nos. \n";
	cin>>x>>y>>z;
	if (pythogorianTriplet(x,y,z)) {
		cout<<"Yes, the nos. "<<x<<", "<<y<<" and "<<z<<" form a Pythogorian Triplet \n";
	}
	else {
		cout<<"No, the nos. "<<x<<", "<<y<<" and "<<z<<" does not form a Pythogorian Triplet \n";
	}

	return 0;
}