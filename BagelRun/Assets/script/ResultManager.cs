using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultManager : MonoBehaviour {

	private int tomatoNum, lettuceNum, baconNum, ketyaNum, mayoNum;
	public GameObject[] tomatos, lettuces, bacons;
	public GameObject alien, alien_sad, ketya, mayo;
	public GameObject ketya_icon, mayo_icon;
	public Text tomatoTxt, lettuceTxt, baconTxt;

	// Use this for initialization
	void Start () {
		tomatoNum = PlayerPrefs.GetInt ("tomato");
		lettuceNum = PlayerPrefs.GetInt ("lettuce");
		baconNum = PlayerPrefs.GetInt ("bacon");
		ketyaNum = PlayerPrefs.GetInt ("ketya");
		mayoNum = PlayerPrefs.GetInt ("mayo");
		print ("k" + ketyaNum);
		print ("m" + mayoNum);

		tomatoTxt.GetComponent<Text> ().text = ":" + tomatoNum.ToString ();
		lettuceTxt.GetComponent<Text> ().text = ":" + lettuceNum.ToString ();
		baconTxt.GetComponent<Text> ().text = ":" + baconNum.ToString ();

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
		if (ketyaNum > 0) {
			ketya.SetActive (true);
		}
		if (mayoNum > 0) {
			mayo.SetActive (true);
		}

		if (ketyaNum > 0) {
			ketya_icon.GetComponent<Image>().color = new Color(255, 255, 255, 255);
		}

		if (mayoNum > 0) {
			mayo_icon.GetComponent<Image>().color = new Color(255, 255, 255, 255);
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
			PlayerPrefs.SetInt ("Fanfare", 1);
		} else {
			alien.SetActive (true);
			PlayerPrefs.SetInt ("Fanfare", 0);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
