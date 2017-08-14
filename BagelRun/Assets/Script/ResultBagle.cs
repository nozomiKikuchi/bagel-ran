using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResultBagle : MonoBehaviour {

	private AudioSource sound;

	// Use this for initialization
	void Start () {
		sound = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D(Collision2D col){
		if (PlayerPrefs.GetInt ("Fanfare") == 1) {
			if (col.gameObject.tag == "item") {
				if (PlayerPrefs.GetInt ("isHappy") == 1) {
					sound.PlayOneShot(sound.clip);
				}
			}
		}
	}
}
