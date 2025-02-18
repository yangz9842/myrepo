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
                    sh '''
                    docker run --rm -v $WORKSPACE:/workspace epmltl \
                        python /workspace/pipeline_B2B.py /workspace test.slx
                    '''
                }
            }
        }
    }
}

