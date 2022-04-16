/*
 * Funciones.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Jonathan Ehrhorn
 */

#include <stdio.h>
#include "Funciones.h"

/* Funci�n para calcular el precio de vuelo de Aerol�neas con d�bito */

float CalcularDebitoAerolineas(float precioAerolineas)
{
    float precioConDebitoAerolineas;

    precioConDebitoAerolineas = precioAerolineas - (precioAerolineas/10);

    return precioConDebitoAerolineas;
}

/* Funci�n para calcular el precio de vuelo de Aerol�neas con cr�dito */

float CalcularCreditoAerolineas(float precioAerolineas)
{
    float precioConCreditoAerolineas;

    precioConCreditoAerolineas = precioAerolineas + (precioAerolineas/4);

    return precioConCreditoAerolineas;
}

/* Funci�n para calcular el precio de vuelo de Aerol�neas con bitcoins */

float CalcularBitcoinAerolineas(float precioAerolineas)
{
    float precioConBitcoinsAerolineas;

    precioConBitcoinsAerolineas = precioAerolineas/4606954.55;

    return precioConBitcoinsAerolineas;
}

/* Funci�n para calcular el precio por kil�metros de Aerol�neas */

float CalcularPrecioPorKilometrosAerolineas(float precioAerolineas, int kilometros)
{
    float precioPorKilometrosAerolineas;

    precioPorKilometrosAerolineas = precioAerolineas/(float)kilometros;

    return precioPorKilometrosAerolineas;
}

/* Funci�n para calcular el precio de vuelo de Latam con d�bito */

float CalcularDebitoLatam(float precioLatam)
{
    float precioConDebitoLatam;

    precioConDebitoLatam = precioLatam - (precioLatam/10);

    return precioConDebitoLatam;
}

/* Funci�n para calcular el precio de vuelo de Latam con cr�dito */

float CalcularCreditoLatam(float precioLatam)
{
    float precioConCreditoLatam;

    precioConCreditoLatam = precioLatam + (precioLatam/4);

    return precioConCreditoLatam;
}

/* Funci�n para calcular el precio de vuelo de Latam con bitcoins */

float CalcularBitcoinLatam(float precioLatam)
{
    float precioConBitcoinsLatam;

    precioConBitcoinsLatam = precioLatam/4606954.55;

    return precioConBitcoinsLatam;
}

/* Funci�n para calcular el precio por kil�metros de Latam */

float CalcularPrecioPorKilometrosLatam(float precioLatam, int kilometros)
{
    float precioPorKilometrosLatam;

    precioPorKilometrosLatam = precioLatam/(float)kilometros;

    return precioPorKilometrosLatam;
}
