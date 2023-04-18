# Projet d'intégration robotique
DELPY Thibault, GATEL Matéo

# Procédure d'installation
Afin de lancer correctement le projet, suivez les étapes suivantes :
- Ouvrir la machine virtuelle 3ASRI-ProjetIntegration avec VirtualBox
- Cloner ce dépôt
- Se déplacer dans le dossier catkin_ws
- Ouvrir deux terminaux dans ce dossier
- Effectuez la commande suivante dans chaque terminal : . devel/setup.bash
- Dans le premier terminal, lancez la commande suivante : roslaunch hc10_moveit_config demo_gazebo.launch
- Vous pouvez si vous le souhaitez rajouter des objets 3D depuis l'interface de Gazebo afin de stimuler le capteur du robot lors de son déplacement
- Dans le second terminal, vous pouvez lancer la commande suivante pour exécuter le script Python faisant bouger le robot : rosrun hc10_moveit_config moveit.py
- Une fois cela fait, vous pouvez intéragir avec les liaisons du robot depuis RVIZ pour observer de manière plus précise l'environnement qui entoure le robot
