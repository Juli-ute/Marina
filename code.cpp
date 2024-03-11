#include <iostream>
#include "easy.h"
using namespace std;
//1
void itc_name(){
cout << "Marina";
}

//2
void itc_fio(){
itc_name();
cout << " Roslova Necolaevna";

}

//3
int itc_abs(int ch){
int risult;
if(ch >= 0){
 return ch;
}
else{
    risult = ch * -1;
 return risult;
}
}

//4
double itc_fabs(double ch){
double risult;
if(ch >= 0){
 return ch;
}
else{
    risult = ch * -1;
 return risult;
}
}

//5
int itc_revnbr(int ch){
int a, b, c, risult;
a = ch%10;
ch = ch / 10;
b = ch % 10;
ch = ch / 10;
c = ch % 10;
risult = a * 100 + b * 10 + c;
return risult;
}
