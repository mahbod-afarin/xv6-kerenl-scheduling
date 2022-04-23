#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  int i, k;
  const int loop = 100;
  for(i = 0;i < loop; i++) 
  {
    asm("nop"); 
    for(k=0; k < loop; k++) {
      asm("nop"); 
    }
  }
  printf(1, "The number of Processes: %d \n", info(1));
  printf(1, "The number of sysCalls for process: %d \n", info(2));
  printf(1, "The number of the memory pages used by process: %d \n", info(3));
  exit();
}