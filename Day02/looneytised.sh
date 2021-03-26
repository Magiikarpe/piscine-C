#!/bin/bash
 sed 's/theo1/Wile E. Coyote/' | sed 's/steven1/Daffy Duck/' | sed 's/arnaud1/Porky Pig/' | sed 's/pierre-jean/Marvin the Martian/' | grep -E "Wile E. Coyote|Daffy Duck|Porky Pig|Marvin the Martian"
