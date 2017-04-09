#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main(int argc, char* argv[])
{
  int fd;
  fd = open("/dev/sleepy9", O_RDONLY);
  if(fd < 0)
  {
    printf("Unable to open\n");
    return -1;
  }
  char b[1];
  while(1)
  {
    write(fd,&sleepNumber,4);
    if(read(fd,b,1) <0)
    {
      printf("ERROR while reading.\n");
    }
    else
    {
      printf("%d\n",b[0]);
    }
  }
  return 0;
}
