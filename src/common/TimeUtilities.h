/*
 * File: TimeUtilities.h
 * Description:
 *   Common utility code for time manipulation.
 * Author: Mooneer Salem <mooneer@gmail.com>
 * License: New BSD License
 */

#ifndef TIME_UTILITIES_H
#define TIME_UTILITIES_H

class TimeUtilities
{
public:
    /*
     * The epoch year. Currently 1900.
     */
    static const int EPOCH_YEAR = 1900;
    
    /*
     * Time/date constants that will probably never change.
     */
    static const int DAYS_IN_YEAR = 365;
    static const int HOURS_IN_DAY = 24;
    static const int SECONDS_IN_MINUTE = 60;
    static const int MINUTES_IN_HOUR = 60;
 
    /*
     * Calculates the number of seconds between 1 January 1900 and 
     * the date/time given.
     * WARNING: this will fail beyond 2036 due to data type overflow.
     * NOTE: this does not account for leap seconds, so there may be 
     *       some variation.
     */
    static unsigned long numberOfSecondsSince1900Epoch(
        int year, int month, int day, int hour, int minute, int second);
};

#endif // TIME_UTILITIES_H