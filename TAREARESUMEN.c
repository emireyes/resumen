#include  <stdio.h>
#include  <stdlib.h>
#include  <locale.h>

int main (int argc,char **argv)
{
  	setlocale(LC_ALL, "");
 	char *GEN1 = "La primera generaci�n de computadora fue creada de 1940-1956, \nlas computadoras eran grandes, lentas y requer�an un mantenimiento constante. \nSu programaci�n se realizaba en lenguaje de m�quina y principalmente se utilizaba en aplicaciones cient�ficas y militares.\n";
  	char *GEN2 = "La segunda generaci�n de computadoras fue desde 1956-1963, la creaci�n del transistor permiti� la creaci�n de computadoras m�s peque�as, r�pidas y confiables. La programaci�n se volvi� m�s f�cil y accesible. Tambi�n esta generaci�n necesitaba un enfriamiento y eran utilizadas por instituciones acad�micas y grandes empresas.";
	char *GEN3 = "La tercera generaci�n de computadoras fue desde 1964 hasta 1971. La introducci�n de los circuitos integrados permiti� la creaci�n de computadoras m�s poderosas y eficientes en t�rminos de energ�a. En esta �poca se desarrollaron los sistemas operativos, lo cual facilit� la interacci�n con las computadoras.";
	char *GEN4 = "La Cuarta Generaci�n fue desde 1971 hasta 1980. En estos a�os llegaron los microprocesadores, lo que ayud� a la reducci�n de tama�o en las computadoras y un aumento en la capacidad de procesamiento. Las PCs comenzaron a aparecer en esta generaci�n, lo que llev� a popularizar que pudieran tener sus ordenadores en los hogares y empresas.";
	char *GEN5 = "La Quinta Generaci�n fue desde finales de la d�cada de 1980 hasta el presente. Se caracteriza por el desarrollo de tecnolog�as de procesamiento paralelo y supercomputadoras. Tambi�n llega la inteligencia artificial y el procesamiento del lenguaje natural. Las computadoras se volvieron m�s peque�as, poderosas y conectadas, dando paso a la era del internet y la computaci�n en la nube.";


printf("GEN1:\n%s\n\nGEN2:\n%s\n\nGEN3:\n%s\n\nGEN4:\n%s\n\nGEN5:\n%s\n\n", GEN1, GEN2, GEN3, GEN4,GEN5);
	






	return 0;
}
/*salto de linea, variables, acentos, En este c�digo,
la funci�n setlocale establece la configuraci�n regional del programa
 en la configuraci�n regional predeterminada del usuario*/
