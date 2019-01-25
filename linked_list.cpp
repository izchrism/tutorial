#include <iostream>

struct intlist{
    int val;
    intlist* next;
};


int main(){
    intlist* list = NULL;
    int number_of_elements, element_to_add;

    std::cout << "How many elements would you like to add? " << std::endl;
    std::cin >> number_of_elements;

    for (int i = 0; i < number_of_elements; i++){

        std::cout<< "Enter Element " << i+1 << " :" <<std::endl;
        std::cin >> element_to_add;

        intlist* tmp = new intlist;
        (*tmp).val = element_to_add;
        tmp->next = list;
        list = tmp;
    }
    intlist* print_list = list;
    while(print_list!= NULL){
        std::cout << print_list -> val << std::endl;
        print_list = print_list->next;
    }

    while(list != NULL){
        intlist* tmpdl = list-> next;
        delete list;
        list = tmpdl;
    }
    std::cout <<"Bye!"<<std::endl;
}
