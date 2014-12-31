#!/bin/bash
# For copying many larger files (movies, music)
# so that memory doesn't get devoured like usual
# with the cp command

if [ $# -lt 1 ]
then
    echo "Not enough args (need -help?)"
elif [ $1 == "-help" ] || [ $1 == "-h" ]
then
    echo "usage: cp_alt.sh /path/to/dir_a /path/to/dir_b"
else
    for fname in `ls $1`
    do cp -r $1/$fname $2; done
fi
