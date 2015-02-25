--Config--
	The configuration file is a simple format, each line coresponds to a variable in our config object, 
	which is serving as a "database" that loads and stores our data.

	Here is the config, from top to bottom, line by line:
		
		number of dust
		number a type
		number b type
		number c type
		number d type
		Broadcast range in meters
--dust_distribution--
this generates a list of points based on the parameters provided in config.
it is our database of points.

