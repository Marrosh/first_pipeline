pipeline {
    agent { docker { image 'slaves/cmake' } }
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11', installation: 'InSearchPath'
            }
        }
    }
}
