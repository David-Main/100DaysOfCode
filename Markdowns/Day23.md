# Day23

Ever had that EUREKA moment when you're  
trying to figure something out but for a long time  
you haven't and then it just hits you.

well after tinkering with the string stream class  
today, that moment hit me like a flash of lightning😏😏

## What happened?

I realised while going through [the code](https://github.com/David-Main/100DaysOfCode/blob/21975ae6e747969f6ff0a2e5885fdac04bf34f89/CodeFiles/Day23/day23_stringStreams.cpp) that just  
like an output stream object for the standard output class,  
the ostringstream objects also need to be cleared before  
their next operation only theirs was rather manual...
really slick huh.

You can check out the fix before and after on [line 67 of the code](https://github.com/David-Main/100DaysOfCode/blob/21975ae6e747969f6ff0a2e5885fdac04bf34f89/CodeFiles/Day23/day23_stringStreams.cpp#L61)

#100daysofcode
