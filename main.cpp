#include <iostream>

using namespace std;


int main()
{           int org[4][4];
                for(int i=0;i<5;i++){
                        for(int j=0;j<5;j++){org[i][j]=0;}}

            int r,c;
            for(int i=0;i<25;i++){int n;
                                cin>>r>>c;
                                cin>>n;
                                org[r-1][c-1]=n;
                                cout<<"want more (1-0)?"<<endl;
                                int desicion;
                                cin>>desicion;
                                if (desicion==0){break;}
            }
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){cout<<org[i][j]<<" " ;}cout<<""<<endl;;
            }







}
