using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameClear : MonoBehaviour {
	public GameObject goal_ufo;
	public GameObject goal_right;
	// Use this for initialization
	void Start () {
		//goal_ufo.gameObject.SetActive (false);
		//goal_right.gameObject.SetActive (false);
		PlayerPrefs.SetInt ("isGameClear", 0);
		PlayerPrefs.SetInt ("ufoMoveRight", 0);
		PlayerPrefs.SetInt ("ufo_catch", 0);
		
	}
	
	// Update is called once per frame
	void Update () {
		
		if(PlayerPrefs.GetInt ("ufo_catch")==1){
			goal_right.gameObject.SetActive (false);
			goal_ufo.transform.position += new Vector3 (0.1f, 0.05f, 0f);
			PlayerPrefs.SetInt ("ufoMoveRight", 1);
			if (goal_ufo.transform.position.x >= 5) {
				Application.LoadLevel ("resultScene");
			}
		}
	}
}
