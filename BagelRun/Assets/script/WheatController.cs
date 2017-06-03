using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheatController : MonoBehaviour {

	public GameObject wheat;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("isUFOCome") == 1) {
			if (wheat.transform.position.y >= 2.8) {
				wheat.transform.position += new Vector3 (0f, 0f, 0f);
				PlayerPrefs.SetInt ("isUFOCome", 2);
				wheat.SetActive (false);
			} else {
				wheat.transform.position += new Vector3 (0f, 3f * Time.deltaTime, 0f);
			}
		} else {
			
		}
	}
}
