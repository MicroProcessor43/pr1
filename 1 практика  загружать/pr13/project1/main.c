#include <8051.h>  //???????????

void main() //??????? ???????, ?????

{
int i;
char xdata *ptr; //?????????  ??  ?????

char test, nabor;
nabor = 0xAA;  //???????? ?????
ptr = (char xdata *) 0x300;  //?????????  ?????

for(i=0; i<1024;i++) //????????  1024  ?????

{
*ptr=nabor; //? ?????? ?????? ??????

test=*ptr;  //??????????  test

if(test!=nabor)
{
break;  //?  ??????  ??????  ????

}
ptr++;
}
}