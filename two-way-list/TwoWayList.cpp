#include "TwoWayList.hpp"
#include <iostream>

bool TwoWayList::PRINT_FORWARDS = false;
bool TwoWayList::PRINT_BACKWARDS = true;

void TwoWayList::print(bool backwards) {
    if (backwards)
        this->print_backwards();
    else
        this->print_forwards();
}

void TwoWayList::unshift(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        this->first_element->set_previous_element(new_element);
        new_element->set_next_element(this->first_element);
        this->first_element = new_element;
    }
}

void TwoWayList::push(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        new_element->set_previous_element(this->last_element);
        this->last_element->set_next_element(new_element);
        this->last_element = new_element;
    }
}

void TwoWayList::add(int element_index_number, int number) {
    ListElement* tmp_element = this->first_element;
    int i = 0;
    while(tmp_element) {
        if (i == element_index_number) break;
        tmp_element = tmp_element->get_next_element();
        i++;
    }
    
    ListElement* new_element = new ListElement(number);
    new_element->set_previous_element(tmp_element);
    new_element->set_next_element(tmp_element->get_next_element());
    tmp_element->get_next_element()->set_previous_element(new_element);
    tmp_element->set_next_element(new_element);
}

void TwoWayList::pop() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        if (tmp_element->get_next_element() == this->last_element) break;
        tmp_element = tmp_element->get_next_element();
    }
    this->last_element = tmp_element;
    tmp_element->set_next_element(nullptr);
}

void TwoWayList::shift() {
    this->first_element = this->first_element->get_next_element();
}

void TwoWayList::print_forwards() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        std::cout << tmp_element->value << std::endl;
        tmp_element = tmp_element->get_next_element();
    }
}


void TwoWayList::print_backwards() {
    ListElement* tmp_element = this->last_element;
    while(tmp_element) {
        std::cout << tmp_element->value << std::endl;
        tmp_element = tmp_element->get_previous_element();
    }
}
