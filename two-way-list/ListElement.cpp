#include "ListElement.hpp"

ListElement::ListElement(int number) {
    this->value = number;
    this->next_element = nullptr;
    this->previous_element = nullptr;
}

ListElement* ListElement::get_next_element() {
    return this->next_element;
}

ListElement* ListElement::get_previous_element() {
    return this->previous_element;
}

void ListElement::set_next_element(ListElement* next_element) {
    this->next_element = next_element;
}

void ListElement::set_previous_element(ListElement* next_element) {
    this->previous_element = next_element;
}
