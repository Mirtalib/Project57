#include <iostream>
#include <vector>

using namespace std;

#include "Car.h"
#include "Automatic.h"
#include "Manual.h"
#include "VehicleDepo.h"

using namespace HearderFiles;



int main() 
{
	Automatic s("VAz", "2107", Engine("Vaz", 1.5), 180, "Benzin", true);
	Automatic s2("Bmw", "F30", Engine("BMW", 2.5), 260, "Dizel", true);

	Manual m1("Mercedes Benz", "E-Calss", Engine("MC", 4.5), 434, "Benzin", true);
	Manual m2("Opel", "aStra", Engine("Opel", 3.5), 334, "Elekteik", false);


	vector<Automatic> autom;
	autom.push_back(s);
	autom.push_back(s2);

	vector<Manual> man;

	man.push_back(m1);
	man.push_back(m2);


	VehicleDepo a(man, autom);
	cout << a;
}
