#!/bin/sh
# check-flex.sh by Dan Peori (dan.peori@oopo.net)

## Check for flex.
flex --version 1> /dev/null || { echo "ERROR: Install flex before continuing."; exit 1; }
