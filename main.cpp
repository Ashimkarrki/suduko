#include <iostream>

using namespace std;


int main()
{           int org[5][5];
                for(int i=0;i<6;i++){
                        for(int j=0;j<6;j++){org[i][j]=0;}}
                          int desicion=1;
        while(desicion==1){int n;
             int r,c;
                                cin>>r>>c;
                                cin>>n;
                                org[r-1][c-1]=n;


                                cout<<"want more (1-0)?"<<endl;
                                cin>>desicion;
            }
            for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){cout<<org[j][i]<<" " ;}cout<<""<<endl;;
            }

return 0;





}
