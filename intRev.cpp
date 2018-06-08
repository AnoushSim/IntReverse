#include <iostream>
int reverse(int );

int main()
{
  int number;
  std::cout << "Enter your number: ";
  std::cin>>number;
  std::cout << " Your reversed number is: "<<reverse(number);
  return 0;
}

int reverse(int a)
{
  int tmp = 0;
  int _tmp = 0;
  if(a==0)
      return 0;
  if(a%10==0)
     {
       std::cout<<"Number can't begin with 0."<<std::endl;
       return -1;
     }
  else 
          while(a!=0)
            {
              tmp += a%10;
              a/=10;
              if(a!=0) 
                   tmp*=10;
            }
          return tmp;
       }
  
