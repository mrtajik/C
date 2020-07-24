/* typedef in C */


#include <stdio.h>
#include <string.h>
 
typedef struct student 
{
  int id;
  char name[20];
  float percentage;
} status;
 
int main(int argc, char const *argv[])
{
  status record;
  record.id=1;
  strcpy(record.name, "Max");
  record.percentage = 96.5;
  printf("         Id is: %d \n", record.id);
  printf("       Name is: %s \n", record.name);
  printf(" Percentage is: %f \n", record.percentage);
  return 0;
}