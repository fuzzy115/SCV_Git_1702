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
 I suggest using git commit -m "message", because git requires a message 
 describing committed changes.
* 5. You should only store the files you have changed.After you git add your files
they appear in the staging area i e ready to be commited. 
* 6. No idea about diff and merging. In Pycharm diff works fine and merging works
fine, but commit is a bit tricky when made from terminal.
On the contrary here it's pretty easy to write commits but I can't understand how
am I supposed to get a working tree and how to make some more sophisticated commands work
lawks.