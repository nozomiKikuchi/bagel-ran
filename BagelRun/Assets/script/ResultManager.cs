using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultManager : MonoBehaviour {

	private int tomatoNum, lettuceNum, baconNum, ketyaNum, mayoNum;
	public GameObject[] tomatos, lettuces, bacons;
	public GameObject alien, alien_sad;
//	private AudioSource sound;
	public GameObject ketya, mayo;
	public Text tomatoTxt, lettuceTxt, baconTxt;

	// Use this for initialization
	void Start () {
//		sound = GetComponent<AudioSource>();
//		Invoke("SoundDelayMethod", 1.8f);
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
			ketya.GetComponent<Image>().color = new Color(255, 255, 255, 255);
		}

		if (mayoNum > 0) {
			mayo.GetComponent<Image>().color = new Color(255, 255, 255, 255);
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
