#include<iostream>
using namespace std;
int main(){
    // https://git-scm.com/docs/git-bisect
    cout << "C++ file for testing git bisect\n";
    /*
    Basic file for 1st commit, compiles
    */
    cout << "Some more additions from master, compiles";
    /*
    Now will commit the above line and checkout a new dev branch
    */

   /*
   Writing from master
   Will add a line, master doesn't have the breaking change, will compile
   */
    cout << "\n2nd addition from master. Compiles\n";
    return 0;
}