pipeline {
    agent { docker { image 'lycantropos/cmake' } }
    stages {
        stage('build') {
            steps {
                cmake {
                    cmakeInstallation('InSearchPath')
                    generator('Unix Makefiles')
                    cleanBuild()
                    sourceDir('src')
                    buildDir('target')
                    args('foo')
                    args('bar')
                    buildToolStep {
                        vars('KEY', 'VALUE')
                        useCmake()
                    }
                    buildToolStep {
                        useCmake(false)
                    }
                }
            }
        }
    }
}
