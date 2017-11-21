#!/bin/sh
read INPUT_STRING
python -c 'import base64; print(base64.b64decode("'$INPUT_STRING'"))' 
