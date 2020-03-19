
#include <iostream>

using namespace std;
int largest(int temp[],int len){  int indector=temp[0];
int counter;
int max_size=0;
int element;
                  for(int i=0;i<len;i++){counter=0;
                for(int j=i;j<len;j++){
                if(indector==temp[j]){
                 counter++;
                 }
                 if(counter>max_size){
                 max_size=counter;
                 element=temp[i];
                 }
                }
    }
    return element;
}


int main()
{           int org[5][5],no;
                for(int i=0;i<5;i++){
                        for(int j=0;j<5;j++){org[i][j]=0;}}
                          int desicion=1;
                             cin>>no;
                     int temp[no];
        while(desicion==1){int n;
        int i=0;
             int r,c;


                                cin>>r>>c;
                                cin>>n;
                                temp[i]=n;
                                i++;

                                org[r-1][c-1]=n;


                                cout<<"want more (1-0)?"<<endl;
                                cin>>desicion;
            }
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){cout<<org[i][j]<<" " ;}cout<<""<<endl;;
            }
            cout<<largest(temp,no);

return 0;





}


