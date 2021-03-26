#!/bin/sh
blih -u emma.rulliere@epitech.eu repository create $1
blih -u emma.rulliere@epitech.eu repository setacl $1 ramassage-tek r
blih -u emma.rulliere@epitech.eu repository getacl $1
