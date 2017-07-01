using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MoveCamera : MonoBehaviour {

	public GameObject green, red, blue;
	public GameObject rightArrow, leftArrow;
	bool isRed, isGreen, isBlue;

	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt ("charaSelect", 2);
		isRed = true;
		isGreen = false;
		isBlue = false;
		StartCoroutine(loop());
	}
	
	private IEnumerator loop() {
		// ループ
		while (true) {
			yield return new WaitForSeconds(0.5f);
			onTimer();
		}
	}

	private void onTimer() {
		// 1秒毎に呼ばれます
		leftArrow.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-335, 0, 0), 0.4f);
		leftArrow.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-340, 0, 0), 0.2f);
		rightArrow.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(335, 0, 0), 0.4f);
		rightArrow.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(340, 0, 0), 0.2f);
	}

	public void OnRightArrow() {
		if (PlayerPrefs.GetInt("charaSelect") == 2) {
			rightArrow.SetActive (false);
			green.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-1600, 0, 0), 0.8f);
			red.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-800, 0, 0), 0.8f);
			blue.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(0, 0, 0), 0.8f);
			PlayerPrefs.SetInt ("charaSelect", 3);
		} else if (PlayerPrefs.GetInt("charaSelect") == 1) {
			leftArrow.SetActive (true);
			green.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-800, 0, 0), 0.8f);
			red.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(0, 0, 0), 0.8f);
			blue.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(800, 0, 0), 0.8f);
			PlayerPrefs.SetInt ("charaSelect", 2);
		}
	}

	public void OnLeftArrow() {
		if (PlayerPrefs.GetInt("charaSelect") == 2) {
			leftArrow.SetActive (false);
			green.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(0, 0, 0), 0.8f);
			red.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(800, 0, 0), 0.8f);
			blue.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(1600, 0, 0), 0.8f);
			PlayerPrefs.SetInt ("charaSelect", 1);
		} else if (PlayerPrefs.GetInt("charaSelect") == 3) {
			rightArrow.SetActive (true);
			green.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(-800, 0, 0), 0.8f);
			red.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(0, 0, 0), 0.8f);
			blue.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(800, 0, 0), 0.8f);
			PlayerPrefs.SetInt ("charaSelect", 2);
		}
	}
}
