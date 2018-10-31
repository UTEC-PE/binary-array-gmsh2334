#include <iostream>
#include "boolean.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    int tmn=8;
    boolean bl(tmn);
    for(int i=0; i <tmn ; i++){
        bl.bitOn(i);
    }
    bl.bitOff(3);
    for(int i=tmn-1; i!=-1 ; i--){
    bl.operator[](i);
    }
    bl.clear();
    cout << "\n\n";
    for(int i=tmn-1; i!=-1 ; i--){
        bl.operator[](i);
    }
    bl.~boolean();

    system("read");
    return EXIT_SUCCESS;
}

