#include <algorithm>
#include <iostream>
#include <list>

int main()
    // Initialize list with only one number
{    std::list<int> list = {1};
   
    // Start the loop from 2 to 10
    for (int count = 2; count <=10; count++){
        // Compute half of count, using integer division
        int half_count=count/2;

        std::cout<<count;
        std::cout<<" must be inserted before ";
        std::cout<<half_count<<"\n";

        /* Insert the number "count" before half_count.
       Notice that the order of insertions (2 to 10) affects the result.
       For example, both 2 and 3 must be inserted before 1.
       - First, 2 is inserted before 1 → list becomes: 2 1
       - Then, 3 is inserted before 1 → list becomes: 2 3 1
       Since there is no rule about 2 relative to 3, their order is determined
       by the sequence of insertions (smaller numbers are handled first). 
        */
        std::list<int>::iterator it = std::find(list.begin(), list.end(), half_count);
        list.insert(it, count);
        
        // Show the list after this insertion
        std::cout<<"Let's see the resulting list:"<<"\n";
        for (int n : list) {
            std::cout << n << " ";
        }
        std::cout<<"\n";
    }
}