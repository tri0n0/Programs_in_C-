//This is a program that provide most of the functions you would need in a real world.



#include<stdio.h>

int matrix_display()
{
    int r = 0 ,c = 0;
    printf(" Enter the matrix details. ");
    printf(" \nEnter the row size of the matrix: ");
    scanf("%d",&r);
    printf(" \n Enter the column size of the matrix: ");
    scanf("%d",&c);
    int a[r][c];
        printf(" Enter the elements of the matrix: ");
        for(int i = 0; i < r; i++)
        {
             for(int j = 0; j < c; j++)
            {
                 scanf("%d",&a[i][j]);
            }
        }
        printf(" The elements are: \n");
        for(int i = 0; i < r; i++)
        {
             printf("\n");
             for(int j = 0; j < c; j++)
            {
                 printf("%d\t",a[i][j]);
            }
        }
}
    int matrix_add()
    {
        int r = 0 ,c = 0;
        printf(" Enter the matrix details. ");
        printf(" \nEnter the row size of the 1st matrix: ");
        scanf("%d",&r);
        printf(" \n Enter the column size of the matrix: ");
        scanf("%d",&c);
        int a[r][c];
        printf(" Enter the elements of the 1st matrix: ");
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                     scanf("%d",&a[i][j]);
                }
            }
            int b[r][c],sum[r][c];
            printf(" Enter the elements of the 2nd matrix: ");
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
                        for(int i = 0; i < r; i++)
                        {
                            for(int j = 0; j < c; j++)
                            {
                                    sum[i][j] = a[i][j]+b[i][j];
                            }
                        }
        //displaying the sum
         for(int i = 0; i < r; i++)
        {
             for(int j = 0; j < c; j++)
            {
                printf("%d\t",sum[i][j]);
            }
        }
}
int matrix_sub()
{
    int r = 0 ,c = 0;
    printf(" Enter the matrix details. ");
    printf(" \nEnter the row size of the 1st matrix: ");
    scanf("%d",&r);
    printf(" \n Enter the column size of the matrix: ");
    scanf("%d",&c);
    int a[r][c];
        printf(" Enter the elements of the 1st matrix: ");
        for(int i = 0; i < r; i++)
        {
             for(int j = 0; j < c; j++)
            {
                 scanf("%d",&a[i][j]);
            }
        }
                    int b[r][c],sub[r][c];
                    printf(" Enter the elements of the 2nd matrix: ");
                    for(int i = 0; i < r; i++)
                    {
                        for(int j = 0; j < c; j++)
                        {
                             scanf("%d",&b[i][j]);
                        }
                    }
                            for(int i = 0; i < r; i++)
                            {
                                    for(int j = 0; j < c; j++)
                                    {
                                             sub[i][j] = a[i][j]-b[i][j];
                                    }
                            }
        //displaying the result
         for(int i = 0; i < r; i++)
        {
             for(int j = 0; j < c; j++)
            {
                printf("%d\t",sub[i][j]);
            }
        }
}

int fibo()
{
    int lim,i,x = 0,y = 1,z = 0;
    printf(" Enter the limit: ");
    scanf("%d",&lim);
    printf("%d\n%d\n",x,y);
        while(z<lim)
        {
            z = x+y;
            printf("%d\n",z);
            x = y;
            y = z;   
        }
}

int circle()
{
    float circum,r,area = 0.0;
    printf(" Enter the radius: ");
    scanf("%f",&r);
    //calculating the circumference 
                circum = 2*3.14*r
                area = 3.14*r*r;
                        printf(" The circumference of the circle is: %f",circum);
                        printf("\n The area of the circle is: %f",area);
}

int fahrenheittocelcius()
{
    float f,c = 0.0;
    cout<<" Enter the temparature in fahrenheit: ";
    cin>>f;
    c = (f-32)*0.5;
    cout<<" Temp in celcius is: "<<c;
}

char string()
{
    char s;
    printf(" Enter the string: ");
    scanf("%s",&s);
    printf(" The string you have entered is: %s",s);
}









int main()

