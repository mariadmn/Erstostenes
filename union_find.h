#ifndef UNION_FIND_H_
#define UNION_FIND_H_

typedef struct lista Lista;
typedef struct numero Num;

Lista* InicializaLista();
Num* InicilizaNum(int i);
void InsereNum(Lista* lista, Num* novo);
void ImprimeNaoMarcados();
void MarcaMultiplos(Lista* lista, int N);
void ImprimeNaoMarcasdos(Lista* lista);
void LiberaLista(Lista* lista);
void LiberaNum(Num *num);
#endif