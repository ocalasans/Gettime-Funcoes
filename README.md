# Abreviacao gettime & getdate

Olá gente, então este é um include que abrevia o gettime & getdate, com essa include você não iria
precisar usar uma variável pra definir o gettime & getdate, se você usar a variável você certamente
vai usar assim, exemplo logo abaixo.

Exemplo ▼
```pawn
new dia, mes, ano, hora, minuto, segundo;                                               
getdate(ano, mes, dia);                                         
gettime(hora, minuto, segundo);

format(string, sizeof string, "Data: %02d/%02d/%04d as %02d:%02d:%02d", dia, mes, ano, hora, minuto, segundo);
SCM(playerid, -1, string);
```
Agora se você usar o include desenvolvido por mim você podera abreviar isso, exemplo logo a
baixo.

Exemplo ▼
```pawn
format(string, sizeof string, "Data: %s", DateAndTime());                                          
SCM(playerid, -1, string);
```
A diferença é grande, é importante que vocês leiam o "Leia.txt" todas as informações e
explicações do include estão lá.

* Leia o arquivo "Leia.txt" lá tem informações sobre o include que te ajudará.

Atenciosamente, Walkerxinho7
