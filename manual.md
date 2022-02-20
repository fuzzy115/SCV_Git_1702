**Using git rules**
* 1. Install git. I you already have it as it should be, you can check
git version by typing in the console git --version
* 2. Make an initial configuration in your working directory Using
git init.
* 3. You can review your configuration by typing git config.
then you shall see the config file, formatted json
* 4. git stores your files shapshots in an object oriented database 
structure. Judging by the branches structure I assume the database 
is hierarchical
* 5. You mae a snapshot of the file you have a new version of bytyping
 git commit
<<<<<<< Updated upstream
 I suggest using git commit -m "message", because git requires a message 
 describing committed changes.
* 5. You should only store the files you have changed.After you git add your files
they appear in the staging area i e ready to be commited. 
* 6. No idea about diff and merging. In Pycharm diff works fine and merging works
fine, but commit is a bit tricky when made from terminal.
On the contrary here it's pretty easy to write commits but I can't understand how
am I supposed to get a working tree and how to make some more sophisticated commands work
lawks.
=======
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
git checkout -b name_of_branch creates a new branch and switches working tree there
the starting point for new branch can be specified 
fuck fuck I hate this stuff
It's fucking boring
It drives me mad to rewrite the normal instructions into this
i'm friggin pissed!!!
boring boring boring
when I need it I read the fucking manual! period
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
I wonder what would happen if I delete some references from ./git/logs/HEAD file? maybe I should check
or maybe I should also delete all the references from the ./git/logs/refs/heads tree.
# case "$COMMIT_SOURCE,$SHA1" in
#  ,|template,)
#    /usr/bin/perl -i.bak -pe '
#       print "\n" . `git diff --cached --name-status -r`
# 	 if /^#/ && $first++ == 0' "$COMMIT_MSG_FILE" ;;
#  *) ;;
# esac
hey. perl detected! if I just change $1 there to "hvasjdhdcvwejc" would it actually ask me for
commit message or just commit everything with this crap? I think it would.

if this task would be a bit more interesting...
I'm bored out of my mind
>>>>>>> Stashed changes
