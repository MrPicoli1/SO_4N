#include <stdio.h>
#include <unistd.h>

int main(){
  printf("I'm process %ld\n", (long)getpid());
  printf("My parent is %ld\n", (long)getppid());
  return 0;
}

