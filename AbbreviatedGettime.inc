/*
        Include criado por Walkerxinho7.
        
        Discord: walkerxinho7 ou Walkerxinho7#9124
        Youtube: Walkerxinho
        Instagram: ocalasans
*/

new string_time[128];

stock DateAndTime()
{
    new dia, mes, ano, hora, minuto, segundo;
    getdate(ano, mes, dia);
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d/%02d/%04d as %02d:%02d:%02d", dia, mes, ano, hora, minuto, segundo);
    return string_time;
}

stock JustTheDate()
{
    new dia, mes, ano;
    getdate(ano, mes, dia);
    format(string_time, 70, "%02d/%02d/%04d", dia, mes, ano);
    return string_time;
}

stock JustTheTime()
{
    new hora, minuto, segundo;
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d:%02d:%02d", hora, minuto, segundo);
    return string_time;
}

stock DateNoSeconds()
{
    new dia, mes, ano, hora, minuto, segundo;
    getdate(ano, mes, dia);
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d/%02d/%04d as %02d:%02d", dia, mes, ano, hora, minuto);
    return string_time;
}

stock DateNoYear()
{
    new dia, mes, ano;
    getdate(ano, mes, dia);
    format(string_time, 70, "%02d/%02d", dia, mes);
    return string_time;
}

stock TimeNoSeconds()
{
    new hora, minuto, segundo;
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d:%02d", hora, minuto);
    return string_time;
}

stock JustTheYear()
{
    new dia, mes, ano;
    getdate(ano, mes, dia);
    format(string_time, 70, "%04d", ano);
    return string_time;
}

stock JustTheMonth()
{
    new dia, mes, ano;
    getdate(ano, mes, dia);
    format(string_time, 70, "%02d", mes);
    return string_time;
}

stock JustTheDay()
{
    new dia, mes, ano;
    getdate(ano, mes, dia);
    format(string_time, 70, "%02d", dia);
    return string_time;
}

stock JustHour()
{
    new hora, minuto, segundo;
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d", hora);
    return string_time;
}

stock JustMinute()
{
    new hora, minuto, segundo;
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d", minuto);
    return string_time;
}

stock JustSecond()
{
    new hora, minuto, segundo;
    gettime(hora, minuto, segundo);
    format(string_time, 70, "%02d", segundo);
    return string_time;
}
