pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/user/repo.git'
            }
        }

        stage('Run Tests in Docker') {
            steps {
                script {
                    sh '''
                    docker run --rm -v $WORKSPACE:/workspace epmltl \
                        python /workspace/pipeline_B2B.py /workspace model1.slx model2.slx
                    '''
                }
            }
        }

        stage('Publish Results') {
            steps {
                archiveArtifacts artifacts: '**/test_results/*.log', onlyIfSuccessful: true
            }
        }
    }
}
