#include <iostream>

int main() {
    int Pre = 2;
    int Post = 2;

    // Pre-increment example
    // Valued is incremented first. Then is assigned to ResultPre
    // Basically: 
    // Pre=Pre+1, followed by ResultPre=Pre
    int OriginalPre = Pre;      
    int ResultPre = ++Pre;      
    std::cout << "Pre-increment example:\n";
    std::cout << "Original value = " << OriginalPre 
              << ", Result = " << ResultPre 
              << ", Current value = " << Pre << "\n\n";

    // Post-increment example
    // Here the valued is assigned first and then incremented
    int OriginalPost = Post;    
    int ResultPost = Post++;     
    std::cout << "Post-increment example:\n";
    std::cout << "Original value = " << OriginalPost 
              << ", Result = " << ResultPost 
              << ", Current value = " << Post << "\n";

    return 0;
}
