
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOver : MonoBehaviour {
	public GameObject text;
	public GameObject reset;
	public GameObject home;
	public GameObject shutter;

	private AudioSource sound;
	// Use this for initialization
	void Start () {
		sound = GetComponent<AudioSource>();
		PlayerPrefs.SetInt ("isGameOver", 0);

	}


	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("isGameOver") == 1) {
			
			if (shutter.transform.position.y > 225) {
				sound.PlayOneShot(sound.clip);
				shutter.transform.position += new Vector3 (0f, -30f, 0f);
			}
		}
	}
}

