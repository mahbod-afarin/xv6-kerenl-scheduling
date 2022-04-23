#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  setTicket(30);
  int i, k;
  const int loop = 43000;
  for(i = 0;i < loop; i++) 
  {
    asm("nop"); 
    for(k=0; k < loop; k++) {
      asm("nop"); 
    }
  }
  exit();
}