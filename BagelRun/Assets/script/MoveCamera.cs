using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MoveCamera : MonoBehaviour {

	public GameObject redPanel, greenPanel, bluePanel;
	public GameObject look;
	public GameObject rightArrow, leftArrow;
	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt ("panelColor", 2);
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void OnRightArrow() {
		if (PlayerPrefs.GetInt ("panelColor") == 2) {
			redPanel.gameObject.transform.DOLocalMove (new Vector3(-1600f, 0f, 0f), 1f);
			greenPanel.gameObject.transform.DOLocalMove (new Vector3(-800f, 0f, 0f), 1f);
			bluePanel.gameObject.transform.DOLocalMove (new Vector3(0f, 0f, 0f), 1f);
			rightArrow.SetActive (false);
			PlayerPrefs.SetInt ("panelColor", 3);
		} else if (PlayerPrefs.GetInt ("panelColor") == 1){
			redPanel.gameObject.transform.DOLocalMove (new Vector3(-800f, 0f, 0f), 1f);
			greenPanel.gameObject.transform.DOLocalMove (new Vector3(0f, 0f, 0f), 1f);
			bluePanel.gameObject.transform.DOLocalMove (new Vector3(800f, 0f, 0f), 1f);
			leftArrow.SetActive (true);
			PlayerPrefs.SetInt ("panelColor", 2);
		}
	}

	public void OnLeftArrow() {
		if (PlayerPrefs.GetInt ("panelColor") == 2) {
			redPanel.gameObject.transform.DOLocalMove (new Vector3(0f, 0f, 0f), 1f);
			greenPanel.gameObject.transform.DOLocalMove (new Vector3(800f, 0f, 0f), 1f);
			bluePanel.gameObject.transform.DOLocalMove (new Vector3(1600f, 0f, 0f), 1f);
			leftArrow.SetActive (false);
			PlayerPrefs.SetInt ("panelColor", 1);
		} else if (PlayerPrefs.GetInt ("panelColor") == 3) {
			redPanel.gameObject.transform.DOLocalMove (new Vector3(-800f, 0f, 0f), 1f);
			greenPanel.gameObject.transform.DOLocalMove (new Vector3(0f, 0f, 0f), 1f);
			bluePanel.gameObject.transform.DOLocalMove (new Vector3(800f, 0f, 0f), 1f);
			rightArrow.SetActive (true);
			PlayerPrefs.SetInt ("panelColor", 2);
		}
	}
}
