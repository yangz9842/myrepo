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
                }
            }
        }

        stage('REST API script execution'){
            steps {
        
                echo 'hello yang123'
                powershell 'ls'
                powershell 'pwd'
                powershell 'whoami'
                powershell 'python pipeline_B2B.py /tmp/ep/myrepo  test.slx'
      
            }
        }
    }
}

