#!/bin/bash -l
shopt -s extglob
BASEDIR=$(realpath "$0" | sed 's|\(.*\)/.*|\1|');

DBG=0;
VERB=1;

LL=0;

##read config
while getopts s: option ; do
    case "${option}" in
    s) SCRIPT=${OPTARG};;
    esac
done
case "$SCRIPT" in
calcM)
    FORMSCRIPT="calc_M.frm"
    ;;
*)
    echo "choose script"
    exit
    ;;
esac

#####################
## Sequential mode
#####################
now=$(date +"%T")
echo "start time: $now"
form  \
        -I proc/ \
        -t /scratch \
        -d debug=$DBG \
        -d verbosity=$VERB \
        -d NEXT=5 \
        -d NLOOP=$LL \
        $FORMSCRIPT 
wait
now=$(date +"%T")
echo "stop  time: $now"
exit
