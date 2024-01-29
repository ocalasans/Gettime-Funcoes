/*
    * GettimeFuncoes v1.0.1

    Este include é parte integrante do projeto GettimeFuncoes, uma biblioteca que oferece
    funcionalidades relacionadas ao gettime e getdate. Desenvolvido por [Calasans (Walkerxinho7)]. 

    © [2024] [Calasans (Walkerxinho7)]. Todos os direitos reservados.

    Discord: walkerxinho7 ou Walkerxinho7#9124
    Youtube: Walkerxinho
    Instagram: ocalasans

    SA:MP Programming Comunnity©: https://abre.ai/samp-spc
*/

#if defined _gettime_funcoes
    #undef _gettime_funcoes
#endif
//
#if defined _gettime_funcoes_included
    #endinput
#endif
#define _gettime_funcoes_included
//
#if !defined _samp_included
    #error "A biblioteca `a_samp` nao foi ativada. Por favor, ative-a no inicio do seu Gamemode, Ex: `#include <a_samp>`"
#endif

/*
$$$$$$$\             $$$$$$\  $$\           $$\                                               $$\       $$$$$$$\             $$$$$$\  $$\           $$\   $$\     $$\                               
$$  __$$\           $$  __$$\ \__|          \__|                                              $$ |      $$  __$$\           $$  __$$\ \__|          \__|  $$ |    \__|                              
$$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\  $$$$$$$\  $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |$$  _____|$$  __$$\ $$  __$$\ $$  _____|      \__|      $$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |$$ /      $$ /  $$ |$$$$$$$$ |\$$$$$$\        $$\       $$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |  $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |$$ |      $$ |  $$ |$$   ____| \____$$\       $$ |      $$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |  $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
$$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |\$$$$$$$\ \$$$$$$  |\$$$$$$$\ $$$$$$$  |      $$ |      $$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |  \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
\_______/  \_______|\__|      \__|\__|  \__|\__| \_______| \______/  \_______|\_______/       \__|      \_______/  \_______|\__|      \__|\__|  \__|\__|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

#define DATA_E_TEMPO 0
#define APENAS_A_DATA 1
#define APENAS_O_TEMPO 2
#define DATA_SEM_SEGUNDOS 3
#define DATA_SEM_ANO 4
#define TEMPO_SEM_SEGUNDOS 5
#define APENAS_O_ANO 6
#define APENAS_O_MES 7
#define APENAS_O_DIA 8
#define APENAS_A_HORA 9
#define APENAS_O_MINUTO 10
#define APENAS_O_SEGUNDO 11

/*
$$\    $$\                    $$\                               $$\                 $$\       $$\    $$\                    $$\           $$\       $$\                     
$$ |   $$ |                   \__|                              \__|                $$ |      $$ |   $$ |                   \__|          $$ |      $$ |                    
$$ |   $$ |$$$$$$\   $$$$$$\  $$\  $$$$$$\ $$\    $$\  $$$$$$\  $$\  $$$$$$$\       $$ |      $$ |   $$ |$$$$$$\   $$$$$$\  $$\  $$$$$$\  $$$$$$$\  $$ | $$$$$$\   $$$$$$$\ 
\$$\  $$  |\____$$\ $$  __$$\ $$ | \____$$\\$$\  $$  |$$  __$$\ $$ |$$  _____|      \__|      \$$\  $$  |\____$$\ $$  __$$\ $$ | \____$$\ $$  __$$\ $$ |$$  __$$\ $$  _____|
 \$$\$$  / $$$$$$$ |$$ |  \__|$$ | $$$$$$$ |\$$\$$  / $$$$$$$$ |$$ |\$$$$$$\        $$\        \$$\$$  / $$$$$$$ |$$ |  \__|$$ | $$$$$$$ |$$ |  $$ |$$ |$$$$$$$$ |\$$$$$$\  
  \$$$  / $$  __$$ |$$ |      $$ |$$  __$$ | \$$$  /  $$   ____|$$ | \____$$\       $$ |        \$$$  / $$  __$$ |$$ |      $$ |$$  __$$ |$$ |  $$ |$$ |$$   ____| \____$$\ 
   \$  /  \$$$$$$$ |$$ |      $$ |\$$$$$$$ |  \$  /   \$$$$$$$\ $$ |$$$$$$$  |      $$ |         \$  /  \$$$$$$$ |$$ |      $$ |\$$$$$$$ |$$$$$$$  |$$ |\$$$$$$$\ $$$$$$$  |
    \_/    \_______|\__|      \__| \_______|   \_/     \_______|\__|\_______/       \__|          \_/    \_______|\__|      \__| \_______|\_______/ \__| \_______|\_______/ 
*/

static GFI_string_time[128],
    GFI_hours,
    GFI_minutes,
    GFI_seconds,
    GFI_years,
    GFI_months,
    GFI_days;

