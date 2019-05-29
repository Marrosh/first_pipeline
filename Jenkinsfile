pipeline {
    agent { docker { image 'lycantropos/cmake' } }
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11', installation: 'InSearchPath'
            }
        }
    }
}
