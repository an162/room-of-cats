#include "lab2_cats.h"
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

 // Constructor
 Cat::Cat(): 
 catnum(0), f{"black", "grey", "brown"}, 
 e{"green", "blue", "brown"}, h{"short", "long"},
 result{"", "", ""} {}
//int num=0, string f[3], string e[3], string h[2],string result[3]
 // The get functions one after the other
   string  Cat::getfur(){
        return result[0]; //furr first
   }
   string  Cat::geteyeColor(){
     return result[1]; //eyes sec
   }
   string  Cat::gethairlen(){
     return result[2]; //hair third
   }

// The set functions one after the other. The first statement of the first
//method
// is given; complete all.
void Cat::setfur() {
    srand(time(nullptr));
 int x = rand() % 3;
// Complete it.
 result[0]=f[x];
 }
 void Cat::seteyeColor() {
    srand(time(nullptr));  //is this right?
 int x = rand() % 3;
// Complete it.
 result[1]=e[x];
 }
 void Cat::sethairlen() {
    srand(time(nullptr));
 int x = rand() % 2;
// Complete it.
 result[2]=h[x];
 }

 //rest
 bool Cat::addcat(){
     
     if(catnum>=7) {
        cout<<"The room is FULL";
        return false;
     }
    catnum++;
    return true;
 }
//Not Class member
void check(int numberOfCats,string fur,string eye,string hair){
    static int black,green,blue,browne,grey,brownf;

    for ( int count = 0; count <= numberOfCats; count++ ) {
        if(count==0)  {int black=0,green=0,blue=0,browne=0,grey=0,brownf=0;}
        if(fur=="black"){
                   black++; 
                    if(eye== "green") green++; 
                    if(eye=="blue")   blue++;  
                    if(eye=="brown")   browne++;  
                }
           if(fur== "grey") grey++;  
           if(fur== "brown")  brownf++;  
        }
        
        if(black>=3 && green && blue && browne==1 ) cout<<"black blue , brown and green met and BROKE A FIGHT"<<endl;

       if(black>grey) cout<<"black broke a fight on greys"<<endl;
       

       
       //finish
    }
