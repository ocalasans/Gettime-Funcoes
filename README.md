## Include GettimeFuncoes SA:MP

Este é um include que contém uma função para abreviar o `gettime` e o `getdate`. Leia as categorias abaixo para se manter informado.

English > [README](https://github.com/ocalasans/Gettime-Funcoes/blob/main/README.eng.md).

-----------------------

### Como instalar?

Você deve fazer o download do include. Depois de tê-lo feito, você deverá colocar o include na pasta (pawno > include). Após ter feito isso, abra o arquivo pwn do seu Gamemode e coloque o seguinte código abaixo dos seus outros includes:
```pawn
#include <GettimeFuncoes>
```

-----------------------

### Qual é a diferença?

Aqui estão dois comandos, e você poderá observar a diferença ao utilizar ou não o meu include.

Comando sem a include:
```pawn
CMD:dataehora(playerid)
{
    new string[100], dia, mes, ano, hora, minuto, segundo;
    //
    getdate(ano, mes, dia);
    gettime(hora, minuto, segundo);
    //
    format(string, sizeof string, "Data e Tempo: %02d/%02d/%04d as %02d:%02d:%02d.", dia, mes, ano, hora, minuto, segundo);
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

Comando com a include:
```pawn
CMD:dataehora(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Data e Tempo: %s.", Gettime_Funcao(DATA_E_TEMPO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

### Como funciona?

Não há nenhum segredo ao utilizar a função `Gettime_Funcao`. O formato dependerá de cada definição que está logo abaixo; inclusive, cada definição terá um exemplo para melhor entendimento.

> [!NOTE]
> `DATA_E_TEMPO` //0
>
> `APENAS_A_DATA` //1
>
> `APENAS_O_TEMPO` //2
>
> `DATA_SEM_SEGUNDOS` //3
>
> `DATA_SEM_ANO` //4
>
> `TEMPO_SEM_SEGUNDOS` //5
>
> `APENAS_O_ANO` //6
>
> `APENAS_O_MES` //7
>
> `APENAS_O_DIA` //8
>
> `APENAS_A_HORA` //9
>
> `APENAS_O_MINUTO` //10
>
> `APENAS_O_SEGUNDO` //11

-----------------------

* Ex: `DATA_E_TEMPO`
```pawn
CMD:dataehora(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Data e Tempo: %s.", Gettime_Funcao(DATA_E_TEMPO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_A_DATA`
```pawn
CMD:data(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Data: %s.", Gettime_Funcao(APENAS_A_DATA));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_TEMPO`
```pawn
CMD:tempo(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Tempo: %s.", Gettime_Funcao(APENAS_O_TEMPO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `DATA_SEM_SEGUNDOS`
```pawn
CMD:data(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Data: %s.", Gettime_Funcao(DATA_SEM_SEGUNDOS));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `DATA_SEM_ANO`
```pawn
CMD:data(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Data: %s.", Gettime_Funcao(DATA_SEM_ANO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `TEMPO_SEM_SEGUNDOS`
```pawn
CMD:tempo(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Tempo: %s.", Gettime_Funcao(TEMPO_SEM_SEGUNDOS));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_ANO`
```pawn
CMD:ano(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Ano: %s.", Gettime_Funcao(APENAS_O_ANO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_MES`
```pawn
CMD:mes(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Mes: %s.", Gettime_Funcao(APENAS_O_MES));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_DIA`
```pawn
CMD:dia(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Dia: %s.", Gettime_Funcao(APENAS_O_DIA));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_A_HORA`
```pawn
CMD:hora(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Hora: %s.", Gettime_Funcao(APENAS_A_HORA));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_MINUTO`
```pawn
CMD:minuto(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Minuto: %s.", Gettime_Funcao(APENAS_O_MINUTO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

* Ex: `APENAS_O_SEGUNDO`
```pawn
CMD:segundo(playerid)
{
    new string[100];
    //
    format(string, sizeof string, "Segundo: %s.", Gettime_Funcao(APENAS_O_SEGUNDO));
    SendClientMessage(playerid, 0xFFFFFFFF, string);
    //
    return true;
}
```

-----------------------

Se preferir não definir a callback `Gettime_Funcao` com as definições mencionadas anteriormente, você pode atribuir valores específicos a elas. Basta verificar no `Note` o número correspondente a cada definição.

-----------------------

### Informações de contato

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Calasans](https://www.youtube.com/@ocalasans)   
Discord: ocalasans   
Comunidade: [SA:MP Programming Community©](https://abre.ai/samp-spc)
