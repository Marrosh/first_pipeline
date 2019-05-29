pipeline {
    agent { docker { image 'cmake-valgrind' } }
    stages {
        stage('build') {
            steps {
                cmake arguments: '-DCMAKE_CXX_FLAGS=-std=c++11', installation: 'InSearchPath'
                sh 'make'
                sh 'pwd'
            }
        }
        
        stage('memtest') {
            steps {
                sh 'valgrind ./Example'
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

