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
   
   Okay, committed the breaking change dev b60c4a1. Now will talk a bit about next steps.
   (Not that the commit having this comment will still be a bad commit coz breaking change
   hasn't been fixed yet.)
   Will checkout master and make some changes just so that tree diverges and it's easier
   to visualize.
   */
    return 0;
}