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

- update links in the index tables and images
- set up links in a way that they keep working even if I change the repository structure (eg. by using relative links)
- investigate if colab can automatically execute functions from utils folder
  - if yes, then could move common functions from notebooks to central utils folder
  - and could add tests for them
- add new notebook template to templates folder to keep it minimalistic
  - remove unnedeed parts from previous notebooks
- set up and test notebooks such that they can be run and developed in a same way both in VS code locally as well as in an online colab environment