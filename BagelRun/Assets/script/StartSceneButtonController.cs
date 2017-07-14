using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartSceneButtonController : MonoBehaviour {

	public GameObject bagel, run;
	private float currentRemainTime;
	private SpriteRenderer spRenderer;
	public float fadeTime = 1f;
	private AudioSource sound01;

	// Use this for initialization
	void Start () {
		sound01 = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void OnClick() { // MUST public
		PlayerPrefs.SetInt("StartButton", 1);
		bagel.gameObject.SetActive (false);
		run.gameObject.SetActive (false);
		sound01.PlayOneShot(sound01.clip);
		print ("clicked");
	}

	public void TapStart() {
		Application.LoadLevel ("mainScene");
	}
}
