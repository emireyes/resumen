#include  <stdio.h>
#include  <stdlib.h>
#include  <locale.h>

int main (int argc,char **argv)
{
  	setlocale(LC_ALL, "");
 	char *GEN1 = "La primera generación de computadora fue creada de 1940-1956, \nlas computadoras eran grandes, lentas y requerían un mantenimiento constante. \nSu programación se realizaba en lenguaje de máquina y principalmente se utilizaba en aplicaciones científicas y militares.\n";
  	char *GEN2 = "La segunda generación de computadoras fue desde 1956-1963, la creación del transistor permitió la creación de computadoras más pequeñas, rápidas y confiables. La programación se volvió más fácil y accesible. También esta generación necesitaba un enfriamiento y eran utilizadas por instituciones académicas y grandes empresas.";
	char *GEN3 = "La tercera generación de computadoras fue desde 1964 hasta 1971. La introducción de los circuitos integrados permitió la creación de computadoras más poderosas y eficientes en términos de energía. En esta época se desarrollaron los sistemas operativos, lo cual facilitó la interacción con las computadoras.";
	char *GEN4 = "La Cuarta Generación fue desde 1971 hasta 1980. En estos años llegaron los microprocesadores, lo que ayudó a la reducción de tamaño en las computadoras y un aumento en la capacidad de procesamiento. Las PCs comenzaron a aparecer en esta generación, lo que llevó a popularizar que pudieran tener sus ordenadores en los hogares y empresas.";
	char *GEN5 = "La Quinta Generación fue desde finales de la década de 1980 hasta el presente. Se caracteriza por el desarrollo de tecnologías de procesamiento paralelo y supercomputadoras. También llega la inteligencia artificial y el procesamiento del lenguaje natural. Las computadoras se volvieron más pequeñas, poderosas y conectadas, dando paso a la era del internet y la computación en la nube.";


printf("GEN1:\n%s\n\nGEN2:\n%s\n\nGEN3:\n%s\n\nGEN4:\n%s\n\nGEN5:\n%s\n\n", GEN1, GEN2, GEN3, GEN4,GEN5);
	






	return 0;
}
/*salto de linea, variables, acentos, En este código,
la función setlocale establece la configuración regional del programa
 en la configuración regional predeterminada del usuario*/
