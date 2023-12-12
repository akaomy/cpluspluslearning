// class definitions including data memberss and function member declarations

#ifndef ITEM_H
#define ITEM_H

class Item {
    public:
        void SetWeightAmount(int weightAmount);
        void PrintWeight() const;
    private:
        int weight;
};

#endif