#ifndef CONFIGURATION_H
#define CONFIGURATION_H

class config {
public:
    config();
    void write_config_file();

    //dust input validation
    int dust_validation(int, int);
    bool yes_no_validation();
    void show_config();


private:

      //smart dust
    int total_number_of_smartdust   = 0;
    int total_a                     = 0;
    int total_b                     = 0;
    int total_c                     = 0;
    int total_d                     = 0;
    //flechettes
    int total_number_of_flechettes  = 0;


};

#endif // CONFIGURATION_H
