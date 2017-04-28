using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour {
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.gameObject.transform.Rotate (0, 0, -5);

	}
	void OnCollisionEnter2D(Collision2D col){
		if (col.gameObject.tag == "stage") {
			PlayerPrefs.SetInt ("jumpping", 1);
		}
	}
}
