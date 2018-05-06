#include "StdAfx.h"
#include "Clock.h"

Clock::Clock(void)
{
	set_Time(00,00,00);
}

void Clock::set_Time(int h , int m , int s)
{
   set_Hour(h);
   set_Minute(m);
   set_Second(s);
}

void Clock::set_Hour(int h)
{
   hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void Clock::set_Minute(int m)
{
   minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void Clock::set_Second(int s)
{
   second = ( s >= 0 && s < 60 ) ? s : 0;
}

int Clock::get_Hour()
{
   return hour;
}

int Clock::get_Minute()
{
   return minute;
}

int Clock::get_Second()
{
   return second;
}

void Clock::incSecond()
{
   second ++;
   if(second >= 60)
   {
      second = 0;
      minute ++;
   }
   if(minute >= 60)
   {
      minute = 0;
      hour ++;
   }
   if(hour >= 24)
   {
      hour = 0;
   }
}