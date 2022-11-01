#include<iostream>
using namespace std;
int main(){
    //getting input for rows and columns for the first matrix
    int rows1, col1;
    cout<<"FIRST MATRIX\n";
    cout<<"Enter the number of rows: ";
    cin>>rows1;
    cout<<"Enter the number of columns: ";
    cin>>col1;
    
    int matrix[rows1][col1];
    cout<<endl;

    //getting input for rows and columns for the second matrix
    int rows2, col2;
    cout<<"SECOND MATRIX\n";
    cout<<"Enter the number of rows: ";
    cin>>rows2;
    cout<<"Enter the number of columns: ";
    cin>>col2;
    
    int matrix2[rows2][col2];

    while (col1!=rows2)
    {
        cout<<"ERROR\n";
        cout<<"No. of columns of first matrix should be equal to no. of rows of second matrix\n";
        cout<<"Enter again: \n";
        cout<<"FIRST MATRIX\n";
        cout<<"Enter the number of rows: ";
        cin>>rows1;
        cout<<"Enter the number of columns: ";
        cin>>col1;

        cout<<endl;

        cout<<"SECOND MATRIX\n";
        cout<<"Enter the number of rows: ";
        cin>>rows2;
        cout<<"Enter the number of columns: ";
        cin>>col2;
        
    }
    
    cout<<"INPUT FIRST MATRIX\n";
    for(size_t i=1;i<=rows1;++i){
        for(size_t j=1;j<=col1;++j){
            cout<<"a"<<i<<j<<": ";
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    cout<<"OUTPUT OF FIRST MATRIX\n";
    for(size_t i=1;i<=rows1;++i){
        for(size_t j=1;j<=col1;++j){
            cout<<matrix[i][j]<<" ";
            if(j==col1){
                cout<<endl;
            }
        }
    }
    cout<<endl;

    cout<<"INPUT SECOND MATRIX\n";
    for(size_t i=1;i<=rows2;++i){
        for(size_t j=1;j<=col2;++j){
            cout<<"a"<<i<<j<<": ";
            cin>>matrix2[i][j];
        }
    }
    cout<<endl;

    cout<<"OUTPUT OF SECOND MATRIX\n";
    for(size_t i=1;i<=rows2;++i){
        for(size_t j=1;j<=col2;++j){
            cout<<matrix2[i][j]<<" ";
            if(j==col2){
                cout<<endl;
            }
        }
    }
    cout<<endl;
    
    int product_matrix[col1][rows2];
    //initializing product_matrix to 0
    for(size_t i=1;i<=rows1;++i){
        for(size_t j=1;j<=col2;++j){
            product_matrix[i][j]=0;
        }
    }

    //processing the multiplication
    
    for(size_t i=1;i<=rows1;++i){
        for(size_t j=1;j<=col2;++j){
            for (size_t k= 1;k<=col1; k++){
                product_matrix[i][j]+=matrix[i][k]*matrix2[k][j];
            }
        }
    }   
    
    cout<<endl;

    //outputting the product
    cout<<"Multiplication goes here\n ";

    for(size_t i=1;i<=rows1;++i){
        for(size_t j=1;j<=col2;++j){
            cout<<product_matrix[i][j]<<" ";
            if(j==col2){
                cout<<endl;
            }
        }
    }
}