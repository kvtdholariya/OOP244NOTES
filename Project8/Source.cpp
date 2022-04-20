#include <iostream>
using namespace std;

class RocketX {

	int power;
public:
	RocketX(int q =5) :power(q){}
	
	virtual void control(int m) {

		power += m;
		cout << "TX1-" << power << endl;

	}
	~RocketX() {
		cout << "+TX2-" << power << endl;
	}

};

class Missilex : public RocketX {

	double range;
public:
	Missilex(int r =7,double z =33.3) : RocketX(r),range(z){}
	virtual void control(int value)
	{

		range *= value;
		cout << "MX1-" << range << endl;

	}

	~Missilex() {

		cout << "+MS2-" << range << endl;
	}

};

int main() {
	RocketX little;
	RocketX* ptr;
	ptr = new Missilex( 8, 11.1);
	little.control(4);
	ptr->control(6);
	delete ptr;
	return 0;

}