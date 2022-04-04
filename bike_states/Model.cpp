#include "stdafx.h"
#include "Model.h"


Model::Model(void)
{
    m_Entries.clear();
}


Model::~Model(void)
{
}

double Model::Calculate_Latest_Average(ENTRY new_entry)
{

    double avg = 0.00;

    ENTRY last_entry = m_Entries.back();

    avg = ( new_entry.m_KM_Reading_At_Refuel - last_entry.m_KM_Reading_At_Refuel ) / last_entry.m_Fuel_Quantity;

    return avg;
}

void Model::Update_Database(ENTRY entry)
{

    entry.m_Avg_For_Last_Entry = Calculate_Latest_Average(entry);

    m_Entries.push_back(entry);
}

void Calculate_Historic_Average(double avg)
{

}

