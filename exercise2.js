/*
    Write a JavaScript exercise to get the extension of a filename.
*/

function getExtension(filename) {
    return filename.split('.').pop();
}

filename = 'myPHPfile.php';
console.log(getExtension(filename));