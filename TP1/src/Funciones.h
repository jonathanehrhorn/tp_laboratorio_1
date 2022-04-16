/*
 * Funciones.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Jonathan Ehrhorn
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */

/// @brief Función para calcular el precio de vuelo de Aerolíneas con débito
/// @param precioAerolineas
/// @return precioConDebitoAerolineas

float CalcularDebitoAerolineas(float precioAerolineas);

/// @brief Función para calcular el precio de vuelo de Aerolíneas con crédito
/// @param precioAerolineas
/// @return precioConCreditoAerolineas
float CalcularCreditoAerolineas(float precioAerolineas);

/// @brief Función para calcular el precio de vuelo de Aerolíneas con bitcoins
/// @param precioAerolineas
/// @return precioConBitcoinsAerolineas
float CalcularBitcoinAerolineas(float precioAerolineas);

/// @brief Función para calcular el precio por kilómetros de Aerolíneas
/// @param precioAerolineas
/// @param kilometros
/// @return precioPorKilometrosAerolineas
float CalcularPrecioPorKilometrosAerolineas(float precioAerolineas, int kilometros);

/// @brief Función para calcular el precio de vuelo de Latam con débito
/// @param precioLatam
/// @return precioConDebitoLatam
float CalcularDebitoLatam(float precioLatam);

/// @brief Función para calcular el precio de vuelo de Latam con crédito
/// @param precioLatam
/// @return precioConCreditoLatam
float CalcularCreditoLatam(float precioLatam);

/// @brief Función para calcular el precio de vuelo de Latam con bitcoins
/// @param precioLatam
/// @return precioConBitcoinsLatam
float CalcularBitcoinLatam(float precioLatam);

/// @brief Función para calcular el precio por kilómetros de Latam
/// @param precioLatam
/// @param kilometros
/// @return precioPorKilometrosLatam
float CalcularPrecioPorKilometrosLatam(float precioLatam, int kilometros);
