// Complete everything that needs to be here.
 #include "lab2_cats.h"
 #include <iostream>
 using namespace std;
void check(int numberOfCats, string ,string ,string );
 int main() {
 // Any variables that need to be declared and possibly initialised
string e,h,f;
int numberOfCats;
cout<<"enter the number of cats"<<endl; 
cin>>numberOfCats;
Cat** cats= new Cat*[numberOfCats];
/* A loop in which you will construct a new cat object, print this new cat
1sobject's attributes, and call function check. */
 for ( int count = 0; count < numberOfCats; count++ ) {
 cout << "Press a key to add the next cat to the room  ." << endl;
 cin.get();
Cat* c=new Cat;
cats[count]=c;
if(c->addcat()){
    c->seteyeColor();
    c->setfur();
    c->sethairlen();
    cout<<"Cat number"<<count+1<<endl;
    f=c->getfur() ;
    e=c->geteyeColor();
    h=c->gethairlen();
    cout<<f<<endl;
    cout<<e <<endl;
    cout<<h <<endl;

    check( numberOfCats,f,e,h);
}
else break;
 }

 /* Write a statement to delete all cat objects. */
 for ( int count = 0; count <= numberOfCats; count++ ){
    delete cats[count];
 }
 delete[] cats;

 return 0;
 }