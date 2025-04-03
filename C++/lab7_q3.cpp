#include<iostream>
using namespace std;
struct Rational{
    int numerator;
    int denominator;
};
int gcd(int x,int y){
    x=abs(x);
    y=abs(y);
    int m = x%y;
    while(m!=0){
    x=y;
    y=m;
    m=x%y;
    }
    return y;
}
Rational addRat(Rational m,Rational l){
Rational k;
int r = gcd(m.numerator,m.denominator);
int x = gcd(l.numerator,l.denominator);
m.numerator=(m.numerator)/r;
m.denominator=(m.denominator)/r;
l.numerator=(l.numerator)/x;
l.denominator=(l.denominator)/x;
k.numerator=(m.numerator)*(l.denominator)+(m.denominator)*(l.numerator);
k.denominator=(m.denominator)*(l.denominator);
int t=gcd(k.numerator,k.denominator);
k.denominator=k.denominator/t;
k.numerator=k.numerator/t;
if(k.denominator<0){
    k.denominator=-k.denominator;
    k.numerator=-k.numerator;
}
return k;
}
Rational subRat(Rational m,Rational l){
Rational k;
int r = gcd(m.numerator,m.denominator);
int x = gcd(l.numerator,l.denominator);
m.numerator=(m.numerator)/r;
m.denominator=(m.denominator)/r;
l.numerator=(l.numerator)/x;
l.denominator=(l.denominator)/x;
k.numerator=(m.numerator)*(l.denominator)-(m.denominator)*(l.numerator);
k.denominator=(m.denominator)*(l.denominator);
int t=gcd(k.numerator,k.denominator);
k.denominator=k.denominator/t;
k.numerator=k.numerator/t;
if(k.denominator<0){
    k.denominator=-k.denominator;
    k.numerator=-k.numerator;
}
return k;
}
Rational mulRat(Rational m,Rational l){
Rational k;
int r = gcd(m.numerator,m.denominator);
int x = gcd(l.numerator,l.denominator);
m.numerator=(m.numerator)/r;
m.denominator=(m.denominator)/r;
l.numerator=(l.numerator)/x;
l.denominator=(l.denominator)/x;
k.numerator=(m.numerator)*(l.numerator);
k.denominator=(m.denominator)*(l.denominator);
int t=gcd(k.numerator,k.denominator);
k.denominator=k.denominator/t;
k.numerator=k.numerator/t;
if(k.denominator<0){
    k.denominator=-k.denominator;
    k.numerator=-k.numerator;
}
return k;
}
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
Rational m;
m.numerator=a;
m.denominator=b;
Rational l;
l.numerator=c;
l.denominator=d;
Rational r = addRat(m,l);
Rational y = subRat(m,l);
Rational w = mulRat(m,l);
cout<<r.numerator<<" "<<r.denominator<<endl;
cout<<y.numerator<<" "<<y.denominator<<endl;
cout<<w.numerator<<" "<<w.denominator<<endl;
}