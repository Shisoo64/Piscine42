#!/bin/sh
id -Gn $FT_USER | sed 's/ /,/' | tr -d '\n'
