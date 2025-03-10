const { Pool } = require('pg');

// Create a new pool instance for PostgreSQL
const pool = new Pool({
 user: 'clockinadmin',  // your database user
 host: 'localhost',     // database host
 database: 'clockindb', // your database name
 password: 'funonabun', // your database password
 port: 5432,            // default PostgreSQL port
});

// Export the pool for use in other files
module.exports = pool;