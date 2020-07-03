#include<stdio.h>
#include<conio.h>
#include<string.h>

char pl1[10],pl2[10],b[]="123456789";

void bg()
{
     printf("\n\n\n\n\n\n\t\t\t\t\t\t%c | %c | %c",b[0],b[1],b[2]);
     printf("\n\t\t\t\t\t\t--|---|--");
     printf("\n\t\t\t\t\t\t%c | %c | %c",b[3],b[4],b[5]);
     printf("\n\t\t\t\t\t\t--|---|--");
     printf("\n\t\t\t\t\t\t%c | %c | %c\n",b[6],b[7],b[8]);
}

void mark(int k)
{
     if(k%2==0)
                    printf("\n%s, Enter no. 2 mark:",pl1);
     else
                    printf("\n%s, Enter no. 2 mark:",pl2);
}

int win()
{
    if(b[0]==b[1] && b[1]==b[2])
    return 1;
    else if(b[3]==b[4] && b[4]==b[5])
    return 1; 
    else if(b[6]==b[7] && b[7]==b[8])
    return 1;
    else if(b[0]==b[3] && b[3]==b[6])
    return 1; 
    else if(b[1]==b[4] && b[4]==b[7])
    return 1;
    else if(b[2]==b[5] && b[5]==b[8])
    return 1; 
    else if(b[0]==b[4] && b[4]==b[8])
    return 1;
    else if(b[2]==b[4] && b[4]==b[6])
    return 1;
    else
    return 0;
}                         

int main()
{
    int o,k=0,i,j,a;
    char m,n,p1[]="Player 1",p2[]="Player2",c[]="123456789",xo[]="XO",own[]="Pratik.A.Bhudke",pass[10];
    printf("Final X&0 GAME [Version 1.00]\nCopyright (c) 2013 pRaTiK bHuDkE.  All rights reserved.");
    printf("\n\n\nEnter Password:");
    for(i=0;i<6;i++)
    {
                    pass[i]=getch();
                    printf("*");
    }
    if(strncmp(pass,own,6)==0)
    {      
    printf("\n\n\n\t\a\t\a\t\aX & O");
    printf("\n\n1) Quick Play\n2) Tournament\nEnter Option:");
    scanf("%d",&o);
    if(o==2)
    {
            printf("\nPlayer1:");
            scanf("%s",&pl1);
            printf("\nPlayer2:");
            scanf("%s",&pl2);
    }
    else
    {
        strcpy(pl1,p1);
        strcpy(pl2,p2);
    }
L1:    for(j=0;j<=9;j++)
    {
                    if(j==9)
                  {
                          bg();
                          printf("\n\n\n\a\a\a\a\a\t\t\t\tGame Draw");
                          goto L2;
                  }
    bg();
    mark(k);
    n=getche();
    for(i=0;i<9;i++)
    {
                  
                  if(b[i]==n && k%2==0 && b[i]!=xo[1])
                  {           
                             b[i]=xo[0];
                             break;
                  }
                  if(b[i]==n && k%2==1 && b[i]!=xo[0])
                  {                          
                             b[i]=xo[1];
                             break;
                  }
                  
                          
    }
    a=win();
    if(a==1)
    {
            bg();
            break;
    }
    k++;              
    }
    if(a==1 && b[i]==xo[0])
    printf("\n\n\n\a\a\a\a\a\t\t\t\t%s Wins",pl1);
    if(a==1 && b[i]==xo[1])
    printf("\n\n\n\a\a\a\a\a\t\t\t\t%s Wins",pl2);
L2:    printf("\n\n\n\n\nDo u want 2 play again???\n1) YES\n2) NO\nEnter Option:");
    m=getche();
    if(m=='1')
    {
              strcpy(b,c);
              goto L1;
    }          
    else
    printf("\n\n\n\t\t\tThanks for Playing.\n\t\t\tHope You Liked It....!!!!!");
    printf("\n\n\n\n\t\t\t\t\t\t\tApp. Developer\n\t\t\t\t\t\t\t- %s",own);
    }
    else
    printf("\a\nWrong Password");
    getch();
    return 0;
}
