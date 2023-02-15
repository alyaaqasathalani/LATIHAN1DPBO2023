public class Mahasiswa{
    private String name;
    private String nim;
    private String prodigy;
    private String faculty;

    public Mahasiswa(){
        this.name = "";
        this.nim = "";
        this.prodigy = "";
        this.faculty = "";
    }

    public Mahasiswa(String name, String nim, String prodigy, String faculty){
        this.name = name;
        this.nim = nim;
        this.prodigy = prodigy;
        this.faculty = faculty;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getNim(){
        return this.nim;
    }

    public void setNim(String nim){
        this.nim = nim;
    }

    public String getProdigy(){
        return this.prodigy;
    }

    public void setProdigy(String prodigy){
        this.prodigy = prodigy;
    }

    public String getFaculty(){
        return this.faculty;
    }

    public void setFaculty(String faculty){
        this.faculty = faculty;
    }
}