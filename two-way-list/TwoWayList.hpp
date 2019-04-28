#include "ListElement.hpp"

class TwoWayList {
public:
    static bool PRINT_BACKWARDS;
    static bool PRINT_FORWARDS;
    void print(bool = false);
    void unshift(int element);
    void push(int element);
    void add(int element_index_number, int number);
    void shift();
    void pop();
private:
    ListElement* first_element;
    ListElement* last_element;
    
    void print_forwards();
    void print_backwards();
};
