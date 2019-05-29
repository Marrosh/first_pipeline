pipeline {
    agent { docker { image 'lycantropos/cmake' } }
    stages {
        stage('build') {
            steps {
                cmakeInstallation('InSearchPath')
                generator('Unix Makefiles')
                cleanBuild()
                sourceDir('')
                buildDir('build')
                buildToolStep {
                    useCmake(true)
                }
            }
        }
    }
}
