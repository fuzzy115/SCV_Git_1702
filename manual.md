**Using git rules**
* 1. Install git. I you already have it as it should be, you can check
git version by typing in the console git --version
* 2. Make an initial configuration in your working directory Using
git init.
* 3. You can review your configuration by typing git config.
then you shall see the config file, formatted json
* 4. git stores your files shapshots in an object oriented database 
structure. you use git status to see which files are in your staging area, ready to be
committed into the repository
* 5. You make a snapshot of the file you have a new version of by typing
 git commit
 I sometimes suggest using git commit -m "message", because git requires a message 
 describing committed changes, and if you havent written something significant which 
 needs to be thouroughly documented you can get stuck in vim. 
 vim on windows differs from the original.
* 6. You should only store the files you have changed. That stands 
to reason. You can add the changed files by using the command
git add filename . If you added the file it would be in the staging area, so if you make
any changes after you added the file and then commit it, the file to go into your 
repository wil be the one staged when you added it, not the edited version.
* 7. branching: it is a bit similar to having different folders
though of course nothing of the kind.
You can start a new branch by using git branch [args] command. If no
argument is specified, it would show you the branch you are in.
you can switch between branches by using 
git switch [name_of_branch] command
* 8. git is made to sychronize data between repositories.
By using the git push command, you can push your changes to the other repository
By using git pull command, you can pull the files from other repository 
By using git clone command, you can make a local copy of any remote repository.
it's us
* 9. git merge command is used to merge different branches of a project into one. When merging there can rise a conflict between project files 
* you can read more at https://www.atlassian.com/git/tutorials/setting-up-a-repository or [git manual different languages , here ru](https://git-scm.com/book/ru/v2/)
* 10. TODO:strategies of merging
* 11. git reset - reinitialize storage. all the staged files will be unstaged and untracked.

git stash - store data before reset if there is data to keep
git log - get changelog
git checkout commitid - revert to old commit
git checkout -b branchname -old-state commitid 
* 12. 
