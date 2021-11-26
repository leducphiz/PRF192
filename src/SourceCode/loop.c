# include <stdio.h>


int main()
{
	char choice;
    printf("Do you want to enter more employees? (Y/N) :");
    do
    {
          
          
		  while(getchar() != '\n') continue;
		  scanf ("%c",&choice);
          printf ("try again");
    }while (( choice != 'N') || (choice != 'Y'));
	system("pause");
    return 0;
}
