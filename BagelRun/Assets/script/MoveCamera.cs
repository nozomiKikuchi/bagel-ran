using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
			look.transform.LookAt (redPanel.transform.position);
			rightArrow.SetActive (false);
			PlayerPrefs.SetInt ("panelColor", 3);
		} else if (PlayerPrefs.GetInt ("panelColor") == 1){
			look.transform.LookAt (greenPanel.transform.position);
			leftArrow.SetActive (true);
			PlayerPrefs.SetInt ("panelColor", 2);
		}
	}

	public void OnLeftArrow() {
		if (PlayerPrefs.GetInt ("panelColor") == 2) {
			look.transform.LookAt (bluePanel.transform.position);
			leftArrow.SetActive (false);
			PlayerPrefs.SetInt ("panelColor", 1);
		} else if (PlayerPrefs.GetInt ("panelColor") == 3) {
			look.transform.LookAt (greenPanel.transform.position);
			rightArrow.SetActive (true);
			PlayerPrefs.SetInt ("panelColor", 2);
		}
	}
}
