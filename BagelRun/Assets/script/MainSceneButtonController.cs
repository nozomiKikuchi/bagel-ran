
﻿
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MainSceneButtonController : MonoBehaviour {

	// Use this for initialization


	public void Restart(){


		Application.LoadLevel ("mainScene");

	}
	public void BackHome(){

		Application.LoadLevel ("startScene");
	}
	public void gameStart(){

		Application.LoadLevel ("mainScene");
	}


}

