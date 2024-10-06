#include <iostream>
#include <stdlib.h>
#include <time.h>
#define Size 50
using namespace std;
///Karlovasi int, Bathi char ,Pythagoreio float
template<typename B>
class Average{
private: float Av=0;
public:
Average(B* pointer,int siz){
    int i;
for(i=0;i<siz;i++,pointer++){
Av=Av+*pointer;
//cout<<endl <<*pointer;
}
Av=Av/siz;
cout<<"\nThe Average is \n" <<Av;
}

};
template<>
class  Average <char>  {
private: float Av=0;
public:
Average(char* pointer,int siz){
    int i;
for(i=0;i<siz;i++,pointer++){
Av=Av+char_to_int(*pointer);
//cout<<endl <<char_to_int(*pointer);
}
Av=Av/siz;
cout<<"\nThe Average is \n" <<Av;
}
int char_to_int(char c){
switch(c){
case 'A':

    return 1;
case 'B':

    return 2;
case 'C':

    return 3;
case 'D':

    return 4;
case 'E':

    return 5;
default:
    cout<<"\n\nERROR 913232 WRONG INPUT ONLY FROM A TO B \n\n";
}
}
};
int Karlovasi[Size];
char Bathi[Size];
float Pythagoreio[Size];


int main()
{int* p,i;
char*c;
float*f;
srand(time(NULL));
for(i=0;i<Size;i++){
Karlovasi[i]=rand()%5+1;
Pythagoreio[i]=rand()%5+1;
Bathi[i]=rand()%5+'A';
}
p=Karlovasi;
cout<<"Karlovasi average:\n";
    Average <int> Karl(p,Size);
    c=Bathi;
cout<<"\nBathi average:\n";
    Average <char> Bath(c,Size);
    f=Pythagoreio;
cout<<"\nPythagoreio average:\n";
    Average <float> Pyth(f,Size);
    return 0;
}
