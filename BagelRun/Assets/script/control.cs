﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class control : MonoBehaviour {


	private AudioSource sound01;
	// Use this for initialization
	void Start () {
		sound01 = GetComponent<AudioSource>();
		PlayerPrefs.SetInt ("jumpping", 0);
		PlayerPrefs.SetInt ("selectBagel",1);
		PlayerPrefs.SetInt ("jump",0);
	}

	// Update is called once per frame
	void Update () {
		
		
	}

	void OnMouseDown(){
		if (PlayerPrefs.GetInt ("jumpping", -1) == 1) {
			sound01.PlayOneShot(sound01.clip);
			PlayerPrefs.SetInt ("jumpping", 0);
			PlayerPrefs.SetInt ("jump",1);
			//bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);

		}

	}

}
