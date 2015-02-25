#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class list_node {
    public:
        list_node *first    = nullptr;
        list_node *last     = nullptr;

        list_node *prev     = nullptr;
        list_node *next     = nullptr;

        list_node(){
        };
private:
};

class flex_list{

    public:
        flex_list();

    private:
};

#endif // LINKED_LIST_H

