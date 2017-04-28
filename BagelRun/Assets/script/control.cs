using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class control : MonoBehaviour {
	public GameObject bagel;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown(){
		if (PlayerPrefs.GetInt ("jumpping", -1) == 1) {
			PlayerPrefs.SetInt ("jumpping", 0);
			bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);

		}

	}

}
