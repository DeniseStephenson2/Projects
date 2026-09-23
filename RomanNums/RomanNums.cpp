#include <iostream>
using namespace std;

int main () {

	// number
	int num ;
	cin >> num ;

	// roman numerals
	int I, V, X, L, C, D, M ;

	I = 1 ;
	V = 5 ;
	X = 10 ;
	L = 50 ;
	C = 100 ;
	D = 500 ;
	M = 1000 ;

	while ( num >= M ) {
		cout << "M" ;
		num -= M ;
	}

	if ( num >= 900  &&  num < M ) {
		cout << "CM" ;
		num -= 900 ;
	}

	while ( num < 900  &&  num >= D ) {
		cout << "D" ;
		num -= D ;
	}

	if ( num >= 400  &&  num < D ) {
		cout << "CD" ;
		num -= 400 ;
	}

	while ( num < 400  &&  num >= C ) {
		cout << "C" ;
		num -= C ;
	}

	if ( num >= 90  &&  num < C ) {
		cout << "XC" ;
		num -= 90 ;
	}

	while ( num < 90  &&  num >= L ) {
		cout << "L" ;
		num -= L ;
	}

	if ( num >= 40 && num < L ) {
		cout << "XL" ;
		num -= 40 ;
	}

	while ( num < 40  &&  num >= X ) {
		cout << "X" ;
		num -= X ;	
	}

	if ( num == 9 /* &&  num < X */ ) {
		cout << "IX" ;
		num -= 9 ;
	}

	if ( num < 9  &&  num >= V ) {
		cout << "V" ;
		num -= V ;

		while ( num > V && num < 9 ) {
			cout << "I" ;
			num -= I ;
		}
	}

	if ( num == 4 ) {
		cout << "IV" ;
		num -= 4 ;
	}

	while ( num < 4  && num > 0) {
		cout << "I" ;
		num -= I ;
	}

	cout << endl ; 
	return 0 ;
}
