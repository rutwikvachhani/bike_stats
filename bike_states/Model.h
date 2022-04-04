#pragma once

#include <ctime>
#include <vector>

typedef struct _ENTRY
{
    tm m_Date_Of_Refuel;
    unsigned int m_KM_Reading_At_Refuel;
    double m_Refueling_Cost;
    double m_Fuel_Price;                      // per litre, on the day
    double m_Fuel_Quantity;                   // in litres
    double m_Avg_For_Last_Entry;              // 

} ENTRY;


class Model
{

private:
    std::vector<ENTRY> m_Entries;

public:
    Model(void);
    virtual ~Model(void);

    double Calculate_Latest_Average(ENTRY);
    void Update_Database(ENTRY);
    void Calculate_Historic_Average(double);

};

