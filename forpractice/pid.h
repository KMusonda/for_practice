#!/bin/bash
#include <stdio.h>
#include <unistd.h>
main()
{
	a=2
	b=4
	sum=`xpr a + b`

	echo "sum is " $sum
	echo "pid is $!"
}
