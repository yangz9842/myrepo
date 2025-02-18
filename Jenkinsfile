pipeline {
    agent any

    stages {
        stage('Git Checkout') {
            steps {
                script {
                    git branch: 'main',
                        credentialsId: 'token',
                        url: 'https://github.com/yangz9842/myrepo.git'
                }
            }
        }

        stage('Run Tests in Docker') {
            steps {
                script {
                    powershell '''
                    docker run --rm -v "$Env:WORKSPACE:/workspace" epmltl `
                        python /workspace/pipeline_B2B.py /workspace test.slx
                    '''
                }
            }
        }
    }
}


