#include <iostream>

int main(){
    int max_number_rows = 4;
    char input_triangule='&';

    for (int i=1;i<=max_number_rows; i++){
        // loop for rows
        // To understand better, you can uncomment the lines 10 and 13. 
        //std::cout<<"Loop for rows:"<<i<<"\n";
        for (int j=1;j<=i; j++){
        // loop for columns in the current row 
        //std::cout<<"Loop for columns:"<< j <<"\n";   
        std::cout<<"&";
        }
        // Moves the cursor to a new line after each row.
        std::cout << std::endl;  
    }
    return 0;
}
  