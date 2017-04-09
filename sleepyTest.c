#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int fd;
  fd = open("/dev/sleepy9", O_WRONLY);
  if(fd < 0)
  {
    printf("Unable to open\n");
    return -1;
  }
  int sleepNumber;
  sleepNumber = 5;
  int ret;
  ret = write(fd,&sleepNumber,4);
  if(ret < 0)
  {
    printf("Could Not Write\n");
  }
  return 0;
}
