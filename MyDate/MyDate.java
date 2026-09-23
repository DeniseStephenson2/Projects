/*
Author: Denise Stephenson
Description: 
email: dstephenson@butler.edu
Date: February 15, 2026

Honor pledge: I pledge that I have neither given nor received any help on this assignment.
*/

import java.util.*;

public class MyDate implements DateInterface{
    
    // declare private variables 
    private String[] daysOfWeek = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    private String[] monthsOfYear = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    private int[] daysOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    private boolean leapYear = false;
    private int day, dow, month, year;
    
    // accessor methods
    public int getDay()
    {
        return this.day;
    }

    public int getDow()
    {
        return this.dow;
    }
     
    public int getMonth()
    {
        return this.month;
    }
      
    public int getYear()
    {
        return this.year;
    }
     
    // set method
    public void set(int m, int d, int y, int dow)
    {
        this.month = m;
        this.day = d;
        this.year = y;
        this.dow = dow;
    }
  
    public void tomorrow() {
        
        // if dayOfWeek reaches 6, make it  else simply add 1
        if (dow == 6)
        {
            dow = 0;
        }
        else
        {
            dow++;
        }
        
        // check for leap year
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            // if true, make the leapYear variable true and make the 
            // appropriate entry of daysOfMonth to be 29
            leapYear = true;
            daysOfMonth[1] = 29;
        }
 
        // If the month is January (month = 0) and day is 31, you need 
        // to make day to be 1 and month to be 1 (added 1 with current month value)
        // first check if day has reached its maximum by comparing it with daysOfMonth[month]
        // then if true, make day to be 1 and check for month

        if (day != daysOfMonth[month])
        {
            day += 1;
        }
        else
        {
            day = 1;
            month += 1;
        }

        // if month has reached its max value (11), make month 0 and increase year by 1 else simply increase month
        // if day is not equal to daysOfMonth[month], simply increase day
        if (month > 11)
        {
            month = 0;
            year += 1;
        }
             
        // if the leapYear var was made true, now make it false and make daysOfMonth[1] to be 28 again
        if (leapYear == true)
        {
            leapYear = false;
            daysOfMonth[1] = 28;
        }
        
    }
    
    public String toString() {
        return this.daysOfWeek[dow] + " , " + this.monthsOfYear[month] + " " + this.day + " , " + this.year;
    }

}