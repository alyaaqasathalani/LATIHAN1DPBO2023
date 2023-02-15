<?php

class Mahasiswa {
    private $name = '';
    private $NIM = '';
    private $prodigy = '';
    private $faculty = '';

    public function __construct($name = '', $NIM = '', $prodigy = '', $faculty = ''){
        $this->name = $name;
        $this->NIM = $NIM;
        $this->prodigy = $prodigy;
        $this->faculty = $faculty;
    }

    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
    }

    public function setNIM($NIM){
        $this->NIM = $NIM;
    }

    public function getNIM(){
        return $this->NIM;
    }

    public function setProdigy($prodigy){
        $this->Prodigy = $prodigy;
    }

    public function getProdigy(){
        return $this->prodigy;
    }

    public function setFaculty($faculty){
        $this->faculty = $faculty;
    }

    public function getFaculty(){
        return $this->faculty;
    }
}

?>