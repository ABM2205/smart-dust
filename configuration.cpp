#include "configuration.h"
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int config::dust_validation(int minimum, int maximum){
    int valid_dust = 0;
    bool test = false;
    do
    {
    cin>>valid_dust;
        if(!cin)
        {
            cout << "your input contained invalid characters, please input an integer between 500 and 10000." << endl;
            //Clear the fail state.
            cin.clear();
            //Ignore the rest of the wrong user input, till the end of the line.
            cin.ignore(numeric_limits<std::streamsize>::max(),\
                                  					'\n');
            test = true;
        }
        else if(valid_dust < minimum){
            cout << "please input a number greater than 500." << endl;
            test = true;
        }
        else if(valid_dust > maximum){
            cout << "please input a number less than " << maximum << "." << endl;
            test = true;
        }
        else
        {
            test = false;
        }
    }while(test);
return valid_dust;
}

config::config(){

    bool config_or_naw = 1;

    int total_dust_used = 0;
    int dust_left = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cout << "would you like to load the configuration file? \n 1 for yes, 0 for no: ";
    config_or_naw = yes_no_validation();
    if(config_or_naw){
        ifstream input;
        input.open("config.txt");
        input >> total_dust_used;
        input >> a;
        input >> b;
        input >> c;
        input >> d;
    }else{
        cout << "How Many Dust are we using?" << endl;
        total_dust_used = dust_validation(500, 10000);
        dust_left = total_dust_used;
        while (dust_left != 0){

            cout << "How Many of Type A? " << endl;
            a = dust_validation(0, dust_left);
            dust_left -= a;
            cout << dust_left << " dust left." << endl;

            cout << "How Many of Type B? " << endl;
            b = dust_validation(0, dust_left);
            dust_left -= b;
            cout << dust_left << " dust left." << endl;

            cout << "How Many of Type C? " << endl;
            c = dust_validation(0, dust_left);
            dust_left -= c;
            cout << dust_left << " dust left." << endl;

            cout << "How Many of Type D? " << endl;
            d = dust_validation(0, dust_left);
            dust_left -= d;
            cout << dust_left << " dust left." << endl;

            if(dust_left != 0) cout << "we have space left for " << dust_left << " dust, please allocate all of it!" << endl;

        }
    }

  //smart dust
    total_number_of_smartdust   = total_dust_used;
    total_a                     = a;
    total_b                     = b;
    total_c                     = c;
    total_d                     = d;
    //flechettes
    total_number_of_flechettes  = total_number_of_smartdust/10;
}

void config::show_config(){
cout << " Smartdust total units: " << total_number_of_smartdust << endl;
cout << " Smartdust A units: " << total_a << endl;
cout << " Smartdust B units: " << total_b << endl;
cout << " Smartdust C units: " << total_c << endl;
cout << " Smartdust D units: " << total_d << endl;
}

bool config::yes_no_validation(){
bool yes_or_no = 0;

bool test = false;
    do
    {
    cin>>yes_or_no;
        if(!cin)
        {
            cout << "your input contained invalid characters, please input 1 for yes or 0 for no" << endl;
            //Clear the fail state.
            cin.clear();
            //Ignore the rest of the wrong user input, till the end of the line.
            cin.ignore(numeric_limits<std::streamsize>::max(),\
                                  					'\n');
            test = true;
        }
        else
        {
            test = false;
        }
    }while(test);
return yes_or_no;
}
