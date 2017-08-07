using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class MoveCamera : MonoBehaviour {

	public GameObject nomalBagel, greenBagel, purpleBagel;
	public GameObject look;
	public GameObject rightArrow, leftArrow;
	public Slider weight, speed, luck;

	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt ("bagelNumber", 2);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnRightArrow() {
		print ("pushRight");
		if (PlayerPrefs.GetInt ("bagelNumber") == 2) {
			weight.value = 4;
			speed.value = 9;
			luck.value = 10;
			nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
			greenBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
			purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-39.4f, 0.6f, 0f), 1f);
			rightArrow.SetActive (false);
			PlayerPrefs.SetInt ("bagelNumber", 3);
		} else if (PlayerPrefs.GetInt ("bagelNumber") == 1){
			weight.value = 5;
			speed.value = 5;
			luck.value = 6;
			nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
			greenBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
			purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
			leftArrow.SetActive (true);
			PlayerPrefs.SetInt ("bagelNumber", 2);
		}
	}

	public void OnLeftArrow() {
		print ("pushLeft");
		if (PlayerPrefs.GetInt ("bagelNumber") == 2) {
			weight.value = 10;
			speed.value = 2;
			luck.value = 6;
			nomalBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
			greenBagel.gameObject.transform.DOLocalMove (new Vector3(33.2f, 0.6f, 0f), 1f);
			purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
			leftArrow.SetActive (false);
			PlayerPrefs.SetInt ("bagelNumber", 1);
		} else if (PlayerPrefs.GetInt ("bagelNumber") == 3) {
			weight.value = 5;
			speed.value = 5;
			luck.value = 6;
			nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
			greenBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
			purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
			rightArrow.SetActive (true);
			PlayerPrefs.SetInt ("bagelNumber", 2);
		}
	}
}
