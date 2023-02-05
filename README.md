# data-driven-notebooks
Personal knowledge repository with interactive, data driven notes and tools.

### Disclaimer
* Content of this repository serves for my personal and general learning, it does not include any details of work projects.
* Any comments or ideas here are on my own behalf and do not represent my current or past employers.

## Categories
|Index|Name|Description|
|:----|:----|:----|
|1|analytics|notes on analytical skills including principles, methodologies, frameworks, design patterns and universal tools|
|2|business|notes on economics, entrepreneurship, finance, leadership, management|
|3|computer_science|computing theory and programming including C, Python, R, SQL|
|4|engineering|mechanics, electrical and electronics engineering, automation and control, robotics|
|5|mathematics|fundamental math including algebra, trigonometry, calculus, probability|
|6|physics| fundamental physics including measurements, mechanics, motion, electricity, magnetism|
|7|statistics|probability, descriptive statistics,inferential statistics, bayesian statistics, econometrics|
|8|tools|useful code snippets, references, automation of tasks and workflows, quantified-self|

## Objectives
1. Establish strong base for developing technical skillset and contribution.
2. Develop intuitive understanding of fundamental concepts in the key subjects like mathematics, statistics, computer science, physics, engineering, economics, etc.)
3. Learn with data, solve with code - by experimenting with data we internalise examples, by writing code we automate solving of similar problems. 


## Context

1. **Lifelong Learning and New Perspective** - it has been a long since I studied those topics systematically at a school or university. Then I had a very different body of experiences and knowledge. Nowadays, when I go back to those fundamental concepts, I often get a new realization or a way of thinking about them. This happens through referring to situations I came across, practical applications I have seen, or tapping into a more extensive set of concepts I have learnt about.
2. **Intuition** - often, we use things without complete intuitive understanding but instead rely on memorization or referencing to standard tools and sources.  This might limit our problem-solving and creativity or even make us forget to consider essential assumptions. Understanding is better than memorization.
  >How would you derive that method or formula if you would not know it? (eg. the equation for the sum of arithmetic series, formula for combinations, trigonometric functions, standard deviation, statistical tests, etc..) 
3. **Strong foundations** - in most technical disciplines, learning is sequential; for example, in Mathematics, knowledge is like a complex structure we build on top of layer by layer (you can imagine an inverted pyramid). Misunderstanding or gaps in a particular area can hinder learning in the following areas. In practice, this means I am ** optimizing for coverage vs. efficiency. It might seem like a waste of time for many people since, by design, it has a lot of duplication and overlaps with things I know or at least have learned about before.       
4. **Interactivity** - it attempts to break the `learning-forgetting-relearning` loop by building strong intuition and deeper fundamental understanding through playing with concepts interactively (implementation, simulation, visual examples, exciting/practical problems). That is the reason why the default format of my notes is Python Notebook (Colab).  
5. **Modularity** - by making learning concepts as modular as possible, we can then visualize connections between them, and incrementally improve and expand the knowledge network.

## Guidelines 

1. Cover specific, precise chunk of knowledge or task.
2. Structure note as a quick and useful reference for a concept.
3. Include interactive elements like data tables, simulations, plots, and data-driven analysis. 
4. Describe essential definitions.
5. Demonstrate interesting examples and canonical solutions to typical problems.
6. Include an exciting image or a funny element to make it memorable and improve recall/knowledge retention.

## Structure

Obtained on macbook by running in the terminal following commands

```
brew install tree  
tree -d
```
```
>>
.
├── dev
│   ├── data
│   ├── images
│   ├── templates
│   ├── tests
│   └── utils
└── subjects
    ├── analytics
    ├── business
    │   ├── economics
    │   ├── entrepreneurship
    │   ├── finance
    │   └── management
    ├── computer_science
    │   ├── cp_c
    │   │   └── cp_c_project_1_simple_linear_regression
    │   ├── microcontroller_programming
    │   ├── python
    │   ├── r
    │   └── sql
    ├── engineering
    │   ├── automation_and_control
    │   ├── electricity_and_electronics
    │   ├── general
    │   └── mechanics
    │       ├── engineering_mechanics
    │       ├── mechanical_aspects_of_mechatronics_systems
    │       └── strength_of_materials
    ├── mathematics
    ├── physics
    ├── statistics
    └── tools
```

## Development notes

**Please note:** This is NOT a development project, it is more of a general `learning and knowledge management repository of notes that use code as a vehicle for learning`. As such, it is being optimised for the ease of adding and accessing `bite-sized, self-contained information nuggets`. Currently I develop it directly from Colab Notebooks in a personal drive. Do not expect fancy coding practices, sophisticated environment set up or rigourous testing. 

The big advantage that we get for it is that we can now open and run any notebook end-to-end, directly in a free, cloud Colab computing environment, even on an ipad or phone!

> Just click on the `Open in Colab` button at the top of the notebook.
>
> ![Open In Colab](https://colab.research.google.com/assets/colab-badge.svg)

For more details you can check the `dev` folder.