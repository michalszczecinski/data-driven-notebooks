# Development notes

**Please note:** This is NOT a development project, it is more of a general `learning and knowledge management repository of notes that use code as a vehicle for learning`. As such, it is being optimised for the ease of adding and accessing `bite-sized, self-contained information nuggets`. Currently I develop it directly from Colab Notebooks in a personal drive. Do not expect fancy coding practices, sophisticated environment set up or rigourous testing. 

The big advantage that we get for it is that we can now open and run any notebook end-to-end, directly in a free, cloud Colab computing environment, even on an ipad or phone!

## How to run

### To run notebooks online (in colab cloud environment) // RECOMMENDED METHOD

- Need a google account.

> Just click on the `Open in Colab` button at the top of the notebook.
>
> ![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)

### To run notebooks locally // THIS IS NOT COMPLETED YET

```
git clone https://github.com/michalszczecinski/data-driven-notebooks
cd data-driven-notebooks

# create virtual environment
# https://realpython.com/python-virtual-environments-a-primer/
python3 -m venv venv
source venv/bin/activate

# install dependencies (currently missing)
pip install -r requirements.txt

# run using VS code
open -a "Visual Studio Code 2" 

# or run in jupyter notebook
jupyter notebook
```

## TODO

1. Update links in the index tables and images to point to the new repository structure
2. Set up links in a way that they keep working even if I change the repository structure (eg. by using relative links).
3. Investigate if colab can automatically execute functions from utils folder.
   1. if yes, then move common functions from notebooks to the central utils folder.
   2. and start adding tests for those functions.
4. Add the new notebook template to templates folder to keep it minimalistic.
   1. Remove not necessary parts and boilerplate from the previous notebooks.
5. Set up and test notebooks such that they can be run and developed in a same way both in VS code locally as well as in an online colab environment.
6. Create requirements file and specify dependencies.
7. Investigate automated run tests and CI workflow for notebooks to make sure all notebooks run end-to-end.
8. Investigate creating github pages for the repository to make it more accessible and easy to navigate.
9. Consider using issues for the todolist instead.