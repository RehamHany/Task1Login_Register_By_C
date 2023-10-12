#include <stdio.h>

#include <stdbool.h>


int main(void)
{

    printf("In Case You Want To Sign In ,Press 1 If You Want To Create New Account ,Press 2 :\n");
    char num[2];
    gets(num);
    // int num = 1;
    char UserName[10] = "rehamHany";
    char passWord[5] = "1234";

    if (num[0] == '1')
    {
        char User[10];
        char pass[5];
        printf("please enter User Name : \n");
        gets(User);
        printf("please enter passWord : \n");
        gets(pass);
        bool f = true, b = true;
        for (int i = 0; i < 10; i++)
        {
            if (User[i] != UserName[i])
            {
                f = false;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (pass[i] != passWord[i])
            {
                b = false;
            }
        }
        if (f == true && b == true)
        {
            printf("Sign in Successfully");
        }
        else
        {
            printf("Sign in failed ,Please enter valid userName ,passWord\n");
        }
    }
    else if (num[0] == '2')
    {
        printf("please enter User Name : \n");
        gets(UserName);
        printf("please enter passWord : \n");
        gets(passWord);
        printf("Registration successfull");
    }
    else
    {
        printf("please enter 1 to sign in or enter 2 to create new account\n");
    }
    return 0;
}