#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
 short int ETQ;
 short int Datos[8];
} T_LINEA_CACHE;/* Estructura del superbloque */
typedef struct {
 unsigned int s_inodes_count; /* inodos de la partición */
 unsigned int s_blocks_count; /* bloques de la partición */
 unsigned int s_free_blocks_count; /* bloques libres */
 unsigned int s_free_inodes_count; /* inodos libres */
 unsigned int s_first_data_block; /* primer bloque de datos */
 unsigned int s_block_size; /* tamaño del bloque en bytes */
 unsigned char s_relleno[SIZE_BLOQUE-6*sizeof(unsigned int)]; /* relleno a
0's*/
} EXT_SIMPLE_SUPERBLOCK;

/* Bytemaps, caben en un bloque */
typedef struct {
 unsigned char bmap_bloques[MAX_BLOQUES_PARTICION];
 unsigned char bmap_inodos[MAX_INODOS]; /* inodos 0 y 1 reservados, inodo 2
directorio */
} EXT_BYTE_MAPS;

/* inodo */
typedef struct {
 unsigned int size_fichero;
 unsigned short int i_nbloque[MAX_NUMS_BLOQUE_INODO];
} EXT_SIMPLE_INODE;

typedef struct {
 char dir_nfich[LEN_NFICH];
 unsigned short int dir_inodo;
} EXT_ENTRADA_DIR;


int main(int argc, char *argv[]) {
	return 0;
}
