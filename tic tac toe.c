#include<stdio.h>
main()
{
    int win=0,i,j,k,player=1,row,col,loop=0,sel,position;
    char a[2]={'X','O'},b,c[3][3];
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            c[j][k]='-';
        }
    }
    printf("........Welcome to Tic Tac Tae World........\n");
    printf(".................Game Start.................\n");
    printf("select your choice for 1st player (X or O) :\n");
    scanf("%c",&b);
    while(b!=a[0]&&b!=a[1])
    {
        printf("you enter invalid key please enter valid key again:\n");
        scanf("%c",&b);
    }
    b==a[0]?printf("you select X for 1st and O for 2nd player :\n"):printf("you select O for 1st and X for 2nd player :\n");
    b==a[0]?(sel=0):(sel=1);
    printf("For player knowledge game theme like this...\n ");
    for(j=0;j<3;j++){
        for(k=0;k<3;k++){
        printf("  %c",c[j][k]);
        }
        printf("\n");
    }
    printf("\n................................................................................\n");
    while(win==0&&loop<9)
    {
        loop+=1;
         sel=sel%2;
        player==3?(player=1):(player=player%3);
         printf("enter the position for %d player from(1 to 9):\n",player);
         scanf("%d",&position);
         if(position<4)
         {
             row=0;
             col=position-1;
         }
         else
         {
             if(position<7)
             {
                 row=1;
                 col=position%4;
             }
             else
             {
                 row=2;
                 col=position%7;
             }
         }
         printf("%d %d",row,col);
         player+=1;
         c[row][col]=a[sel];
         sel+=1;
         printf("your game \n");
         for(j=0;j<3;j++)
         {
             for(k=0;k<3;k++)
             {
                 printf("  %c",c[j][k]);
             }
             printf("\n");
         }
         if((c[0][0]==a[0]&&c[1][1]==a[0]&&c[2][2]==a[0])||(c[0][0]==a[1]&&c[1][1]==a[1]&&c[2][2]==a[1])
            ||(c[0][2]==a[0]&&c[1][1]==a[0]&&c[2][0]==a[0])||(c[0][2]==a[1]&&c[1][1]==a[1]&&c[2][0]==a[1]))
         {
             win=1;
         }
         else
        {
         for(j=0;j<3;j++)
         {
             if((c[j][0]==a[0]&&c[j][1]==a[0]&&c[j][2]==a[0])||(c[0][j]==a[0]&&c[1][j]==a[0]&&c[2][j]==a[0])
                ||(c[j][0]==a[1]&&c[j][1]==a[1]&&c[j][2]==a[1])||(c[0][j]==a[1]&&c[1][j]==a[1]&&c[2][j]==a[1]))
             {
                 win=1;
                 break;
             }
         }
        }
    }
    player-=1;
       player==3?(player=1):(player=player%3);
    win==1?printf("Player %d win\n",player):printf("No result\n");
}
