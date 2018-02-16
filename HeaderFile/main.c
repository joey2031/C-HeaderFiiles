
#include <stdio.h>
#include <stdlib.h>
#include "NewFile.h" // Include contents of new file.
// for some reason it says it cant find the file but runs fine.

// #include: this is a constant you cant change the value of it
// coding practice: when making a constant variable make it all caps so it is 
// easier to know which variables are constants and which ones are not.
// This will search the program for anytime NAME appears and replace it 
//with bob, and tage any time AGE appears and replaces it with. 


// pre preprocessor directives: anything with the # in front of it. You do not 
// need a ; after on of these.
int main(int argc, char** argv) {

    
    printf ("my name is %s I am %d years old" , NAME, AGE);


    return (EXIT_SUCCESS);
    
   // watch Buckys C Programming Tutorial - 10 - Creating a Header File
}

