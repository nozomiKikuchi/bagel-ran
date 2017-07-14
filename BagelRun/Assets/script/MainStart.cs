using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MainStart : MonoBehaviour {
	public GameObject bagel;
	public GameObject ufo;
	public GameObject uforight;
	int start;
	// Use this for initialization
	void Start () {
		bagel.gameObject.SetActive (false);
		uforight.SetActive (false);
		ufo.transform.position += new Vector3 (0f, -0.02f, 0f);
	}
	
	// Update is called once per frame
	void Update () {
		
		if (ufo.transform.position.y <= 2.7) {
			uforight.SetActive (true);
			ufo.transform.position += new Vector3 (0f, 0f, 0f);
			bagel.gameObject.SetActive (true);

		} else {
			ufo.transform.position += new Vector3 (0f, -0.05f, 0f);
		
		}

		if (PlayerPrefs.GetInt ("jumpping", -1) == 1) {
			start = 1;
		}
		if (start == 1) {
			uforight.SetActive (false);
			ufo.transform.position += new Vector3 (-0.05f, 0f, 0f);
			if (ufo.transform.position.x <= -12) {
				ufo.SetActive (false);
			}
		}

	}
}
