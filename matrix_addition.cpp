#include<iostream>
using namespace std;

int main(){
    //getting input of rows and columns from the user
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<endl;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int matrix [m][n];
    //rows and columns done!

    for(int i=1;i<=m;++i){            //input for first matrix
        for(int j=1; j<=n;++j){
            cout <<"a"<<i<<j<<": ";
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    std::cout<<"FIRST MATRIX\n";
    for(int i=1;i<=m;++i){            //outputting first matrix to the user
        for(int j=1; j<=n;++j){
         cout<< matrix[i][j]<<" ";
         if(j==n){
            cout<<endl;
         }
    }
    }
    cout<<endl;
    std::cout<<"SECOND MATRIX\n";
    cout<<"Now for the second matrix\n";
    
    int matrix2[m][n];                //input for second matrix
    for(int i=1;i<=m;++i){
        for(int j=1; j<=n;++j){
            cout<<"a"<<i<<j<<": ";
            cin>>matrix2[i][j];
        }
    }
    cout<<endl;
    std::cout<<"SECOND MATRIX\n";
    for(int i=1;i<=m;++i){            //outputting second matrix to the user
        for(int j=1; j<=n;++j){
         cout<< matrix2[i][j]<<" ";
         if(j==n){
            cout<<endl;
         }
    }
    }
    cout<<endl;
    cout<<"Sum goes here\n";
    int sum[m][n];                    //processing sum
    for(int i=1;i<=m;++i){            
        for(int j=1; j<=n;++j){
            sum[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }

    for(int i=1;i<=m;++i){            //outputting sum to the user
        for(int j=1; j<=n;++j){
         cout<< sum[i][j]<<" ";
         if(j==n){
            cout<<endl;
         }
    }
    }
    cout<<endl;
    cout<<"Program ending well!\n";
    return 0;   
}
