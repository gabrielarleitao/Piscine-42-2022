#!/bin/bash
git log | grep ^commit | head -n5 | awk '{print $2}'


# git log --pretty=format:'%H' -n5
# echo
