using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResultManager : MonoBehaviour {

	private int tomatoNum, lettuceNum, baconNum;
	public GameObject[] tomatos, lettuces, bacons;
	public GameObject alien, alien_sad;
	// Use this for initialization
	void Start () {
		tomatoNum = PlayerPrefs.GetInt ("tomato");
		lettuceNum = PlayerPrefs.GetInt ("lettuce");
		baconNum = PlayerPrefs.GetInt ("bacon");
		print (tomatoNum);
		print (lettuceNum);
		print (baconNum);
		if (tomatoNum > 0) {
			for (int i = 0; i < 3; i++) {
				tomatos [i].SetActive (true);
			}
		}
		if (lettuceNum > 0) {
			for (int i = 0; i < 2; i++) {
				lettuces [i].SetActive (true);
			}
		}
		if (baconNum > 0) {
			for (int i = 0; i < 2; i++) {
				bacons [i].SetActive (true);
			}
		}

//		for (int i = tomatoNum; i > 0; i--) {
//			tomatos [i].SetActive (true);
//		}
//		for (int i = lettuceNum; i > 0; i--) {
//			lettuces [i].SetActive (true);
//		}
//		for (int i = baconNum; i > 0; i--) {
//			bacons [i].SetActive (true);
//		}
		if (tomatoNum + lettuceNum + baconNum < 2) {
			alien_sad.SetActive (true);
		} else {
			alien.SetActive (true);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
