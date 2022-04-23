#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <WinSock.h>
#include <windows.h>
#include <winuser.h>

using namespace std;

int main(int argc, char *argv[]) {
      //Set the usage into a variable called usage
      string usage = "Usage: fullscreen\n";

      //If there are arguments, print a message explaining how to use the program
      if (argc > 1) {
            cout << usage << endl;
            return 1;
      }

      //Simulate a keypress with pressing left windows key and the up arrow at the same time
      INPUT ip;
      ip.type = INPUT_KEYBOARD;
      ip.ki.wScan = 0;
      ip.ki.time = 0;
      ip.ki.dwExtraInfo = 0;

      //Press the left windows key
      ip.ki.wVk = VK_LWIN;
      ip.ki.dwFlags = 0;
      SendInput(1, &ip, sizeof(INPUT));

      //Press the up arrow
      ip.ki.wVk = VK_UP;
      ip.ki.dwFlags = 0;
      SendInput(1, &ip, sizeof(INPUT));

      //Release the left windows key
      ip.ki.wVk = VK_LWIN;
      ip.ki.dwFlags = KEYEVENTF_KEYUP;
      SendInput(1, &ip, sizeof(INPUT));

      //Release the up arrow
      ip.ki.wVk = VK_UP;
      ip.ki.dwFlags = KEYEVENTF_KEYUP;
      SendInput(1, &ip, sizeof(INPUT));

      return 0;
}