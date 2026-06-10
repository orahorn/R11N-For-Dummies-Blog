#!/bin/bash

find . -type f -executable -name '[0-9]*' -exec file {} \;
find . -type f -executable -name '[0-9]*' -exec rm -iv {} +
