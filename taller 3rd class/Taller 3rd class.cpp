// Ejercicio 1 - programa que sume, reste, multiplique, divida y %
#include <iostream>
using namespace std;

int main(){
int x;
int z;
int sum;
float divide;
int minus;
int multiply;

cout<<"Ex 1"<<endl;
cout<< "Enter first number" << endl;
cin>>x;
cout<< "Enter second number" << endl;
cin>>z;
sum=x+z;
cout<<"This is the sum of your numbers"<<endl;
cout<<sum<<endl;
minus=x-z;
cout<<"This is the substraction from your numbers"<<endl;
cout<< minus <<endl;
multiply =x*z;
cout<<"This is the multiplication of numbers"<<endl;
cout<< multiply <<endl;
divide=x/z;
cout<<"This is the division of your numbers"<<endl;
cout<< divide <<endl;

// Ex 2 an item with discount of 15%

float Discount;
double Value;
double Price;
double Discounted;

cout<<"Ex 2"<<endl;
Discount=15.00/100.00;
cout<< "This is the full value for the product"<<endl;
cin>>Value;
Discounted= Discount * Value;
Price =Value-Discounted;
cout<< "This is the final price"<<endl;
cout<< Price<<endl;

//Ex 3 for a value 10 add 5, minus 3, multiply 2, divide in 4

int initial;
cout<<"Ex 3"<<endl;
cout<< "Initial value is 10"<<endl;
initial=10;
sum=initial+5;
cout<< "Add 5"<<endl;
cout<<sum<<endl;
minus=sum-3;
cout<< "substract 3"<<endl;
cout<<minus<<endl;
multiply=minus*2;
cout<< "multiply it by 2"<<endl;
cout<<multiply<<endl;
divide=multiply/4;
cout<< "divide it by 4"<<endl;
cout<<divide<<endl;

return 0;

}
