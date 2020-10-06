//Tarea3_3Flib.h
/*Ejercicio 3. Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el 
número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. La 
función es calcular el año, mes y día actual para el número dado de días que se le transmitan. Usando las 
referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama. 
Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.
Ej. calc_años(365), resultado = 1/1/2001*/
void calc_anios(int & total, int & anio, int & mes, int & dia);