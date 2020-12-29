/*
   Functional simulation of all instructions 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
//#include <sys/time.h>

#include "machine.h"
#include "inst_process.h"
#include "sim.h"

#define reg(x) reg_memory[x * 4].mem_data
#define mem(x) data_memory[x].mem_data

/* HOMEWORK: finish this part of code */
/* the input is a instruction, e.g. ADD	$1, $2, $3 */
void inst_func_simulation(char* inst){
	int	i, j, k; 
	char *OP; 
	long r_d, r_s, r_t, C, shamt;
	char	reg_dest[32];

	/* instruction: ADD $1, $2, $3 */
	char tmp[128];
	strcpy(tmp, inst);
	OP = strtok(tmp, "\t"); 
	char* operands = OP + strlen(OP) + 1;
	printf("OP: %s operands: %s\n", OP, operands);
	PC += 4;
	if(strcmp(OP, "ADD") == 0){ /* an ADD operation*/
		/* get the source and destination register */
		/* get source data from the register file and calculate the result, and update the result to the register file  */
		sscanf(operands, "$%ld, $%ld, $%ld", &r_d, &r_s, &r_t);
		reg(r_d) = reg(r_s) + reg(r_t);

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				sim_cycles++;
				break;
			case MULTI:
				sim_cycles += 4;
				break;
			case PIPELINE:
				if(sim_cycles == 0)
					sim_cycles = 4;
				else
					sim_cycles++;
				break;
		}
		return;
	}
	/* finish the rest of the operations */
	if(strcmp(OP, "SUB") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "ADDI") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "SUBI") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "OR") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "AND") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "SLL") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "SRL") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "LW") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "SW") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "LBU") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "SBU") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "J") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "BEQ") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

	if(strcmp(OP, "BNE") == 0)
	{
		/* HOMEWORK */

		switch(DATAPATH_TYPE)
		{
			case SINGLE:
				break;
			case MULTI:
				break;
			case PIPELINE:
				break;
		}
		return;
	}

}
