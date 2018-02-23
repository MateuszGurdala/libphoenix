/*
 * Phoenix-RTOS
 *
 * libphoenix
 *
 * Entrypoint (ia32)
 *
 * Copyright 2017 Phoenix Systems
 * Author: Pawel Pisarczyk
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#include ARCH
#include <sys/file.h>
#include <stdlib.h>
#include <getopt.h>
#include <stdio.h>


extern int main(int argc, char **argv);


char **environ;
FILE stdin_file, stdout_file;

void _start(int argc, char **argv, char **env)
{
	environ = env;
	optind = 1;
	stdin = &stdin_file;
	stdout = &stdout_file;
	_malloc_init();

	exit(main(argc, argv));
}
