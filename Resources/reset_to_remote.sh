
#!/bin/bash

# Define the branch name (e.g., 'main'). Adjust if needed.
BRANCH_NAME="main"

# Discard local changes in tracked files.
git checkout -- .

# Remove untracked files and directories.
git clean -fd

# Fetch the latest changes from the remote repository.
git fetch origin

# Reset the local branch to match the remote branch.
git reset --hard origin/$BRANCH_NAME

# Pull the latest changes from the remote repository (this is optional, as reset already synchronizes).
# git pull origin $BRANCH_NAME

echo "Local repository is now synchronized with the remote branch '$BRANCH_NAME'."
