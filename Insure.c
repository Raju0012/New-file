
int main(){
char marital_status , sex;
  int age;
  printf("enter the age of the person");
 scanf("%d",&age);
 printf("enter the sex =");
  scanf("%c",&sex);
  printf("enter marital status");
 scanf("%c",&marital_status);

  while(age>=18){
 
  if (marital_status  == 'm' || (sex == 'm' && marital_status == 'u' && age>30) || (sex == 'f' && marital_status =='u' && age>25))
 	printf("insurerd");

 	else
 	printf("not insured");}
return 0;
}
