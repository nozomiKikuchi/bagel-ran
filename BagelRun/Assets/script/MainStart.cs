using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MainStart : MonoBehaviour {
	public GameObject ufo;
	public GameObject uforight;
	public GameObject goal_ufo;
	private EdgeCollider2D ufo_c;
	int start=0;
	int stop=0;
	int right=1;
	private AudioSource sound;
	// Use this for initialization
	void Start () {
		sound = GetComponent<AudioSource>();
		uforight.SetActive (false);
		ufo.transform.position += new Vector3 (0f, -0.02f, 0f);
		PlayerPrefs.SetInt ("isGameStart", 0);
		ufo_c=this.GetComponent<EdgeCollider2D> (); 
//		PlayerPrefs.SetInt ("bagelNumber",2);
	}

	// Update is called once per frame
	void Update () {
		
		if (start == 0 && ufo.transform.position.y < goal_ufo.transform.position.y && PlayerPrefs.GetInt ("isGameClear") != 1) {
			stop = 1;
			uforight.SetActive (true);
			sound.PlayOneShot(sound.clip);
			ufo.transform.position += new Vector3 (0f, 0f, 0f);
			ufo_c.isTrigger = true;
			PlayerPrefs.SetInt ("isGameStart", 1);

		} else if(stop!=1){
			ufo.transform.position += new Vector3 (0f, -0.05f, 0f);
		}

		if (PlayerPrefs.GetInt ("jumpping") == 1) {
			start = 1;
		}
		if (start == 1) {
			if (right == 1) {
				Destroy (uforight);
				right = 0;
			}
			ufo.transform.position += new Vector3 (-0.05f, 0f, 0f);
			if (ufo.transform.position.x <= -12) {
				Destroy(ufo);
			}
		}

	}
}
