#include<stdio.h>
#include<conio.h>
int main(){
    // Checking Upper Case And Lower Case Letter

char ch;
printf("Enter A Letter: ");
scanf("%c", &ch);

  if(ch >= 'a' && ch <= 'z'){
    printf("It's A Lower Case Letter \n");
  }else if (ch >= 'A' && ch <= 'Z'){
    printf("It's A Upper Case Letter \n");
  }else {
    printf("Not A Valid English Letter !! \n");

}
getch();
return 0;
}
