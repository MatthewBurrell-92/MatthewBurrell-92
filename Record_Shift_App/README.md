# Overview

I wrote this web app to replace the need of paper forms the part time employees of my Fire Department use to record their shifts. The application is simple, my focus was not on the styling of the pages, or writing specific queries from the database. I used this web app as a way to practice working with servers (specfically written in Node.js) and creating and connecting to a database (written in PostgreSQL).

Up until this point, I had only written stand alone programs and applications. I had never tried to create a program that integrated multiple languages and types of files (with the exception of a simple website I designed for a class a few years ago, written in HTML and CSS.)

[Software Demo Video](https://youtu.be/xdD4Un2esWc)

# Web Pages

I have two web pages currently being used. There is also a Home page still included in the code, but that is unused. The first page is called clock_in. This page prompts the user for information including their name, the start date and time of their shift, the shift duration, and any comments on the shift (shift trade, coverage for another employee, etc.) There is a submit button, which tells the program to write that information to the database, and if the data is accepted, the form is cleared. 
The second web page is called view_records. This is a very simple page that queries everything from the database. This page is honestly unfinished. I want to implement features that allow the user to query based on employee name and the date of the shift. I will be working on these features in the future.

# Development Environment

I wrote the entirety of the program in Visual Studio Code. For the database, I used the terminal. Honestly, this was a challenge for me. I really don't like using the terminal, I feel like it is very unforgiving, but with some practice and a lot of "Googling," I was able to get the database created and functioning properly.

Iused Node.js to implement my server and HTML and JavaScript for designing my web pages. The database was written in PostgreSQL.

# Useful Websites

Here are some resources I found helpful!
* [W3 Schools, PostgreSQL Tutorial](https://www.w3schools.com/postgresql/)
* [Introductino to Node.js](https://nodejs.org/en/learn/getting-started/introduction-to-nodejs)

# Future Work

* Implement specific query options for the user in the view_records page. These queries would include searching by employee name and the date of the shift.
* Make the clock_in page more visually appealing for the user. This would also include a brief explanation of how the page works and what information, specifically, is needed.
* Create a true home page, that allows to user to navigate to the different pages, without having to manually change the URL.
* Implement a log in feature, granting some users write only privileges and others read and write.