/*
 $$$$$$\              $$\                                         $$\        $$$$$$\    $$\     $$\                                     
$$  __$$\             $$ |                                        $$ |      $$  __$$\   $$ |    $$ |                                    
$$ /  $$ |$$\   $$\ $$$$$$\    $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ /  $$ |$$$$$$\   $$$$$$$\   $$$$$$\   $$$$$$\   $$$$$$$\ 
$$ |  $$ |$$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  _____|      \__|      $$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |$$ |  $$ |  $$ |    $$ |  \__|$$ /  $$ |\$$$$$$\        $$\       $$ |  $$ |  $$ |    $$ |  $$ |$$$$$$$$ |$$ |  \__|\$$$$$$\  
$$ |  $$ |$$ |  $$ |  $$ |$$\ $$ |      $$ |  $$ | \____$$\       $$ |      $$ |  $$ |  $$ |$$\ $$ |  $$ |$$   ____|$$ |       \____$$\ 
 $$$$$$  |\$$$$$$  |  \$$$$  |$$ |      \$$$$$$  |$$$$$$$  |      $$ |       $$$$$$  |  \$$$$  |$$ |  $$ |\$$$$$$$\ $$ |      $$$$$$$  |
 \______/  \______/    \____/ \__|       \______/ \_______/       \__|       \______/    \____/ \__|  \__| \_______|\__|      \_______/ 
*/

public OnGameModeInit()
{
    print(" ");
    print("__________________________________________________________________");
    print("||==============================================================||");
    print("||                                                              ||");
    print("||             Gettime Funcoes | Gettime Functions              ||");
    print("||                                                              ||");
    print("||              ,ad8888ba,             88888888888              ||");
    print("||             d8''    `'8b            88                       ||");
    print("||            d8'                      88                       ||");
    print("||            88                       88aaaaa                  ||");
    print("||            88      88888  aaaaaaaa  88=====                  ||");
    print("||            Y8,        88  ========  88                       ||");
    print("||             Y8a.    .a88            88                       ||");
    print("||              `'Y88888P'             88                       ||");
    print("||                                                              ||");
    print("||                                                              ||");
    print("||                                                              ||");
    print("||                     G-F versao 1.0.1                         ||");
    print("||                By: Calasans (Walkerxinho7)                   ||");
    print("||                 Discord: abre.ai/samp-spc                    ||");
    print("||                                                              ||");
    print("||==============================================================||");
    print("__________________________________________________________________");
    print(" ");
    //
    #if defined GFI_print_gamemodeinit
        return GFI_print_gamemodeinit();
    #else
        return true;
    #endif
}

/*
$$$$$$$$\                                                                $$\       $$$$$$$$\                              $$\     $$\                               
$$  _____|                                                               $$ |      $$  _____|                             $$ |    \__|                              
$$ |   $$\   $$\ $$$$$$$\   $$$$$$$\  $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ |   $$\   $$\ $$$$$$$\   $$$$$$$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$$$$\ $$ |  $$ |$$  __$$\ $$  _____|$$  __$$\ $$  __$$\ $$  _____|      \__|      $$$$$\ $$ |  $$ |$$  __$$\ $$  _____|\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$  __|$$ |  $$ |$$ |  $$ |$$ /      $$ /  $$ |$$$$$$$$ |\$$$$$$\        $$\       $$  __|$$ |  $$ |$$ |  $$ |$$ /        $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |   $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$   ____| \____$$\       $$ |      $$ |   $$ |  $$ |$$ |  $$ |$$ |        $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
$$ |   \$$$$$$  |$$ |  $$ |\$$$$$$$\ \$$$$$$  |\$$$$$$$\ $$$$$$$  |      $$ |      $$ |   \$$$$$$  |$$ |  $$ |\$$$$$$$\   \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
\__|    \______/ \__|  \__| \_______| \______/  \_______|\_______/       \__|      \__|    \______/ \__|  \__| \_______|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

stock Gettime_Funcao(GFI_type = DATA_E_TEMPO)
{
    if(GFI_type == DATA_E_TEMPO)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d/%02d/%04d as %02d:%02d:%02d", GFI_days, GFI_months, GFI_years, GFI_hours, GFI_minutes, GFI_seconds);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_A_DATA)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d/%02d/%04d", GFI_days, GFI_months, GFI_years);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_TEMPO)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d:%02d:%02d", GFI_hours, GFI_minutes, GFI_seconds);
        return GFI_string_time;
    }
    else if(GFI_type == DATA_SEM_SEGUNDOS)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d/%02d/%04d as %02d:%02d", GFI_days, GFI_months, GFI_years, GFI_hours, GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == DATA_SEM_ANO)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d/%02d", GFI_days, GFI_months);
        return GFI_string_time;
    }
    else if(GFI_type == TEMPO_SEM_SEGUNDOS)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d:%02d", GFI_hours, GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_ANO)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%04d", GFI_years);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_MES)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d", GFI_months);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_DIA)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d", GFI_days);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_A_HORA)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_hours);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_MINUTO)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == APENAS_O_SEGUNDO)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_seconds);
        return GFI_string_time;
    }
    //
    return GFI_string_time;
}

/*
$$$$$$$$\                     $$\ $$\           $$\       
$$  _____|                    $$ |\__|          $$ |      
$$ |      $$$$$$$\   $$$$$$\  $$ |$$\  $$$$$$$\ $$$$$$$\  
$$$$$\    $$  __$$\ $$  __$$\ $$ |$$ |$$  _____|$$  __$$\ 
$$  __|   $$ |  $$ |$$ /  $$ |$$ |$$ |\$$$$$$\  $$ |  $$ |
$$ |      $$ |  $$ |$$ |  $$ |$$ |$$ | \____$$\ $$ |  $$ |
$$$$$$$$\ $$ |  $$ |\$$$$$$$ |$$ |$$ |$$$$$$$  |$$ |  $$ |
\________|\__|  \__| \____$$ |\__|\__|\_______/ \__|  \__|
                    $$\   $$ |                            
                    \$$$$$$  |                            
                     \______/                             
*/

