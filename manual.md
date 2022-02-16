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
* 5. You should only store the files yoou have changed. That stands 
to reason. You can add the changed files