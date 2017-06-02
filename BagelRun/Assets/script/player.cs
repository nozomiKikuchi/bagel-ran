using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player : MonoBehaviour {

//	public GameObject bacon;
//	public GameObject lettuce;
//	public GameObject tomato;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.gameObject.transform.Rotate (0, 0, -6);
		print (this.transform.position);

	}
	void OnCollisionEnter2D(Collision2D col){
		if (col.gameObject.tag == "stage") {
			PlayerPrefs.SetInt ("jumpping", 1);
		} else if (col.gameObject.tag == "Item") {
			Destroy (col.gameObject);
		}
	}
}
