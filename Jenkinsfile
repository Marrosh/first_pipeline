pipeline {
    agent { docker { image 'lycantropos/cmake' } }
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11', installation: 'InSearchPath'
                sh 'make'
            }
        }
    }
    
    post {
        always {
            emailext body: "${currentBuild.currentResult}: Job ${env.JOB_NAME} build ${env.BUILD_NUMBER}\n More info at: ${env.BUILD_URL}",
                recipientProviders: [[$class: 'DevelopersRecipientProvider'], [$class: 'RequesterRecipientProvider']],
                subject: "Jenkins Build ${currentBuild.currentResult}: Job ${env.JOB_NAME}"
        }
    }
}

