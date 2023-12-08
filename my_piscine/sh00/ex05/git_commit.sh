#!/bin/bash

# Navega al directorio de tu repositorio Git
cd /Users/smarin-a/documents/sh00/gitex

# Utiliza el comando "git log" para obtener los ultimos 5 commits
git log --format='%H' -n5
