#ifndef DUST_DISTRIBUTION_H
#define DUST_DISTRIBUTION_H

class dust_dist{
public:
    struct Dust {
        Dust *next = nullptr;
        char type = '0';
        double y = 0;
        double x = 0;
    };
    Dust *first = nullptr;
    Dust *last = nullptr;

    dust_dist();

    dust_dist(int, //# dust total
              int, //# a
              int, //# b
              int, //# c
              int, //# d
              int, //# of flechettes
              double, //Distribution mean
              double); //Standard deviation

    void read_list(); //couts the dust list
private:
};

#endif // DUST_DISTRIBUTION_H
