/*
merging code

way 1.  git diff <branch name>  (to compare commits, files and many more of 
                                 current branch with the branch whose name 
                                 is given after 'git diff')

        git merge <branch name> (to merge current branch with the branch 
                                 name is given after 'git merge')

way 2.  create a pull request
                        // Pull Request --> it lets you tell others about 
                                            changes you have pushed to 
                                            branch in a respository on GitHub
                                            
                                            It generate and send request to
                                            a main branch to merge it in itself

                                            Person supervising main branch first 
                                            see pull request(mainly changes done)
                                            and then decides whether to merge
                                            it or not. They can comment on it like
                                            it need further improvement and thus 
                                            can't be accepted or any comment


after merging both both branch i.e one from which changes are merged to another branch
, both the branches will have the same content


Pull Command - git pull origin main

it is used to fetch and download from a remote repo (GitHub) and 
immediately update the local repo(laptop) so that content on both repos get same.
*/

/*
Resolving Merge Conflicts
this event takes place when Git is unable to automatically resolve differences in 
code between two commit. 
        It arises due to commit in same line, thus Git don't able to decide which commit has to give preference over another.
                It has to done manually.
*/