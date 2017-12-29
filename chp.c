#include"types.h"
#include"stat.h"
#include"fcntl.h"
#include"user.h"


int main(int argc,char *argv[])
{
  int pid, priority;


  if(argc <3){
    printf(2, "pattern: chp pid priority\n");
    exit();
  }
  pid=atoi(argv[1]);
  priority=atoi(argv[2]);
  if(priority < 0 || priority > 20) {
    printf(2,"Not in range <0 to 20>\n");
    exit();
  }
  printf(1,"pid = %d, priority=%d\n",pid,priority);
  chpy(pid, priority);
  exit();
}
