body {

  margin: 0; /* eliminates margin spacing on body so that the footer color is able to fill the window */

  /* Sets the background for the entire page to a light yellow color */

  background-color: #FAF8DA;

  font-family: 'Open Sans', sans-serif; /* Font from Google Fonts */

}

/* begin header styling */

.primary-header {

  text-align: center; /* This will center the main heading and the main image */

}

.main-heading {

  font-size: 70px;

  color: #205D76;

}

.town-preview {

  width: 650px;

}

/* end header styling */

/* begin main styling */

.store-section {

  display: flex; /* Makes the content witin this element flexible */

  display: -webkit-flex; /* vendor prefix */

  margin: 50px auto; /* Adds spacing at top of all sections and then centers them */

  width: 450px; /* approximate width of each section */

}

.building {

  width: 200px;

}

.store-details { /* This is the div that contains the text */

  margin-left: 30px;

}

.category-heading {

  color: #205D76;

  font-size: 30px;

}

.store-list {

  padding-left: 15px;

  color: #FFC122; /* this will make sure the bullet points turn dark yellow! */

}

.store-name {

  margin-bottom: 10px; /* adds a bit of space at the bottom of each list item */

}

.store-link {

  color: #EA6E2F;

  font-size: 20px;

}

/* end main styling */

/* begin footer styling */

.primary-footer {

  padding: 2px;

  background-color: #FFC122;

  text-align: center;

}

.created-by {

  color: #FFFFFF;

  font-size: 20px;

}

/* end footer styling */


і HTML


<!DOCTYPE html>

<html>

  <head>

    <title> My Ampi town </title>

    <link rel="stylesheet" href="./styles.css" />

  </head>

  <body>

    <header class="primary-header">

      <h1 class="main-heading">Welcome To Ampli Town</h1>

      <img class="town-preview" src="https://res.cloudinary.com/dnna0ynnm/image/upload/v1537983906/townheader.svg" />

    </header>

    <main class="primary-main">

      <section class="store-section">

        <img class="building" src="https://res.cloudinary.com/dnna0ynnm/image/upload/v1537983905/townsleep.svg" />

        <div class="store-details">

          <h2 class="category-heading">Sleep</h2>

          <ul class="store-list">

            <li class="store-name">

              <a class="store-link" href="./snooze.html"> The Snooze Inn </a>

            </li>

            <li class="store-name">

              <a class="store-link" href="#">Zzz Hotel</a>

            </li>

          </ul>

        </div>

      </section>

      <section class="store-section">

        <img class="building" src="https://res.cloudinary.com/dnna0ynnm/image/upload/v1537983905/townfood.svg"/>

        <div class="store-details">

          <h2 class="category-heading">Food</h2>

          <ul class="store-list">

            <li class="store-name">

              <a class="store-link" href="#">Just Cookies</a>

            </li>

            <li class="store-name">

              <a class="store-link" href="#">Cake Too</a>

            </li>

          </ul>

        </div>

      </section>

      <section class="store-section">

        <img class="building" src="https://res.cloudinary.com/dnna0ynnm/image/upload/v1537983905/townshop.svg" />

        <div class="store-details">

          <h2 class="category-heading">Shop</h2>

          <ul class="store-list">

            <li class="store-name">

              <a class="store-link" href="#">Puppy Parade</a>

            </li>

            <li class="store-name">

              <a class="store-link" href="#">Cool Kittens</a>

            </li>

          </ul>

        </div>

      </section>

    </main>

    <footer class="primary-footer">

      <p class="created-by">

        Created with enthusiasm by caring residents.

      </p>

    </footer>

  </body>

</html>
