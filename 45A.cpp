#include <bits/stdc++.h>

using namespace std;


int main(void){

    string Berland,Birland;
    // string s(10,'a');

    std :: cin >> Berland >> Birland;

   reverse(Birland.begin(), Birland.end());

   if(Berland == Birland){

        std:: cout << "YES";

        return 0;

   }

   std :: cout << "NO" << endl;

   return 0;

    
}