#define DATE_AND_TIME DATA_E_TEMPO
#define ONLY_THE_DATE APENAS_A_DATA
#define JUST_THE_TIME APENAS_O_TEMPO
#define DATE_WHITOUT_SECONDS DATA_SEM_SEGUNDOS
#define DATE_WHITOUT_YEAR DATA_SEM_ANO
#define TIME_WITHOUT_SECONDS TEMPO_SEM_SEGUNDOS
#define JUST_THE_YEAR APENAS_O_ANO
#define JUST_THE_MONTH APENAS_O_MES
#define JUST_THE_DAY APENAS_O_DIA
#define JUST_THE_HOUR APENAS_A_HORA
#define JUST_THE_MINUTE APENAS_O_MINUTO
#define JUST_THE_SECOND APENAS_O_SEGUNDO

stock Gettime_Function(GFI_type = DATE_AND_TIME)
{
    if(GFI_type == DATE_AND_TIME)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d/%02d/%04d the %02d:%02d:%02d", GFI_months, GFI_days, GFI_years, GFI_hours, GFI_minutes, GFI_seconds);
        return GFI_string_time;
    }
    else if(GFI_type == ONLY_THE_DATE)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d/%02d/%04d", GFI_months, GFI_days, GFI_years);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_TIME)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d:%02d:%02d", GFI_hours, GFI_minutes, GFI_seconds);
        return GFI_string_time;
    }
    else if(GFI_type == DATE_WHITOUT_SECONDS)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d/%02d/%04d the %02d:%02d", GFI_months, GFI_days, GFI_years, GFI_hours, GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == DATE_WHITOUT_YEAR)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d/%02d", GFI_months, GFI_days);
        return GFI_string_time;
    }
    else if(GFI_type == TIME_WITHOUT_SECONDS)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d:%02d", GFI_hours, GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_YEAR)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%04d", GFI_years);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_MONTH)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d", GFI_months);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_DAY)
    {
        getdate(GFI_years, GFI_months, GFI_days);
        format(GFI_string_time, 70, "%02d", GFI_days);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_HOUR)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_hours);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_MINUTE)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_minutes);
        return GFI_string_time;
    }
    else if(GFI_type == JUST_THE_SECOND)
    {
        gettime(GFI_hours, GFI_minutes, GFI_seconds);
        format(GFI_string_time, 70, "%02d", GFI_seconds);
        return GFI_string_time;
    }
    //
    return GFI_string_time;
}

/*
 $$$$$$\    $$\     $$\                                 $$$$$$$\             $$$$$$\  $$\           $$\   $$\     $$\                               
$$  __$$\   $$ |    $$ |                                $$  __$$\           $$  __$$\ \__|          \__|  $$ |    \__|                              
$$ /  $$ |$$$$$$\   $$$$$$$\   $$$$$$\   $$$$$$\        $$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  __$$\       $$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |  $$ |    $$ |  $$ |$$$$$$$$ |$$ |  \__|      $$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |  $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |  $$ |  $$ |$$\ $$ |  $$ |$$   ____|$$ |            $$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |  $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
 $$$$$$  |  \$$$$  |$$ |  $$ |\$$$$$$$\ $$ |            $$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |  \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
 \______/    \____/ \__|  \__| \_______|\__|            \_______/  \_______|\__|      \__|\__|  \__|\__|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit GFI_print_gamemodeinit
#if defined GFI_print_gamemodeinit
    forward GFI_print_gamemodeinit();
#endif