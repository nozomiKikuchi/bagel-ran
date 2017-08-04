using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class itemGet : MonoBehaviour {
	
	int item_n;


	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt (this.gameObject.tag, 0);
	}
	
	// Update is called once per frame
	void Update () {
		
		//if (this.transform.position.x <= player.transform.position.x && this.transform.position.x + 3 >= player.transform.position.x && player.transform.position.y >= this.transform.position.y) {
		//	this.gameObject.SetActive (false);
		//	print ("get");
		//}
	}
	void OnCollisionEnter2D(Collision2D col){
		if (col.gameObject.tag == "player") {
			
			item_n = PlayerPrefs.GetInt (this.gameObject.tag) + 1;
			PlayerPrefs.SetInt (this.gameObject.tag, item_n);



			this.gameObject.SetActive (false);

		}
	}
}
