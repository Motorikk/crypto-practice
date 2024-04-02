#include <stdio.h>

int main()
{
  int userValue;

  int a;
  int b;
  float result;
  
  
  printf("Яку операцію виконати?\n");
  printf("1 - Додавання\n");
  printf("2 - Віднімання\n");
  printf("3 - Ділення\n");
  printf("4 - Множення \n");
  printf("5 - Ділення з остачею\n");
  scanf("%d", & userValue);
  if (userValue< 1|| userValue >5)
  {
   printf("Помилка:Введіть число від 1 до 5\n");
   return 1;
  }
  
  printf("Введіть число:\n");
  scanf("%d",&a );
  printf("Введіть число:\n");
  scanf("%d",&b );

  if(userValue==1){
    result=a+b;
    printf("Результат:" "%f\n", result);
  }
  if(userValue==2){
    result=a-b;
    printf("Результат:" "%f\n", result);
  }
  if(userValue==3){
    result=a/(float)b;
    printf("Результат:" "%f\n", result);
  }
  if(userValue==4){
    result= a*b;
    printf("Результат:" "%f\n", result);
  }
  if(userValue==5){
    result=a%b;
    printf("Результат:" "%f\n", result);

  }
    
  return 0;

} 