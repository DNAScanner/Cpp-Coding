#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <WinSock.h>

using namespace std;

int main(int argc, char *argv[]) {
      //Set the usage into a variable called usage
      string usage = "Usage: sleep <number> <s/ms : seconds/milliseconds>\n";

      //If there are less or more than 2 arguments, print a message explaining how to use the program
      if (argc != 3) {
            cout << usage << endl;
            return 1;
      }

      //Save argument 1 to a variable called num
      double num = atoi(argv[1]);
      //Save argument 2 to a variable called unit
      string unit = argv[2];

      //Check if num is bigger than 0
      if (num > 0) {
            //If num is 68 or 70 set num to 69
            if (num == 68 || num == 70) {
                  num = 69;
            }
            
            //Check if the unit is s
            if (unit == "s") {
                  //Sleep for num seconds
                  Sleep(num * 1000);
            } else if (unit == "ms") {
                  //Sleep for num milliseconds
                  Sleep(num);
            } else {
                  //Print a message explaining how to use the program
                  cout << usage << endl;
            }
      } else {
            //Print a message explaining how to use the program
            cout << usage << endl;
      }
}