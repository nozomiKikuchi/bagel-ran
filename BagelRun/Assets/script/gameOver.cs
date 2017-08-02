
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameOver : MonoBehaviour {
	public GameObject text;
	public GameObject reset;
	public GameObject home;
	public GameObject shutter;


	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt ("isGameOver", 0);

	}


	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("isGameOver") == 1) {
			
			if (shutter.transform.position.y > 225) {
				shutter.transform.position += new Vector3 (0f, -20f, 0f);

			} 
		}





		
	}
}

