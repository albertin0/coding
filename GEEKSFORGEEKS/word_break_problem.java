

import java.util.regex.*;

class reg {

public static void main(String args[]) {

// Match lowercase words.

Pattern pat = Pattern.compile("i|like|sam|sung|samsung|samsung|mobile|ice|cream|icecream|mango|go|man");

Matcher mat = pat.matcher("ilikesamsung");

while(mat.find())

System.out.print( mat.group()+" ");

}

}
