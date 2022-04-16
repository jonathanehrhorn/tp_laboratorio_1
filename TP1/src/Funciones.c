/*
 * Funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Jonathan Ehrhorn
 */

#include <stdio.h>
#include "Funciones.h"

/* Función para calcular el precio de vuelo de Aerolíneas con débito */

float CalcularDebitoAerolineas(float precioAerolineas)
{
    float precioConDebitoAerolineas;

    precioConDebitoAerolineas = precioAerolineas - (precioAerolineas/10);

    return precioConDebitoAerolineas;
}

/* Función para calcular el precio de vuelo de Aerolíneas con crédito */

float CalcularCreditoAerolineas(float precioAerolineas)
{
    float precioConCreditoAerolineas;

    precioConCreditoAerolineas = precioAerolineas + (precioAerolineas/4);

    return precioConCreditoAerolineas;
}

/* Función para calcular el precio de vuelo de Aerolíneas con bitcoins */

float CalcularBitcoinAerolineas(float precioAerolineas)
{
    float precioConBitcoinsAerolineas;

    precioConBitcoinsAerolineas = precioAerolineas/4606954.55;

    return precioConBitcoinsAerolineas;
}

/* Función para calcular el precio por kilómetros de Aerolíneas */

float CalcularPrecioPorKilometrosAerolineas(float precioAerolineas, int kilometros)
{
    float precioPorKilometrosAerolineas;

    precioPorKilometrosAerolineas = precioAerolineas/(float)kilometros;

    return precioPorKilometrosAerolineas;
}

/* Función para calcular el precio de vuelo de Latam con débito */

float CalcularDebitoLatam(float precioLatam)
{
    float precioConDebitoLatam;

    precioConDebitoLatam = precioLatam - (precioLatam/10);

    return precioConDebitoLatam;
}

/* Función para calcular el precio de vuelo de Latam con crédito */

float CalcularCreditoLatam(float precioLatam)
{
    float precioConCreditoLatam;

    precioConCreditoLatam = precioLatam + (precioLatam/4);

    return precioConCreditoLatam;
}

/* Función para calcular el precio de vuelo de Latam con bitcoins */

float CalcularBitcoinLatam(float precioLatam)
{
    float precioConBitcoinsLatam;

    precioConBitcoinsLatam = precioLatam/4606954.55;

    return precioConBitcoinsLatam;
}

/* Función para calcular el precio por kilómetros de Latam */

float CalcularPrecioPorKilometrosLatam(float precioLatam, int kilometros)
{
    float precioPorKilometrosLatam;

    precioPorKilometrosLatam = precioLatam/(float)kilometros;

    return precioPorKilometrosLatam;
}
