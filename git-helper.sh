#!/bin/bash

# Add all files to the staging area
git add .

# Prompt for a custom commit message
echo "Please enter your commit message:"
read commit_message

# Commit changes with the specified commit message
git commit -m "$commit_message"

# Push changes to the current branch
git push

echo "Git add, commit, and push completed successfully."

