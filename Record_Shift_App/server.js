const express = require('express'); // Importing express
   const app = express(); // Creating an express app
   const bodyParser = require('body-parser');
   const pool = require('./db'); // Import the database connection
   const path = require('path');

   // Middleware
app.use(bodyParser.json());
app.use(express.static('public')); // Serve static files from the 'public' directory



   // Test the connection
pool.connect()
.then(() => {
    console.log('Connected to the database successfully!');
})
.catch(err => {
    console.error('Database connection error:', err.stack);
});


// Endpoint to handle form submission
app.post('/api/shiftentry', async (req, res) => {
    const { employee_name, shift_date, shiftStart, shift_duration, comments } = req.body;

    try {
        const result = await pool.query(
            'INSERT INTO shiftentry (employee_name, shift_date, shiftStart, shift_duration, comments) VALUES ($1, $2, $3, $4, $5) RETURNING *',
            [employee_name, shift_date, shiftStart, shift_duration, comments]
        );
        res.status(201).json(result.rows[0]);
    } catch (error) {
        console.error('Error inserting event:', error);
        res.status(500).json({ error: 'Database error' });
    }
});

app.get('/api/viewshiftentry', async (req, res) => {
  try {
      const result = await pool.query('SELECT * FROM shiftentry;'); // Adjust the query as needed
      res.json(result.rows); // Send the data as JSON
  } catch (error) {
      console.error('Error fetching data:', error);
      res.status(500).json({ error: 'Internal Server Error' });
  }
});



   // Set up the server to listen on port 3000
   const port = 3000;
   app.listen(port, () => {
     console.log(`Server is running on port ${port}`);
   });


     // Create a route that sends a response when visiting the homepage
     app.get('/', (req, res) => {
        res.send('<h1>Hello, Express.js Server!</h1>');
      });
   
      app.get('/home', (req, res) => {
       res.send('<h1>Hello, Express.js Server!</h1>');
     });
   
     app.get('/clock_in', (req, res) => {
       res.sendFile(path.join(__dirname, 'routes/', 'clock_in.html'));
     });
   
     app.get('/view_records', (req, res) => {
       res.sendFile(path.join(__dirname, 'routes', 'view_records.html'));
     });