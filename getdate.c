#include"types.h"
#include"user.h"
#include"date.h"

int main(int argc,char *argv[])
{
  struct rtcdate rdate;
  //get date fail!
  if(showdate(&rdate)){
    printf(2,"try to get date failed...\n");
    exit();
  }


  //UTC time + 8
  printf(2,"Time in Taiwan:%d,%d/%d,%d:%d:%d",rdate.year,rdate.month,rdate.day
  ,rdate.hour+8,rdate.minute,rdate.second);
 
  exit();
}
