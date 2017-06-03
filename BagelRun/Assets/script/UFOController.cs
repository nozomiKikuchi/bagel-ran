using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UFOController : MonoBehaviour {

	public GameObject ufo;
	public GameObject blackBack;
	// Use this for initialization
	void Start(){
		PlayerPrefs.SetInt ("isUFOCome", 0);
	}
	
	// Update is called once per frame
	void Update () {
//		print (PlayerPrefs.GetInt ("isUFOCome"));
		if (PlayerPrefs.GetInt ("isUFOCome") == 2) {
			ufo.transform.position += new Vector3(3f*Time.deltaTime, 0f, 0f);
			blackBack.GetComponent<SpriteRenderer> ().color += new Color(0, 0, 0, 1/255f);
		} else if (PlayerPrefs.GetInt ("isUFOCome") == 0) {
			if (ufo.transform.position.x >= 3.5) {
				ufo.transform.position += new Vector3(0f, 0f, 0f);
				PlayerPrefs.SetInt ("isUFOCome", 1);
			} else {
				ufo.transform.position += new Vector3(3f*Time.deltaTime, 0f, 0f);


			}
		} else {
		}

	}
}
