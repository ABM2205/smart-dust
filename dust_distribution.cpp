#include "dust_distribution.h"
#include <random>
#include <iostream>

using namespace std;

dust_dist::dust_dist(){
    first = nullptr;
    last = nullptr;
    last ->next = nullptr;
};

//constructor to build the list of dusts
dust_dist::dust_dist(   int     total, //# dust total
                        int     a, //# a
                        int     b, //# b
                        int     c, //# c
                        int     d, //# d
                        int     flec, //# of flechettes
                        double  mean, //Distribution mean
                        double  dev) //Standard deviation
{ //begin constructor
    cout << "generating random distribution." << endl;
    //vars
    Dust *temp_ptr = nullptr;

    // building the list and creating the distribution

    for(unsigned int i = 0; i < total+1; i++){
        if(first == nullptr){

            first = new Dust;
            first ->next = nullptr;
            first ->type = 'a';
            first ->x = i;
            last = first;
        }//end if
        else{


            temp_ptr            = new Dust  ;
            last        -> next = temp_ptr  ;
            temp_ptr    -> type = 'a'       ;
            temp_ptr    -> x    = i         ;
            temp_ptr    -> next = nullptr   ;
            last                = temp_ptr;
        }//end else



    }; // end of for

//cleaning up stuff

    delete temp_ptr;

    //make sure last really ends
    last ->next = nullptr;

};//end constructor

void dust_dist::read_list(){
    Dust *temp_ptr = first;

    do{
        cout << "dust # ";
       cout << temp_ptr -> x << " | " << temp_ptr << " next " << temp_ptr -> next << endl;

        temp_ptr = temp_ptr ->next;

    }while(temp_ptr != nullptr);//end of while
    cout << "done reading" << endl;
    delete temp_ptr;
};
