using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalLight : MonoBehaviour {
	private AudioSource sound;

	// Use this for initialization
	void Start () {
		sound = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D(Collision2D col){

		if (col.gameObject.tag == "player") {
			
			sound.PlayOneShot(sound.clip);
		}
	}
}
