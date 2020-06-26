#include <iostream>
#include "Polynom.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>

int main() {

	TMonom g;
	g.coef = 5;
	g.p_x = 1;
	g.p_y = 1;
	g.p_z = 1;
	TPolynom p;
	cout << "enter coef, p_x, p_y, p_z" << endl;
	while (g.coef) {
		cin >> g.coef;
		cin >> g.p_x;
		cin >> g.p_y;
		cin >> g.p_z;
		p.AddMonom(g);
	}
	cout << "Polynom: " << p << endl;
	TPolynom q(p);
	TMonom m;
	m.coef = 5;
	m.p_x = 1;
	m.p_y = 1;
	m.p_z = 1;
	p *= m;
	cout << "Polynom * Monom 5xyz: " << p << endl;
	p += q;
	cout << "Polynom * Monom 5xyz + Polynom: " << p << endl;
	q *= 2;
	cout << "Polynom * 2: " << q << endl;



	_getch();

	return 0;
}