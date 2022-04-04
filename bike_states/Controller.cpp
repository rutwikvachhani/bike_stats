#include "stdafx.h"
#include "Controller.h"


Controller::Controller(void)
{
}


Controller::~Controller(void)
{
}

void Controller::Add_New_Entry(ENTRY entry)
{
    
    entry.m_Fuel_Quantity = entry.m_Refueling_Cost / entry.m_Fuel_Price;
    entry.m_Avg_For_Last_Entry = 0;
    
    Update_Database(entry);

}