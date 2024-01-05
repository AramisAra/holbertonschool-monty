#include "monty.h"

/**
 * opcode_handler - handles opcodes
 * Return: void
 */
void (*check_opcodes(void))(stack_t **, unsigned int)
{
	int i = 0, j;
	int valid_opcode;
	int len_opcode;
	char *buff;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"swap", swap},
		{NULL, NULL}
	};
	/* We valid the opcode */
	while (opcodes[i].opcode)
	{
		j = 0;
		valid_opcode = 1;
		len_opcode = strlen(opcodes[i].opcode);
		while (j < len_opcode)
		{
			if (opcodes[i].opcode[j] != buff[j])
			{
				valid_opcode = 0;
				break;
			}
			j++;
		}
		if (valid_opcode == 1 && (buff[j] == '\n'
			|| buff[j] == ' ' || buff[j] == '\0'))
			break;
		i++;
	}
	return (opcodes[i].f);
}
