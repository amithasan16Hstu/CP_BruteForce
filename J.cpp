#include <bits/stdc++.h>
using namespace std;

void J()
{
   char grid[3][3];

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> grid[i][j];
      }
   }

   set<char> allLetters = {'A', 'B', 'C'};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (grid[i][j] == '?')
         {

            set<char> rowLetters, colLetters;

            for (int k = 0; k < 3; k++)
            {
               if (grid[i][k] != '?')
               {
                  rowLetters.insert(grid[i][k]);
               }
            }

            for (int k = 0; k < 3; k++)
            {
               if (grid[k][j] != '?')
               {
                  colLetters.insert(grid[k][j]);
               }
            }

            for (char letter : allLetters)
            {
               if (rowLetters.find(letter) == rowLetters.end() && colLetters.find(letter) == colLetters.end())
               {
                  cout << letter << endl;
                  return;
               }
            }
         }
      }
   }
}

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      J();
   }
}
