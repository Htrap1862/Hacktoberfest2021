#!/bin/bash
 
starting="roses are red\nviolets are blue\n"
# Declaration in the middle
declare -a swear=("fuckyty fuck" "damn this thing" "do do dooo" "laliloo" "dubiduuu" )
 
# Declaration in the end
declare -a end=("I love you" "you are cute" "I see you")

ran=$(( $RANDOM % 4 + 0 ))
ran2=$(( $RANDOM % 2 + 0 )) 

poem="${swear[$ran]}\n${end[$ran2]}"

echo -e "$starting$poem"
