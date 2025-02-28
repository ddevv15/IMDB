# IMDB Data Explorer

This project is a simple data exploration tool for movie data. It loads data from three TSV files and provides an interactive interface for users to search for movies and actors/actresses, displaying related cast and movie details.

## Data Files

- **movie.titles.tsv**: Contains movie information. The program reads the following fields:

  - `tconst` (title ID)
  - `primaryTitle`
  - `startYear`
  - `genres`

- **movie.names.tsv**: Contains actor/actress information. The program uses:

  - `nconst` (name ID)
  - `primaryName`
  - `birthYear`
  - `deathYear`
  - `primaryProfession`

- **movie.principals.tsv**: Links movies with their cast. Key fields include:
  - `tconst` (title ID)
  - `nconst` (name ID)
  - Character played

## Project Structure

- **Struct Definitions**:

  - `TitleRecord`: For storing movie data.
  - `NameRecord`: For storing actor/actress data.
  - `PrincipalRecord`: For linking movies and cast members.

- **Data Loading**:  
  Functions are implemented to read each file (ignoring the header) and store records in vectors.

## Functionalities

1. **Movie Search**:

   - Input: Search phrases (in lower case, separated by `+`).
   - Output: A list of movies matching all search phrases (showing index, primaryTitle, startYear).
   - Further action: Selecting a movie displays its cast (primaryName and character).

2. **Actor/Actress Search**:
   - Input: Search phrases (lower case, separated by `+`).
   - Output: A list of actors/actresses matching the search criteria.
   - Further action: Selecting an actor/actress displays all movies they appeared in (primaryTitle, startYear, character).

**Note:** The search functionality respects the order of records in the original data file, ensuring consistent and unique results. Also, proper error checking for `cin.fail()` is included to work with the autograder.

## Usage

1. Run the main program.
2. Choose between movie search or actor/actress search.
3. Enter search phrases as prompted (e.g., `action+thriller`).
4. Follow the prompts to view detailed results.

Happy coding!
