using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameClear : MonoBehaviour {
	public GameObject goal_ufo;
	public GameObject goal_right;
	public GameObject bagel;
	private Rigidbody2D bagel_r;
	int ufo_catch = 0;
	// Use this for initialization
	void Start () {
		//goal_ufo.gameObject.SetActive (false);
		//goal_right.gameObject.SetActive (false);
		PlayerPrefs.SetInt ("isGameClear", 0);
		bagel_r = bagel.GetComponent<Rigidbody2D> ();
		PlayerPrefs.SetInt ("ufoMoveRight", 0);
		
	}
	
	// Update is called once per frame
	void Update () {
		if (goal_ufo.transform.position.x < bagel.transform.position.x) {
			goal_right.gameObject.SetActive (true);
			PlayerPrefs.SetInt ("isGameClear", 1);
			bagel_r.gravityScale = 0;
			bagel.transform.position += new Vector3 (0f, 0.1f, 0f);

			if (bagel.transform.position.y > goal_ufo.transform.position.y) {
				ufo_catch = 1;
			}


		}
		if(ufo_catch==1){
			bagel.transform.position += new Vector3 (0f, -0.10f, 0f);
			goal_right.gameObject.SetActive (false);
			bagel.gameObject.SetActive (false);
			goal_ufo.transform.position += new Vector3 (0.1f, 0.05f, 0f);
			PlayerPrefs.SetInt ("ufoMoveRight", 1);

		}
	}
}
