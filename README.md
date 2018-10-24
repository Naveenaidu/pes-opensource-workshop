# PES Open Source Workshop
## Installation Instructions:-

### Linux 
 1. Open the terminal and run the command `sudo apt-get install git`
 2. Open a terminal and verify the installation was successful by typing `git --version`
 
### Windows
  1. Download the latest [Git for Windows installer](https://git-for-windows.github.io/).
  2. When you've successfully started the installer, you should see the Git Setup wizard screen. Follow the Next and Finish prompts   to complete the installation. The default options are pretty sensible for most users.(Just use the default installation settings)
  3. Open a `Git Bash` and verify the installation was successful by typing `git --version`

   
 ### Mac 
 1. Download the latest [Git for Mac installer](https://sourceforge.net/projects/git-osx-installer/files/)
 2. Follow the prompts to install Git.
 3. Open a terminal and verify the installation was successful by typing `git --version`

## How to Contribute
 1. Create a file in the `collaborator` directory with the following format
> #### Name: [YOUR NAME](GitHub link)
> - Place: City, State, Country
> - Bio: Who are you?
> - GitHub: [GitHub account name](GitHub link) 
   
    Give file name as `github_username.md`.
 
 2. Add a hello world program in your favorite language
    
    Save it as `github_username Hello World`.
  
Refer [this link](https://guides.github.com/features/mastering-markdown/) for markdown help.

## Getting Started

1. Fork this repository.

2. Clone your fork-ed repo down to your local machine  `git clone <your_forked_url>`

3. Create a branch `git checkout -b branch-name`

4. Make required modifications

5. Add all your changes to be tracked by git `git add .`

6. Commit your changes

 ```sh
  git commit -m 'add <github-username> collaborator file'
                    OR
  git commit -m 'add <github-username> program'
 ```

7. Push your changes to your forked repo `git push origin <branch-name>`

8. Create a new pull request from your forked repository (Click the New Pull Request button located at the top of your repo)

