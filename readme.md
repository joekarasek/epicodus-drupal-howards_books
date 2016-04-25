# _**Howard's Books**_
### Drupal Week One Code Review, Drupal Basics
#### _**By Joseph Karasek, 04.22.2016**_
---
## Description

_This website is a mock website for a fictional book store called Howard's Books. This site was put together to meet the criteria for the week one code review for the level 3 drupal class at Epicodus, a vocation school for aspiring programmers in Portland, OR._

_This site was built using [Drupal 7.43](https://www.drupal.org/drupal-7.43-release-notes)._

#### _Code Review Criteria_

* _Did you create a "Book Review" custom content type? Are the fields named correctly and in the correct order?_
* _Is there an "About" page and a "Locations" page?_
* _Is there a Contact form with a "Contact" link in the main menu?_
* _Are the 4 "Book Review" fields all set to required? Does the rating field use either radio buttons or a menu?_
* _Did you create the "New Books" view and display it as a block?_
* _Did you create a feature for the "Book Review" content type and the "New Books" view?_
* _Did you create the "Reviewer" role and assign it the correct permissions?_
* _Did you create the coupon block on the front page and make it only visible to authenticated users?_
* _Is there a "Site Configuration" feature tracking the specified Strongarm variables? Did you make changes and then recreate your "Site Configuration" feature?_
* _Are you able to discuss the process you used for your project and the concepts behind it with an instructor using correct terminology?_
* _Did you export your database at the end of your project and include it with your repository with login information in a clear readme?_

___
## Installation/Setup

### Prerequisites

_This installation assumes you will use the MAMP stack to deploy this site. You will need the following things properly installed on your computer._

* [Git](http://git-scm.com/)
* [MAMP](https://www.mamp.info/en/)


### Setting up the database

1. Launch MAMP.
2. Change `MAMP>Preferences>Web Server>Document Root` to point at the root directory of this directory.
3. Open the 'Webstart Page' through MAMP _or_ go to 'http://localhost:8888/MAMP/?language=English'
4. Open myPhpAdmin
5. Import the project's database from the `./sites/db-backup/`
6. Make sure you have a database user with user/password matching the info below (if its not included, you probably shouldn't have access to the database ;p )

### Viewing the site

_With MAMP running and the database setup, you should be able to view the site at `localhost:8888`._

---
## User Roles

_The following user names and passwords can be used to access the site's databse, administration, and book reviewer roles..._


#### Database administration
* Name: admin
* Password: admin

#### Site administration
* Name: admin
* Password: admin

#### Book Reviewer
* Name: Hughy Long
* Password: admin

#### Authenticated User
* Name: Joe Schmo
* Password: admin

---
## Misc.

### Known Bugs

_No known bugs at this time._

### Support and contact details

_If you have any questions, concerns, or feedback, please contact the authors through_ [gitHub](https://github.com/joekarasek/).


<!-- * _This app was created with the [Ember](http://emberjs.com/) framework._
* _This project was built on [Node.js](https://nodejs.org/en/)._
* _The database for this app was handled by [FireBase](https://www.firebase.com/)._
* _Dependencies were handled with [npm](https://www.npmjs.com/) and [Bower](http://bower.io/)._ -->

### License

MIT License.

Copyright (c) 2016 **_Joseph Karasek_**
