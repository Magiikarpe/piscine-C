#!/usr/bin/env bash
##
## EPITECH PROJECT, 2019
## r_tacpy.sh
## File description:
## recycle passwd
##
sed -n 'n;p' | cut -d ":" -f1 | rev | sort -r | sed -n ''$MY_LINE1','$MY_LINE2'p' | sed -z 's/\n/, /g' | rev | sed 's/,/./' | sed 's/ //' | rev
