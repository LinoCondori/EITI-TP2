/* Copyright 2022, Lino Fabian Condorì <condori.lino.f@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/** @file alumno.c
 **
 ** @brief archivo fuente de las funciones de alumno 
 **
 ** Plantilla para los archivos de codigo fuente de prácticos de las 
 ** asignaturas Diseño Integrado de Sistemas Emebebidos y Sistemas Embebidos
 ** de Tiempo Real dictadas en de la Especialización en Integración de
 ** Sistemas Informaticos de la Univesidad Nacional de Tucumán
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.09.10 | lcondori    | Version inicial del archivo             |
 ** 
 ** @defgroup plantilla Archivo C de alumno
 ** @brief Archivo C
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "alumno.h"
#include <stdio.h>
/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/**
 * @brief Funcion privada del modulo
 * 
 * Esta funcion fue creada con el solo objeto de ejemplificar que las funciones
 * privadas deben ser declaradas y documentadas en el archivo fuente.
 * 
 */
void FuncionPrivada();

/* === Definiciones de funciones privadas ================================== */

void FuncionPrivada(){

}

/* === Definiciones de funciones publicas ================================== */

void nombre(const struct alumno_s * alumno)
{
	printf("Apellido del Alumno: %s \r\n", alumno->apellido);
	printf("Nombre del Alumno: %s\r\n", alumno->nombre);
	printf("DNI del Alumno: %s \r\n", alumno->documento);



};

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */

