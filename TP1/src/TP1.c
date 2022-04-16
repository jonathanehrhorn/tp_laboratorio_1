/*
 ============================================================================
 Name        : TP1.c
 Author      : Jonathan Ehrhorn
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float CalcularDebitoAerolineas(float precioAerolineas);
float CalcularCreditoAerolineas(float precioAerolineas);
float CalcularBitcoinAerolineas(float precioAerolineas);
float CalcularPrecioPorKilometrosAerolineas(float precioAerolineas, int kilometros);
float CalcularDebitoLatam(float precioLatam);
float CalcularCreditoLatam(float precioLatam);
float CalcularBitcoinLatam(float precioLatam);
float CalcularPrecioPorKilometrosLatam(float precioLatam, int kilometros);

int main()
{
	setbuf(stdout, NULL);

	int opcion;
	int kilometros;
    float precioAerolineas;
    float precioAerolineasConDebito;
    float precioAerolineasConCredito;
    float precioAerolineasConBitcoins;
    float precioAerolineasPorKilometros;
    float precioLatam;
    float precioLatamConDebito;
    float precioLatamConCredito;
    float precioLatamConBitcoins;
    float precioLatamPorKilometros;
    float diferenciaDePrecios;

    /* Las siguientes variables inicializadas en 0 evitan que los resultados arrojen números irrisorios. */

    kilometros = 0;
    precioAerolineas = 0;
    precioAerolineasConDebito = 0;
    precioAerolineasConCredito = 0;
    precioAerolineasConBitcoins = 0;
    precioAerolineasPorKilometros = 0;
    precioLatam = 0;
    precioLatamConDebito = 0;
    precioLatamConCredito = 0;
    precioLatamConBitcoins = 0;
    precioLatamPorKilometros = 0;
    diferenciaDePrecios = 0;

    do
    {
    	printf("1 - Ingresar kilómetros: \n\n2 - Ingresar precio de vuelos: \n- Precio vuelo Aerolíneas: \n- Precio vuelo Latam: \n\n3 - Calcular todos los costos: \na - Tarjeta de débito (descuento 10 por ciento)\nb - Tarjeta de crédito (interés 25 por ciento)\nc - Bitcoin (1 BTC -> 4606954.55 Pesos Argentinos)\nd - Mostrar precio por km (precio unitario)\ne - Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n4 - Informar resultados: \nLatam: \na - Precio con tarjeta de débito: \nb - Precio con tarjeta de crédito: \nc - Precio pagando con bitcoin: \nd - Precio unitario: \nAerolíneas: \na - Precio con tarjeta de débito: \nb - Precio con tarjeta de crédito: \nc - Precio pagando con bitcoin: \nd - Precio unitario: \nLa diferencia de precio es: \n\n5 - Carga forzada de datos \n\n6 - Salir \n\n");

    	printf("Ingrese número de opción: ");
    	scanf("%d", &opcion);

    	if(opcion == 1)
    	{
    		printf("Ingrese cantidad de kilómetros: ");
    		scanf("%d", &kilometros);
    	}
    	else
    	{
    		if(opcion == 2)
    		{
    			printf("Ingrese precio de Aerolíneas: ");
    			scanf("%f", &precioAerolineas);

    			printf("Ingrese precio de Latam: ");
    			scanf("%f", &precioLatam);
    		}
    		else
    		{
    			if(opcion == 3)
    			{
    				precioAerolineasConDebito = CalcularDebitoAerolineas(precioAerolineas);
    				precioAerolineasConCredito = CalcularCreditoAerolineas(precioAerolineas);
    				precioAerolineasConBitcoins = CalcularBitcoinAerolineas(precioAerolineas);
    				precioAerolineasPorKilometros = CalcularPrecioPorKilometrosAerolineas(precioAerolineas, kilometros);

    				precioLatamConDebito = CalcularDebitoLatam(precioLatam);
    				precioLatamConCredito = CalcularCreditoLatam(precioLatam);
    				precioLatamConBitcoins = CalcularBitcoinLatam(precioLatam);
    				precioLatamPorKilometros = CalcularPrecioPorKilometrosLatam(precioLatam, kilometros);

    				if(precioAerolineas > precioLatam)
    				{
    					diferenciaDePrecios = precioAerolineas - precioLatam;
    				}
    				else
    				{
    					diferenciaDePrecios = precioLatam - precioAerolineas;
    				}
    			}
    			else
    			{
    				if(opcion == 4)
    				{
    					printf("\nKMs ingresados: %d km\n", kilometros);
    					printf("\n");
    					printf("Precio Aerolíneas: $ %.2f\n", precioAerolineas);
    					printf("Precio con tarjeta de débito: $ %.2f\n", precioAerolineasConDebito);
    					printf("Precio con tarjeta de crédito: $ %.2f\n", precioAerolineasConCredito);
    					printf("Precio pagando con bitcoin: %.4f BTC\n", precioAerolineasConBitcoins);
    					printf("Mostrar precio unitario: $ %.2f\n", precioAerolineasPorKilometros);
    					printf("\n");
    					printf("Precio Latam: $ %.2f\n", precioLatam);
    					printf("Precio con tarjeta de débito: $ %.2f\n", precioLatamConDebito);
    					printf("Precio con tarjeta de crédito: $ %.2f\n", precioLatamConCredito);
    					printf("Precio pagando con bitcoin: %.4f BTC\n", precioLatamConBitcoins);
    					printf("Mostrar precio unitario: $ %.2f\n", precioLatamPorKilometros);
    					printf("\n");
    					printf("La diferencia de precio es: $ %.2f", diferenciaDePrecios);
    				}
    				else
    				{
    					if(opcion == 5)
    					{
    						kilometros = 7090;
    						precioAerolineas = 162965;
    						precioLatam = 159339;

    						precioAerolineasConDebito = CalcularDebitoAerolineas(precioAerolineas);
    						precioAerolineasConCredito = CalcularCreditoAerolineas(precioAerolineas);
    						precioAerolineasConBitcoins = CalcularBitcoinAerolineas(precioAerolineas);
    						precioAerolineasPorKilometros = CalcularPrecioPorKilometrosAerolineas(precioAerolineas, kilometros);

    						precioLatamConDebito = CalcularDebitoLatam(precioLatam);
    						precioLatamConCredito = CalcularCreditoLatam(precioLatam);
    						precioLatamConBitcoins = CalcularBitcoinLatam(precioLatam);
    						precioLatamPorKilometros = CalcularPrecioPorKilometrosLatam(precioLatam, kilometros);

    						diferenciaDePrecios = precioAerolineas - precioLatam;

    						printf("\nKMs ingresados: %d km\n", kilometros);
    						printf("\n");
    						printf("Precio Aerolíneas: $ %.2f\n", precioAerolineas);
    						printf("Precio con tarjeta de débito: $ %.2f\n", precioAerolineasConDebito);
    						printf("Precio con tarjeta de crédito: $ %.2f\n", precioAerolineasConCredito);
    						printf("Precio pagando con bitcoin: %.4f BTC\n", precioAerolineasConBitcoins);
    						printf("Mostrar precio unitario: $ %f\n", precioAerolineasPorKilometros);
    						printf("\n");
    						printf("Precio Latam: $ %.2f\n", precioLatam);
    						printf("Precio con tarjeta de débito: $ %.2f\n", precioLatamConDebito);
    						printf("Precio con tarjeta de crédito: $ %.2f\n", precioLatamConCredito);
    						printf("Precio pagando con bitcoin: %.4f BTC\n", precioLatamConBitcoins);
    						printf("Mostrar precio unitario: $ %f\n", precioLatamPorKilometros);
    						printf("\n");
    						printf("La diferencia de precio es: $ %.2f", diferenciaDePrecios);
    					}
    				}
    			}
    		}
    	}
    }while(opcion != 6);

    return 0;
}
