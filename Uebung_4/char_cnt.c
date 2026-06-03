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
static uint16_t function_cnt_2 = 0;

static unsigned int get_array_length(char text[]);

unsigned int character_cnt(char text[], char SearchChar)
{
	unsigned int i;
	unsigned int cnt = 0;

	for (i = 0; i <= get_array_length; i++)
	{
		cnt += (text[i] == SearchChar);
	}

	return cnt;
}

uint16_t function_counter_value(void)
{
	return function_cnt_2;
}

static unsigned int get_array_length(char text[]) 
{
	uint16_t i;
	function_cnt_1++;
	function_cnt_2++;
	for (i = 0; i < MAX_ARRAY_LENGTH; i++) {
		if (text[i] == '\0') return i;
	}
	return -1;
}
