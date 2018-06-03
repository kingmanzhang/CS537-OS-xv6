#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  uint nosyscallsread = getreadcount();
  printf(1, "no. of system calls to read since current boot: %d\n", nosyscallsread );
}
