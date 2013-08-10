#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (int argc, char* argv[]) {
   if(argc == 4)
   {
      ifstream infile(argv[1]);
      ofstream outfile(argv[2]);
      int nspaces = strtol(argv[3], 0, 10);
      if(infile.is_open() && outfile.is_open())
      {
         char c;         
         while(infile.get(c))
         {
            if(c == '\t')
            {
               for(int i = 0; i < nspaces; i++)
               {
                  outfile << ' ';
               }
            }
            else
            {
               outfile << c;
            }
         }
         infile.close();
         outfile.close();
      }
      else
      {
         cout << "Unable to open files" << endl;
      }
   }
   else
   {
      cout << "Use: tabtospace [infile] [outfile] [nspaces]" << endl;
   }
   return 0;
}

