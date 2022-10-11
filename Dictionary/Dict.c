#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<curses.h>
#include<unistd.h>


int prefer;
char choice2;
void welcome_to_app();
int preferred_dict();
void menu_choice();
void exit_message();
char add_word(char x[],char y[], int z);
char search_word(char line[], int z);


int main()
{

    char word[100], meaning[100], search[100];
    int choice;
    char key;
    welcome_to_app();
    prefer = preferred_dict();
    while(1)
    {
        printf("\n Menu to choose from: \n");
        printf("\n\t 1. Add word\n");
        printf("\n\t 2. Search word\n");
        printf("\n\t 0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                add_word(word, meaning, prefer);
                system("clear");
                menu_choice();
                break;

            case 2:
                while(1)
                {
                    printf("\nEnter the word you want to search: ");
                    scanf(" %[^\n]", &search);
                    printf("You entered: %s\n\n", search);
                    choice2 = search_word(search, prefer);
                    if(choice2 == 'y')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                printf("\n");
                sleep(1);
                system("clear");
                menu_choice();
                break;

            case 0:
                exit_message();
                sleep(1);
                exit(0);

            default :
                while(1)
                {
                    printf("Wrong choice!!!\n");
                    printf("To return to the main menu press E: ");
                    scanf(" %c",&key);
                    if(key=='E')
                    {
                        system("clear");
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
        }
    }
    return 0;
}


void welcome_to_app()
{
    printf("\n\t----------------------------\n");
    printf("\tWELCOME TO MY DICTIONARY APP\n");
    printf("\t----------------------------\n");
}



int preferred_dict()
{
    printf("\n Which dictionary would you prefer? \n\n");
    printf("\t 1. Bangla to English\n\n");
    printf("\t 2. English to Bangla\n\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&prefer);
        printf("\n");
        if(prefer == 1)
        {
            sleep(1);
            system("clear");
            printf("\n\t----------------------------\n");
            printf("\tBANGLA TO ENGLISH DICTIONARY\n");
            printf("\t----------------------------\n");
            break;
        }
        else if(prefer == 2)
        {
            sleep(1);
            system("clear");
            printf("\n\t----------------------------\n");
            printf("\tENGLISH TO BANGLA DICTIONARY\n");
            printf("\t----------------------------\n");
            break;
        }
        else
            printf("Wrong choice!!! Try again.\n\n");
    }
    return prefer;
}


void menu_choice()
{
    int choice;
    while(1)
    {
        printf("What do you want to do now? \n\n");
        printf("\t 1. Return to the main menu\n\n");
        printf("\t 2. Switch dictionary option\n\n");
        printf("\t 3. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            sleep(1);
            system("clear");
            break;
        }
        else if(choice == 2)
        {
            prefer = preferred_dict();
            break;
        }
        else if(choice == 3)
        {
            exit_message();
            sleep(1);
            exit(0);
        }
        else
        {
            printf("\nWrong choice!!! Try again.\n");
            sleep(1);
            system("clear");
            continue;
        }
    }
}


void exit_message()
{
    printf("\nThanks for using this dictionary app.\n");
}

char add_word(char x[],char y[], int z)
{
    FILE *file_ptr;
    char choice;
    char a[100],b[100];
    if(z==1)
    {
        file_ptr = fopen("Bangla_words.txt", "a");
    }
    else
    {
        file_ptr = fopen("English_words.txt", "a");
    }
    printf("\nEnter the word you want to add: ");
    while(scanf("%s",a)!=EOF)
    {
        printf("Enter the meaning of the word: ");
        scanf("%s", b);
        fprintf(file_ptr,"%s = %s\n", a, b);
        printf("The word shall be like --> %s = %s\n", a, b);
        printf("\nWanna add more words? (y/n) ");
        scanf(" %c",&choice);
        if(choice == 'y')
        {
            printf("\nEnter the word you want to add: ");
            continue;
        }
        else
        {
            break;
        }
    }
    fclose(file_ptr);
}


char search_word(char line[], int z)
{
    FILE *file_ptr = NULL;
    char new_line[100];
    int flag = 0, len1, len2, i, j;
    len1 = strlen(line);
    if(z==1)
    {
        file_ptr = fopen("Bangla_words.txt", "a+");
    }
    else
    {
        file_ptr = fopen("English_words.txt", "a+");
    }
    if(file_ptr == NULL)
    {
        printf("File does not open successfully.\n");
    }

    while(!feof(file_ptr))
    {
        fgets(new_line, 100, file_ptr);
        len2 = strlen(new_line);
        for(i=0;i<len1;i++)
        {
            if(line[i]!=new_line[i])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if(flag == 1 && new_line[i]==' ')
        {
            printf("Found: %s\n", new_line);
            break;
        }
    }
    if(flag == 0)
    {
        printf("Word not found!!\n");
    }
    fclose(file_ptr);
    printf("\nWanna search more words? (y/n) ");
    scanf(" %c",&choice2);
    return choice2;
}
