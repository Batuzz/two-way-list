class ListElement {
public:
    ListElement(int);
    int value;
    void set_next_element(ListElement*);
    void set_previous_element(ListElement*);
    ListElement* get_next_element();
    ListElement* get_previous_element();
private:
    ListElement* next_element;
    ListElement* previous_element;
};
