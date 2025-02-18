#!/usr/bin/env groovy
pipeline {
    agent any
    stages {
        stage('Git Checkout') {
            steps {
                script {
                    git branch: 'main',
                        credentialsId: 'token',
                        url: 'https://github.com/yangz9842/myrepo.git'
                    echo "Git Checkout Successful"
                }
            }
        }

        stage('REST API script execution'){
            steps {
                echo 'hello yang'
                powershell 'ls'
                powershell 'pwd'
                powershell 'whoami'
                powershell 'echo "Debug: Checking if Python is installed" && python --version'
                powershell 'echo "Debug: Checking if pipeline_B2B.py exists" && ls -al pipeline_B2B.py'
                powershell 'python pipeline_B2B.py /tmp/ep/myrepo test.slx'
            }
        }
    }
}
