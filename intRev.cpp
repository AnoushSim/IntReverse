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
  else if(a>0)
       {
          while(a!=0)
            {
              tmp += a%10;
              a/=10;
              if(a!=0) 
                   tmp*=10;
            }
          return tmp;
       }
  else if(a<0)
        {
          _tmp= -a;
          while(_tmp!=0)
            {
              tmp += _tmp%10;
              _tmp/=10;
              if(_tmp!=0) 
                   tmp*=10;
            }
          return -tmp;
        }
}
