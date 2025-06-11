// #include<iostream> // library
// using namespace std;
// int main(){
//  std::cout<< "hey roli" << std::endl <<"hey ram" << std::endl;
// string str;
// getline(cin,str);
// cout<< str;

// include<bits/stdc++.h>    this will for all languages

//   int ,long, long long, float,double
// string and getline
// char

/* char ch;
 cin>>ch;
 cout<< ch;*/

// write a program it is adult is or not

// to avoid std multiple times used
// using namespace std;
// std:: endl   is used for output in next line

/*#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >>age;
    if (age >= 18)
    {
        cout << "you are adult";
    }
    else
    {
        cout << "you are not adult";
    }
}
*/
// schoole has following rules
// a. below 25-F
// b. 25 to 44 -E.....
/*#include <iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "grade is F";
    }
    else if (marks <= 44)
    {
        cout << " grade is E";
    }
    else if (marks <= 49)
    {
        cout << " grade is D";
    }                                        // and ki place pe && bhi
    else if (marks <= 59)
    {
        cout << " grade is C";
    }
    else if (marks <= 79)
    {
        cout<< " grade is B";
    }
    else if (marks <= 100)
    {
        cout << " grade is a";
    }
}
*/
/*#include <iostream>
using namespace std;
int main(){
    int age;

        cin >> (" age of candidate is --", age);
        if (age < 18)
        {
            cout << "not eligible for job";
        }
         if (age >= 18 && age< 55)
        {
            cout << "eligible for job";
        }
         if (age >=55 && age <=57)
        {
            cout << " eligible for job but retirement soon";
        }
        if (age >57)
        {
            cout << "  time of retirement";
        }
        return 0;
    }
        */

//    ********************************PATTERN *********************************************
/*  #include<iostream>
   using namespace std;
   void print(){
       for (int i = 0; i < 5; i++){
         for (int j = 0; j < 5; j++)
         {
           cout<< "* ";
         }
         cout<<endl;
       }

   }
   int main (){


           print();
   }*/

/*#include<iostream>
using namespace std;
void pattern(int n){
   for (int i = 0; i < n; i++){
       for( int j=0; j<=i ; j++){
           cout<< "*";
       }
       cout<< endl;
   }

}
int main(){
   int n ;
   cin>> n;
   pattern(n);


}*/
/* #include<iostream>
 using namespace std;
 void numpattern(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
          cout<<(j)<<" ";     // i different pattern
        }
        cout<< endl;
    }

 }
 int main(){
    int n;
    cin>>n;
    numpattern(n);
 }*/

/*#include<iostream>
using namespace std;
void starpattern(int n){
    for (int i = 1; i <= n; i++)
    {
      for (int j = 0; j <= n-i; j++)
      {
       cout<< "* ";
      }
      cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    starpattern(n);
}
*/

/*#include<iostream>
using namespace std;
void starpattern(int n){
    for (int i = 0; i <= n; i++)
    {
      for (int j = 1; j <= n-i; j++)
      {
       cout<< j << " ";
      }
      cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    starpattern(n);
}
    */

/*#include<iostream>
using namespace std;
void starpattern(int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j<n-i ; j++)
      {
            cout<<" ";
      }
      for (int j = 0; j< 2*i+1; j++)
      {
        cout<<"*";
      }

       for (int j = 0; j< n-i; j++)
      {
        cout<<" ";
      }
      cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    starpattern(n);

}
*/

/*#include<iostream>
using namespace std;
void starpattern(int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j<n-i ; j++)
      {
            cout<<" ";
      }
      for (int j = 0; j< 2*i+1; j++)
      {
        cout<<"*";
      }

       for (int j = 0; j< n-i; j++)
      {
        cout<<" ";
      }
      cout<<endl;

    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j<i+1 ; j++)
      {
            cout<<" ";
      }
      for (int j = 0; j< 2*(n-i)-1; j++)
      {
        cout<<"*";
      }

       for (int j = 0; j<i+1; j++)
      {
        cout<<" ";
      }
     cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    starpattern(n);

}*/
/*#include<iostream>
using namespace std;
void arropattern(int n){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <i+1; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <n-i-1; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    arropattern(n);
}
*/
///   ******************GOOD QUESTION******************

