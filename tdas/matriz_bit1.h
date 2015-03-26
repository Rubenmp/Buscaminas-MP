#ifndef matrizbit1_h
#define matrizbit1_h

#include <iostream>
#include "MatrizBit.h"
using namespace std;

struct MatrizBit1{
	int filas, columnas;
	bool matriz[10][10];
};

bool Inicializar (MatrizBit& m, int fils, int fils, int cols);
bool Get(const MatrizBit& m,int f,int c);
void Set(MatrizBit& m,int f,int c,bool v);

bool Escribir(std::ostream& os,const MatrizBit& m);

bool Escribir(const char nombre[], const MatrizBit& m);
void Traspuesta(MatrizBit& res,const MatrizBit& m);
void And(MatrizBit& res,const MatrizBit& m1,const MatrizBit& m2);
void Or(MatrizBit& res,const MatrizBit& m1,const MatrizBit& m2);
void Not(MatrizBit& res,const MatrizBit& m);



#endif
