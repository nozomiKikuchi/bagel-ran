using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class player : MonoBehaviour {

	private Rigidbody2D _rigid;
	public GameObject goal_ufo;
	//public GameObject goal_right;
	public GameObject bagel;
	public int number;
	int S=0;
	// Use this for initialization
	void Start () {
		_rigid = this.GetComponent<Rigidbody2D> (); 
		//GetComponent<Image>().color = new Color(255, 255, 255, 0);
		//_rigid.gravityScale = 0;
		if (PlayerPrefs.GetInt ("bagelNumber") != number) {
			Destroy (bagel);
		}
	}

	// Update is called once per frame
	void Update () {
		if(PlayerPrefs.GetInt ("isGameStart")==1&&S==0){
			//GetComponent<Image>().color = new Color(255, 255, 255, 255);
			//_rigid.gravityScale = 1;
			S = 1;

		}
		if (this.gameObject.transform.position.x < -10 && PlayerPrefs.GetInt ("isGameOver") == 0) {

			this.gameObject.transform.Rotate (0, 0, 0);
			PlayerPrefs.SetInt ("isGameOver", 1);

		} else if (goal_ufo.transform.position.x < this.transform.position.x) {
			//goal_right.gameObject.SetActive (true);
			PlayerPrefs.SetInt ("isGameClear", 1);
			_rigid.gravityScale = 0;
			this.transform.position += new Vector3 (0f, 0.1f, 0f);

			if (this.transform.position.y > goal_ufo.transform.position.y) {
				PlayerPrefs.SetInt ("ufo_catch", 1);
				Destroy (bagel);
			}


		}else if (this.gameObject.transform.position.x > -10) {
			bagel.gameObject.transform.Rotate (0, 0, -5);


		}

		if (PlayerPrefs.GetInt ("jump") == 1) {
			PlayerPrefs.SetInt ("jump",0);
			bagel.GetComponent<Rigidbody2D> ().AddForce (Vector2.up * 300);

		}
	}
	void OnCollisionEnter2D(Collision2D col){
		if (col.gameObject.tag == "stage") {
			PlayerPrefs.SetInt ("jumpping", 1);
		}
	}
}