#include"types.h"
#include"stat.h"
#include"fcntl.h"
#include"user.h"

int main(int argc,char *argv[])
{
  int id,n,k;
  double z=0.0,d,x=0.0;
  
  //import
  if(argc < 2)
    n = 1;	       //system default
  else
    n = atoi(argv[1]); //outer,that is command line

  if(n > 20 || n < 0)
    n = 2;

  if(argc < 3 )
    d = 1.0;
  else
    d = atoi(argv[2]);
  
  
  id = 0;
  x = 0;

  for(k=0; k < n; k++){
    id = fork();
    if(id < 0){
	printf(1,"%d fork is fail\n",getpid());
    }else if(id > 0){
	printf(1,"Parent is :%d , Child is:%d\n",getpid(),id);
	wait();
    }else{
	printf(1,"Child %d been created\n", getpid());
	for(;z < 9000000.0;z+=d)
	    x = x + 3.14 * 95.27;	//dummy CPU time
	break;
    }

  }
  exit();
}