/*#include<iostream>
using namespace std;
void arropattern(int n){
    for (int i = 1; i < n; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<j ;
       }
       for (int j = 1; j <2*(n-i)-1 ; j++)
       {
         cout<< " ";
       }
       for (int j = i; j >=1 ;j--)
    {
        cout<< j;
       }

       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    arropattern(n);
}*/

#include<iostream>
using namespace std;
void arropattern(int n){
    for (int i = 1; i < n; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<j ;
       }
       for (int j = 1; j <2*(n-i)-1 ; j++)
       {
         cout<< " ";
       }
       for (int j = i; j >=1 ;j--)
    {
        cout<< j;
       }

       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    arropattern(n);
}

/*#include<iostream>
using namespace std;
void numpattern(int n){
    int num=1;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<< num<<" " ;
        num+=1;
       }
       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numpattern(n);
}

*/

/*#include<iostream>
using namespace std;
void numpattern(int n){

    for (int i = 0; i < n; i++)
    {
       for (char ch='A' ; ch<= 'A'+i ;ch++)
       {
        cout<<ch<<" " ;

       }
       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numpattern(n);
}
*/

/*#include<iostream>
using namespace std;
void numpattern(int n){

    for (int i = 0; i < n; i++)
    {
       for (char ch='A' ; ch<(n-i)+'A'; ch++)
       {
        cout<<ch<<" " ;

       }
       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numpattern(n);
}
*/

/*#include<iostream>          ////// ************ good question
using namespace std;
void numpattern(int n){
    int start=1;
    for (int i = 0; i < n; i++){
         if (i%2==0) start=1;
        else start=0;
        for (int j = 0; j <=i; j++){
       cout<< start;
       start= 1-start;
    }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numpattern(n);
}*/

/*#include<iostream>
using namespace std;
void numpattern(int n){
    for (int i = 0; i < n; i++)
    {
        char ch='A'+i;
       for (int j=0 ; j<=i; j++)
       {
        cout<<ch<<" " ;
       }
       cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    numpattern(n);
}

*/



/*#include<iostream>
using namespace std;
void pattern19(int n){
    for(int i=0; i<n; i++){
// * pattern
    for(int j=0; j<n-i;j++){
        cout<< "*";
    }
// space
        for(int j=0; j<2*i; j++){
            cout<< " ";
        }
// * pattern
for(int j=0; j<n-i;j++){
        cout<< "*";
    }     
cout<< endl;
    }
    for(int i=0; i<n; i++){
// * pattern

for(int j=0; j<1+i;j++){
        cout<< "*";
    }    
// space
 for(int j=0; j<2*(n-i)-2; j++){
            cout<< " ";
        }
// * pattern

     for(int j=0; j<i+1;j++){ 
        cout<< "*";
    }        
cout<< endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern19(n);
}*/

/*#include<iostream>
using namespace std;
void pattern20(int n){
        for(int i=0; i<n; i++){
// * pattern

for(int j=0; j<1+i;j++){
        cout<< "*";
    }    
// space
 for(int j=0; j<2*(n-i)-2; j++){
            cout<< " ";
        }
// * pattern

     for(int j=0; j<i+1;j++){ 
        cout<< "*";
    }        
cout<< endl;
    }
    for(int i=0; i<n; i++){
// * pattern
    for(int j=0; j<n-i;j++){
        cout<< "*";
    }
// space
        for(int j=0; j<2*i; j++){
            cout<< " ";
        }
// * pattern
for(int j=0; j<n-i;j++){
        cout<< "*";
    }     
cout<< endl;
    }

}
int main()
{
    int n;
    cin >> n;
    pattern20(n);
}
*/

/*#include<iostream>
using namespace std;
void pattern21(int n){
    for(int i=0; i<n; i++  ){
        for(int j=0 ; j<n ; j++){
            if(i==0 || j==0 || i==n-1 || i=n-1) 
            cout<<"*";
            else cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>n;
    print21();
}*/