# Merge


Merging takes the changes from one branch (in the same repository or from a fork), and applies them into another.

A merge can be done automatically via a Pull Request via the GitHub.com web interface if there are no conflicting changes, or can always be done via the command line. 

By now you should be equipped with knowledge of Git and GitHub top terminologies and features of which you should hopefully start putting into practice. Of course, there are plenty of other rich features of GitHub especially, which we implore you to discover on your own.

![merge](https://developers.sap.com/tutorials/webide-github-merge-pull-request/_jcr_content.github-proxy.1563447317.file/p6_5.png)


# Merge Conflict

A merge conflict is an event that occurs when Git is unable to automatically resolve differences in code between two commits. However, when there are conflicting changes on the same lines, a “merge conflict” occurs because Git doesn't know which code to keep and which to discard.

## How to Reduce Merge Conflicts:

1. Sending pull requests to GitHub
2. Fetching remote changes from GitHub
3. Attempting to merge and rebase

I have also added some helpful information about how to set up your mergetool, should you desire to do so. Before I conclude, I want to save you some future headaches by showing you how to reduce the number of merge conflicts you generate in the first place. As the saying goes, an ounce of prevention is worth more than a pound of cure. Here are three useful steps to help reduce merge conflict headaches you may have. Bear in mind, though: merge conflicts are inevitable. You can decrease them, but you can never fully eliminate them.

![merge conflict](https://help.github.com/assets/images/help/pull_requests/resolve-merge-conflicts-button.png)