#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>
using namespace std;
class boolean {
    private:
        char* array;
    
    public:
        boolean(int size) {
                if(size%8==0){
                        array=new char[(size/8)];
                }else{
                        array=new char[(size/8)+1];
                }
                for(int i=0 ; array[i]; i++){
                        array[i]=0;
                        cout << array[i];
                }
                // TODO
        }
        
        void bitOn(int position) {
                array[position/8] |= 1 << (position%8);
            // TODO
        }
             
        void bitOff(int position) {
                array[position/8] &= ~(1 << position%8);
//                array[position/8] &= 0 << (position%8);
            // TODO
        }
             
        bool operator[](int position) {
                auto a = array[position/8] >> (position%8)&1;
                cout << a;
                return array[position/8] >> (position%8)&1;
            // TODO
        }
    
        void clear() {
                for(int i=0 ; array[i]; i++)
                array[i]=0;
            // TODO
        }
             
        ~boolean() {
                delete array;
        // TODO
        }

};

#endif