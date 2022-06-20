//
// Created by jskag on 6/20/2022.
//

#include <iostream> // allows you to print streams to the command line

using namespace std; //

int main(int argc, char *argv[]) {

//    argc in an integer that tell you how many arguments were passed from the command line
//    argv is an array of length argc that contains the
    if (argc < 2) { // we are checking to see if any arguments were passed in
        cout << "Hello World" << endl; // print hello message to the command line
    }
    else { // if there was an argument passed into then display a different message greeting the name of the person
        cout << "Hello " << argv[1] << ", welcome to the world of computer science!" << endl; // print hello greeting to the command line
    }
    return 0; // 0 implies that the program ran successfully
}






