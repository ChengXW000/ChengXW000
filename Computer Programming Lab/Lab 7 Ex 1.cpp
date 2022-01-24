#include <iostream>
using namespace std;
void input(double&, double&);
void calculate(double&, double&, double&, double&, double&);
void output(double&);

int main()
{
	double weightp, weightoz, weightkg, pound, sumpound;
	char conti;

	do {
		input(weightp, weightoz);
		calculate (weightp, weightoz, sumpound, weightkg, pound);
		output(weightkg);
		cout << "Do you want to continue (type x for no y for continue);" << endl;
		cin >> conti;
		} while (conti != 'x');
		
	return 0;
}

void input(double& weightp, double& weightoz)
{
	cout << "Please input your weight in pound and ounces:" <<endl;
	cin >> weightp >> weightoz;
}

void calculate(double& weightp, double& weightoz, double& sumpound, double& weightkg, double& pound)
{
	pound = weightoz/16;
	sumpound = pound + weightp;
	weightkg = sumpound/2.2046;
}

void output(double& weightkg)
{
	cout << "The weight is:" << weightkg << "kg or " << weightkg*1000 << "g" << endl;
}