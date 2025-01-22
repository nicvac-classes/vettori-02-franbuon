#include <iostream>
using namespace std;

int main() {
   int N, I;
   cout<<"Quanti studenti ci sono in una classe?"<<endl;
   cin>>N;
   string nomi[N];
   int assenze[N];
   float voti[N];
   string V;
   I=0;
   while(I<N)
   {
    cout<<"Come si chiama il "<<I+1<<"° studente?"<<endl;
    cin>>nomi[I];
    cout<<"Che voto ha?"<<endl;
    cin>>voti[I];
    cout<<"Quante assenze ha?"<<endl;
    cin>>assenze[I];
    I=I+1;
   }
   I=0;
   while(I<N)
   {
    cout<<"Il "<<I+1<<"° studente si chiama "<<nomi[I]<<endl;
    cout<<"Ha "<<voti[I]<<" come voto"<<endl;
    cout<<"Ha "<<assenze[I]<<assenze<<endl;
    I=I+1;
   }
   cout<<"Di quale studente vuoi sapere?"<<endl;
   cin>>I;
   cout<<"Il "<<I+1<<"° studente si chiama "<<nomi[I]<<endl;
   cout<<"Ha "<<voti[I]<<" come voto"<<endl;
   cout<<"Ha "<<assenze[I]<<" assenze"<<endl;
   cout<<"Dimmi un nome di uno studente"<<endl;
   cin>>V;
   while(V!=nomi[I])
   {
    I=I+1;
   }
   cout<<"Il suo voto è "<<voti[I]<<","<<endl;
   cout<<"e ha fatto "<<assenze[I]<<" assenze"<<endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
