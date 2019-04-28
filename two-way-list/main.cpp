#include <iostream>
#include "TwoWayList.hpp"

int main(int argc, const char * argv[]) {
    
    TwoWayList* my_list = new TwoWayList();
    
    my_list->push(0);
    my_list->push(1);
    my_list->push(2);
    my_list->push(3);
    
    my_list->unshift(-1);
    my_list->pop();
    my_list->add(0, 55);
    
    my_list->print(TwoWayList::PRINT_FORWARDS);
    
    std::cout << "\n\n\n";
    return 0;
}
