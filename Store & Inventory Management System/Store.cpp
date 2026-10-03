#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void manager(int&, int&, int&, int&, int&, int&, float&);
void supplier(int&, int&, int&);
float robber(float&);
float customer(int, int&, int, int&, int, int&, float&);
void bum(int&, int&, int&, int&, int&, int&, int, int, int); 

int main() {

    srand(time(0)) ;

    int x = 3 + rand() % ( 17 - 3 + 1 ) ;
    int y = 2 + rand() % ( 9 - 2 + 1 ) ;
    int z = 4 + rand() % ( 7 - 4 + 1 ) ; 

    cout << "Who has come to visit?" << endl ;

    char visitors;
    cin >> visitors;
    cout << endl ;

    int ni = 100, ns = 0, ri = 100, rs = 0, si = 100, ss = 0 ;

    float cash = 0 ;

    while ( visitors != 'Q' ) {
        
        if ( visitors == 'M' ) {

            manager( ni, ns, ri, rs, si, ss, cash ) ;	
        } 

        if ( visitors == 'S' ) {

            int n, r, s ;

            supplier( n, r, s ) ;

            ni += n ;
            ri += r ;
            si += s ;
            ns = 0  ;
            rs = 0  ;
            ss = 0  ;
        }

        if ( visitors == 'R' ) {

            robber( cash )  ;
        }

        if ( visitors == 'C' ) {

            customer( ni, ns, ri, rs, si, ss, cash ) ;
            ni -= ns ;
            ri -= rs ; 
            si -= ss ;
        }

        if ( visitors == 'B' ) {

            bum( ni, ns, ri, rs, si, ss, x, y, z ) ;
        }

        cout << endl ;

        cout << "Thomas: Who else? " << endl ;

        cin >> visitors ;

        cout << endl ;
    }

    cout << "The Store is closed now and will reopen soon. Until then, have a nice rest of your day! :)" << endl ;

    cout << endl ;

    return 0 ;
}

void manager( int& ni, int& ns, int& ri, int& rs, int& si, int& ss, float& cash ) {

    cout << "Manager: Just here to check the Inventory." << endl ;

    cout << "Thomas: Understood." << endl ;
    cout << endl ;

    cout << "            NukaColas     Rad-Aways     Shotgun Shells " << endl ;
    cout << "Inventory:     " << ni + ns << "            " << ri + rs << "             " << si + ss << endl ;
    cout << "Sold:          " << ns << "              " << rs << "               " << ss << endl ;
    cout << "Remaining:     " << ni << "            " << ri << "             " << si << endl ;
    cout << endl ;		
    cout << "Total Money: " << cash << endl ;
}

void supplier( int& n, int& r, int& s ) {

    n = rand() % 251 ;
    r = rand() % 251 ; 
    s = rand() % 251 ;

    cout << "Supplier: Heres your " << n << " NukaColas, " << r << " Rad-Aways, and " << s << " Shotgun Shells!" << endl ; 

    cout << "Thomas: Send it to the back, please." << endl ;

    cout << "Supplier: Will do. " << endl ;
}

float robber( float& cash ) {

    cout << "Robber: I'm going to steal your " << cash << " caps if you don't mind. O __ O " << endl ;

    cout << "Thomas: What a polite robber! :D " << endl ;

    cash = 0 ;

    return cash ;
}

float customer( int ni, int& ns, int ri, int& rs, int si, int& ss, float& cash ) {

    cout << "Customer: Hi! I would like to purchase some items, please." << endl ;

    cout << "Thomas: Alright, how many NukaColas? " ;
    cin >> ns ;
    while ( ni < ns ) {

        cout << "Thomas: We don't have that many. How many NukaColas? " ;
        cin >> ns ;
    }

    cout << "Thomas: How many Rad-Aways? " ;
    cin >> rs ; 
    while ( ri < rs ) {

        cout << "Thomas: We don't have that many. How many Rad-Aways? " ;
        cin >> rs ;
    }

    cout << "Thomas: How many Shotgun Shells? " ;
    cin >> ss ;	
    while ( si < ss ) {

        cout << "Thomas: We don't have that many. How many Shotgun Shells? " ;
        cin >> ss ;
    }

    cash = ( ns * 17.75 ) + ( rs * 24.50 ) + ( ss * 19.25 ) ;

    cout << "Thomas: Your total is: " << cash << " caps" << endl ;

    cout << "Customer: Lucky I saved up enough caps!" << endl ;

    return cash ;
}

void bum( int& ni, int& ns, int& ri, int& rs, int& si, int& ss, int x, int y, int z ) {

    if ( ni < x ) {

        x = ni ;
    }

    ni -= x ;

    if ( ri < y ) {

        y = ri ;
    }

    ri -= y ;

    if ( si < z ) {

        z = si ;
    }

    si -= z ;

    cout << "The Bum took: " << x << " NukaColas, " << y << " Rad-Aways, and " << z << " Shotgun Shells" << endl ;

    cout << "Thomas: Not like I could have stopped them anyway. :/ " << endl ;
}