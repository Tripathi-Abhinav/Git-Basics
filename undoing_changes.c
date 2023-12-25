/*
UNDOING CHANGES (undo/revert the change)

Case1 :- stages changes
         git reset <file name>
         git reset       (for more files)

Case2 :- commited changes (for one commit)
         git reset HEAD~1       // All the commits are stored internally in the git.
                                // And, the latest commit is by default named as HEAD
                                // ' ~1 ' -> means one commit back from HEAD stage
                NOTE: this command is for only one commit back.
                      we can't use 2,3 or so in place of 1 in 
                      front HEAD~

Case3 :- commited changes (for many commits back)
         git reset <commit hash> 
         git reset --hard <commit hash> 
                            // commit hash = every commit has unique commit hash
                                             // commit hash entered here is that commit 
                                                hash on which we have to reset the commit.
                                                This shifts the HEAD from current commit to
                                                that commit whose is entered.
                            
                            // '--hard' ,  changes from git get reset/removed, but after 
                                           this command changes from this vs code or laptop 
                                           also get reset/removed.


*/