What is the purpose of the on section?
This tells github actiosn when the workflow should run. For example this project runs on pushed to main.

What does workflow_dispatch do?
Allows me to be able to manually run the workflow from the actions tab

What does runs-on specify?
This specifics what operating system the job will use, this one uses ubuntu-latest

Why is actions/checkout needed?
This is needed to download the files to the actions runner so the workflow can access and use the source code

What does the language setup action do?
Sets up the nevironment so the language i have choosen can be used

What is the difference between compiling and running the program?
Compile converts my code into and executable program and running executes that compiled program.

Where can you see the program output?
In the github actions log then you click on the prgram ran and can see the details.

What is the difference between a workflow, a job, and a step?
A workflow is the entire process that runs when an event happens. A job is the group of steps that run. And a step is an individual action that runs inside a job. 
