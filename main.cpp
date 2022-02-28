#include <iostream>
#include <stdlib.h>
using namespace std;

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
void Draw()
{
     system("cls");
     cout << "Tris "<< endl;
     for(int i=0; i <3; i++)
     {
             for(int j=0; j <3; j++)
             {
                     cout << matrix[i][j] <<" " ;
             }
             cout << endl;
     }
}
void Input()
{
     int a;
     cout << "Scrivi un numero per marcarlo:" ;
     cin >> a;

     if (a == 1)
     matrix[0][0] = player;
     if (a == 2)
     matrix[0][1] = player;
     if (a == 3)
     matrix[0][2] = player;
      if (a == 4)
     matrix[1][0] = player;
     if (a == 5)
     matrix[1][1] = player;
     if (a == 6)
     matrix[1][2] = player;
       if (a == 7)
     matrix[2][0] = player;
     if (a == 8)
     matrix[2][1] = player;
     if (a == 9)
     matrix[2][2] = player;
}
void AltroGiocatore()
{
     if (player =='X')
        player = '0';
     else
        player = 'X';
}
char Win()
{
     //first player

     if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
     if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
     if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

     if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
     if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
     if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

     if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
     if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

     //second player

     if (matrix[0][0] == '0' && matrix[0][1] == '0' && matrix[0][2] == '0')
        return '0';
     if (matrix[1][0] == '0' && matrix[1][1] == '0' && matrix[1][2] == '0')
        return '0';
     if (matrix[2][0] == '0' && matrix[2][1] == '0' && matrix[2][2] == '0')
        return '0';

     if (matrix[0][0] == '0' && matrix[1][0] == 'X' && matrix[2][0] == '0')
        return '0';
     if (matrix[0][1] == '0' && matrix[1][1] == 'X' && matrix[2][1] == '0')
        return '0';
     if (matrix[0][2] == '0' && matrix[1][2] == 'X' && matrix[2][2] == '0')
        return '0';

     if (matrix[0][0] == '0' && matrix[1][1] == '0' && matrix[2][2] == '0')
        return 'X';
     if (matrix[2][0] == '0' && matrix[1][1] == '0' && matrix[0][2] == '0')
        return '0';

     return '/';

}
int main()
{

    Draw();
    while (1)
    {
          Input();
          Draw();
          if(Win() == 'X')
          {
                   cout <<"X ha vinto!" << endl;
                   break;
          }
          else if (Win() =='0')
          {
               cout << "0 ha vinto!" << endl;
               break;
          }
          AltroGiocatore();
    }
    system("pause");
    return 0;
}
