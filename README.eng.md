## Include GettimeFuncoes SA:MP

This is an include that contains a function to abbreviate `gettime` and `getdate`. Read the categories below to stay informed.

-----------------------
 

### How to install?

You should download the include. After doing so, you need to place the include in the folder (pawno > include). Once you have done that, open the pwn file of your Gamemode and insert the following code below your other includes:
```pawn
#include <GettimeFuncoes>
```

-----------------------

### What is the difference?

Here are two commands, and you can see the difference by whether or not I include them.

Command without the include:
```pawn
CMD:dateandtime(playerid)
{
    new string[100], day, month, year, hour, minute, second;
    //
    getdate(year, month, day);
    gettime(hour, minute, second);
    //
    format(string, sizeof string, "Date and Time: %02d/%02d/%04d the %02d:%02d:%02d.", month, day, year, hour, minute, second);
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

Command with the include:
```pawn
CMD:dateandtime(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Date and Time: %s.", Gettime_Function(DATE_AND_TIME));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

### How does it work?

There is no secret to using the `Gettime_Function`. The format will depend on each definition provided below, and each definition will include an example for better understanding.

> [!NOTE]
> `DATE_AND_TIME` //0
>
> `ONLY_THE_DATE` //1
>
> `JUST_THE_TIME` //2
>
> `DATE_WHITOUT_SECONDS` //3
>
> `DATE_WHITOUT_YEAR` //4
>
> `TIME_WITHOUT_SECONDS` //5
>
> `JUST_THE_YEAR` //6
>
> `JUST_THE_MONTH` //7
>
> `JUST_THE_DAY` //8
>
> `JUST_THE_HOUR` //9
>
> `JUST_THE_MINUTE` //10
>
> `JUST_THE_SECOND` //11

-----------------------

* Ex: `DATE_AND_TIME`
```pawn
CMD:dateandtime(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Date And Time: %s.", Gettime_Function(DATE_AND_TIME));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `ONLY_THE_DATE`
```pawn
CMD:date(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Date: %s.", Gettime_Function(ONLY_THE_DATE));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_TIME`
```pawn
CMD:time(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Time: %s.", Gettime_Function(JUST_THE_TIME));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `DATE_WHITOUT_SECONDS`
```pawn
CMD:date(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Date: %s.", Gettime_Function(DATE_WHITOUT_SECONDS));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `DATE_WHITOUT_YEAR`
```pawn
CMD:date(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Date: %s.", Gettime_Function(DATE_WHITOUT_YEAR));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `TIME_WITHOUT_SECONDS`
```pawn
CMD:time(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Time: %s.", Gettime_Function(TIME_WITHOUT_SECONDS));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_YEAR`
```pawn
CMD:year(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Year: %s.", Gettime_Function(JUST_THE_YEAR));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_MONTH`
```pawn
CMD:month(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Month: %s.", Gettime_Function(JUST_THE_MONTH));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_DAY`
```pawn
CMD:day(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Day: %s.", Gettime_Function(JUST_THE_DAY));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_HOUR`
```pawn
CMD:hour(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Hour: %s.", Gettime_Function(JUST_THE_HOUR));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_MINUTE`
```pawn
CMD:minute(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Minute: %s.", Gettime_Function(JUST_THE_MINUTE));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `JUST_THE_SECOND`
```pawn
CMD:second(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Second: %s.", Gettime_Function(JUST_THE_SECOND));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

If you prefer not to define the `Gettime_Function` callback with the previously mentioned definitions, you can assign specific values to them. Just check the `Note` for the number that represents each definition.

-----------------------

### Contact Information

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Calasans](https://www.youtube.com/@ocalasans)   
Discord: ocalasans   
Community: [SA:MP Programming Community©](https://abre.ai/samp-spc)
