#include<iostream>
using namespace std;
int main(){
    // https://git-scm.com/docs/git-bisect
    cout << "C++ file for testing git bisect. Adding this line from dev. Compiles\n";
    /*
    Basic file for 1st commit, compiles
    */
    cout << "Some more additions from master, compiles. Writing from dev. Removed ';' at EOL. Won't compile but will pretend I don't know"
    /*
    Now will commit the above line and checkout a new dev branch
    */

   /*Now writing from dev.
   1st commit will be a working change (adding words on 1st cout) and the next one
   a breaking change (removing semicolon of 2nd cout, won't compile).
   */
    return 0;
}