#include <iostream>
using namespace std;

int main() {
   int jogos = 6;
   int grupo;
   int vitorias = 0;
   char vitoria = 'V';
   char derrota = 'P';
   char vOUp[6];

   for (int i = 0; i < jogos; i++) {
    cin>>vOUp[i];
    if (vOUp[i] == vitoria) {
        vitorias++;
    }
   }

   if (5<=vitorias) {
    grupo=1;
   }
   else if (3<=vitorias) {
    grupo=2;
   }
   else if (1<=vitorias) {
    grupo=1;
   }
   else {
    grupo=(-1);
   }

   cout<<grupo;
   return 0;
}
