pipeline {
    agent { docker { image 'lycantropos/cmake' } }
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11'
                cmakeBuild buildType: 'Release', cleanBuild: true, steps: [[withCmake: true]]
            }
        }
    }
}
