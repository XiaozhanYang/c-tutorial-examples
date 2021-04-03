#!/bin/bash

echo "Username: $1";
echo "Age: $2";
echo "Full Name: $3";

gcc -o .tests $1

./.tests $2 $3
