pipeline {
    agent any
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11', installation: 
'InSearchPath'
            }
        }
    }
}
