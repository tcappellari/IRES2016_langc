/*
 * prova_printf.c
 * 
 * Copyright 2016 Marco <marco@r2d2>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	for(int x=1;x<=10;x++)
	{
		for(int y=1;y<=10;y++)
		{
			printf("%d",(x*y));
			printf("\t");
		}
		printf("\n");
	}
	printf("Studia le tabelline \n");
	return 0;
}

