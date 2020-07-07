# Branch


A branch is a named pointer to a commit. Selecting a branch in Git terminology is called to checkout a branch. If you are working in a certain branch, the creation of a new commit advances this pointer to the newly created commit.

Each commit knows their parents (predecessors). Successors are retrieved by traversing the commit graph starting from branches or other refs, symbolic references (for example: HEAD) or explicit commit objects. This way a branch defines its own line of descendants in the overall version graph formed by all commits in the repository.

You can create a new branch from an existing one and change the code independently from other branches. One of the branches is the default (typically named master ). The default branch is the one for which a local branch is automatically created when cloning the repository.