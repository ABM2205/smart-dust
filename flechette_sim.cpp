#include <iostream>
#include <random>

// my libraries
#include "linked_list.h"
#include "configuration.h"
#include "dust_distribution.h"

//namespaces
using namespace std;



int main(){
//config load;
//load.show_config();
dust_dist dist(1000,250,250,250,250,100,0,20);
dist.read_list();
return 0;
}
