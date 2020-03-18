#include <iostream>

using namespace std;
int* divide(){
            int a;
            int b;
            int* asum=new int[50];
            cout<<"make the pattern"<<endl;
            for(int i=0;i<50;i=i+2){
              int putIt;
                  cin>>putIt;
                  a=putIt%10;
                  b=putIt/10;
                  if(putIt>10){
                  int temp;
                  temp=a;
                  a=b;
                  b=temp;
                  }
                  asum[i]=&a;
                  asum[i+1]=&b;
                  cout<<"want more (1-0)"<<endl;
                  int desicion;
                  cin>>desicion;
                  if (desicion==0){break;}
            }

return asum;


}

int main()
{               int pop[50];

           for(i=0;i<50;i++){
                    pop[i]=divide();
           }


}
