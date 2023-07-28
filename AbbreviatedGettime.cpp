/*
        Include criado por Walkerxinho7.
        
        Discord: walkerxinho7 ou Walkerxinho7#9124
        Youtube: Walkerxinho
        Instagram: ocalasans
*/

new string[128];
new dia, mes, ano, hora, minuto, segundo;

stock DateAndTime()
{
    getdate(ano, mes, dia);
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d/%02d/%04d as %02d:%02d:%02d", dia, mes, ano, hora, minuto, segundo);
    return string;
}
stock JustTheDate()
{
    getdate(ano, mes, dia);
    format(string, 70, "%02d/%02d/%04d", dia, mes, ano);
    return string;
}
stock JustTheTime()
{
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d:%02d:%02d", hora, minuto, segundo);
    return string;
}
stock DateNoSeconds()
{
    getdate(ano, mes, dia);
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d/%02d/%04d as %02d:%02d", dia, mes, ano, hora, minuto);
    return string;
}
stock DateNoYear()
{
    getdate(ano, mes, dia);
    format(string, 70, "%02d/%02d", dia, mes);
    return string;
}
stock TimeNoSeconds()
{
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d:%02d", hora, minuto);
    return string;
}
stock JustTheYear()
{
    getdate(ano, mes, dia);
    format(string, 70, "%04d", ano);
    return string;
}
stock JustTheMonth()
{
    getdate(ano, mes, dia);
    format(string, 70, "%02d", mes);
    return string;
}
stock JustTheDay()
{
    getdate(ano, mes, dia);
    format(string, 70, "%02d", dia);
    return string;
}
stock JustHour()
{
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d", hora);
    return string;
}
stock JustMinute()
{
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d", minuto);
    return string;
}
stock JustSecond()
{
    gettime(hora, minuto, segundo);
    format(string, 70, "%02d", segundo);
    return string;
}