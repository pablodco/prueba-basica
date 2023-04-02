/*
 * administrador.h
 *
 *  Created on: 23 mar 2023
 *      Author: pablo
 */

#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_
typedef struct{
	char* nombre;
	char* contraseña;
	int id;
	int longitudDeNombre;
	int longitudDeContraseña;
}Administrador;

imprimirAdmin();



#endif /* ADMINISTRADOR_H_ */
