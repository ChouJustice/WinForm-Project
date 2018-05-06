#pragma once

ref class Clock
{
private:
      int hour;
      int minute;
      int second;
public:
	Clock(void);
	  void set_Time(int,int,int);
      void set_Hour(int);
      void set_Minute(int);
      void set_Second(int);
      int get_Hour();
      int get_Minute();
      int get_Second();
      void incSecond();
};