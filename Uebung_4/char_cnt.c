/*
=====================================================
  Autor:				Name
  Erstellungsdatum:		dd.mm.yyyy
  Beschreibung:         4. Übung zur Vorlesung Programmieren 2
  Datei:				char_cnt.c
=====================================================
*/

#include "char_cnt.h"

#define MAX_ARRAY_LENGTH 100

unsigned int function_cnt_1 = 0;
static unsigned int function_cnt_2 = 0;

static unsigned int get_array_length(char text[]);






static unsigned int get_array_length(char text[]) {
	unsigned int i;
	function_cnt_1++;
	function_cnt_2++;
	for (i = 0; i < MAX_ARRAY_LENGTH; i++) {
		if (text[i] == '\0') return i;
	}
	return -1;
}
