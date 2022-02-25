#!/bin/sh

# Make slock, only if in the directory
cd ./slock && sudo make install

# Create the directory if it doesn't already exist
mkdir -p ~/.local/bin

# Copy the script to the directory
cp bosskey ~/.local/bin