{
    int ch;char ch1,ch2,ch3,ch4,ch5,ch6,ch7;
    printf(" \nEnter your choice according to options below. ");
    printf(" \n1. Display of the matrix.");
    printf(" \n2. Addtion of the matrix.");
    printf(" \n3. Subtraction of the matrix.");
    printf(" \n4. For Showing the fibonacci series.");
    printf(" \n5. Calculation of the area and the cicumference of a circle. ");
    printf(" \n6  Fahrenheit to Celcius.");
    printf(" \n7. Enter a string and show the output.");
    printf(" \nEnter your choice here: ");
    scanf("%d",&ch);
    switch(ch)
    {
        
        case 1: 
                    a:
                    matrix_display();
                    a1:
                    printf(" \nWant to display more matrices?");
                    printf(" Enter 'y' for yes 'n' for no: ");
                    scanf("%c",&ch1);
                    if(ch1 == 'y')
                    {
                        goto a;
                    }
                            else if(ch1 == 'n')
                            {
                                printf(" Exiting the program.");
                            }
                                    else 
                                    {
                                            printf(" Enter again!!");
                                            goto a1;
                                    }
                    break;
                    
        case 2:     
                    b:
                    matrix_add();
                    b1:
                    printf(" Want to display more summation?");
                    printf(" Enter 'y' for yes 'n' for no: ");
                    scanf("%c",&ch1);
                    if(ch1 == 'y')
                    {
                        goto b;
                    }
                            else if(ch2 == 'n')
                            {
                                printf(" Exiting the program.");
                            }
                                    else 
                                    {
                                            printf(" Enter again!!");
                                            goto b1;
                                    }
                    break;
        case 3:
                    c:
                    matrix_sub();
                    c1:
                    printf(" \nWant to display more results?");
                    printf(" \nEnter 'y' for yes 'n' for no: ");
                    scanf("%c",&ch1);
                    if(ch1 == 'y')
                    {
                        goto c;
                    }
                            else if(ch3 == 'n')
                            {
                                    printf(" \nExiting the program.");
                            }
                                    else 
                                    {
                                            printf(" \nEnter again!!");
                                            goto c1;
                                    }
                    break;
        case 4:     
                    d:
                    fibo();
                    d1:
                    printf(" Do you want to display more of the series? If yes enter 'y' and if it is no then enter n: ");
                    scanf("%c",&ch4);
                    if(ch4 == 'y'||ch4 == 'Y')
                    {
                        goto d;
                    }
                                else if(ch4 == 'n'||ch4 == 'N')
                                {
                                        printf(" Exiting the program.");
                                }
                                        else
                                        {
                                                printf(" \nEnter again!");
                                                goto d1;
                                        }
                    break;
        case 5:     
                    e:
                    circle();
                    e1:
                    printf(" Want to calculate again? If yes enter y and n for no.: ");
                    scanf("%c",&ch5);
                    if(ch5 == 'y'||ch5 == 'Y')
                    {
                        goto e;
                    }
                            else if(ch5 == 'n'||ch5 == 'N')
                            {
                                printf(" Exiting the program.");
                            }
                                else
                                {
                                        printf(" Wrong Choice!! Enter again.");
                                        goto e1;
                                }
                    break;
        case 6:
                f: 
                fahrenheittocelcius();
                f1:
                printf(" Want to calculate again?If yes enter 'y' and 'n' for no.:");
                scanf("%c",&ch6);
                if(ch6 == 'y'||ch6 == 'Y')
                {
                    goto f;
                } 
                        else if(ch6 == 'n'||ch6 == 'N')
                        {
                            printf(" Exiting the program.");
                        } 
                                else
                                {
                                    printf(" Wrong Choice!! Enter again.");
                                    goto f1;
                                }
                break;

        case 7:
                g:
                string();
                g1:
                printf(" Do you want to enter string again?If yes enter 'y' and 'n' for no.: ");
                scanf("%c",&ch7);
                if(ch7 == 'y'||ch7 == 'Y')
                {
                    goto g;
                }
                        else if(ch7 == 'n'||ch7 == 'N')
                        {
                            printf(" Exiting the function.");
                        }
                                else
                                {
                                    printf(" Wrong Choice!!! Please enter again. ");
                                    goto g1;
                                }
                break;


        default: 
                    printf(" \nWrong Choice Entered.");
                    break;
    return 0;
    }
}
