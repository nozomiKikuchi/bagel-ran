﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class FlickController : MonoBehaviour {
	private float minSwipeDistX;
	private float minSwipeDistY;
	Vector3 startPos, endPos;
	float swipeDistX, swipeDistY, SignValueX, SignValueY;
	public GameObject nomalBagel, greenBagel, purpleBagel;
	public GameObject rightArrow, leftArrow;
	public Slider weight, speed, luck;

	// Use this for initialization
	void Start () {
		minSwipeDistX = 30;
		minSwipeDistY = 30;
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0) {

			//タッチを取得
			Touch touch = Input.touches [0];
			//タッチフェーズによって場合分け
			switch (touch.phase) {
			//タッチ開始時
			case TouchPhase.Began:
				startPos = touch.position;
				break;

				//タッチ終了時
			case TouchPhase.Ended:
				endPos = new Vector2 (touch.position.x, touch.position.y);
				swipeDistX = (new Vector3 (endPos.x, 0, 0) - new Vector3 (startPos.x, 0, 0)).magnitude;
				swipeDistY = (new Vector3 (0, endPos.y, 0) - new Vector3 (0, startPos.y, 0)).magnitude;

				Debug.Log ("X" + swipeDistX.ToString ());
				Debug.Log ("Y" + swipeDistY.ToString ());

				if (swipeDistX > swipeDistY && swipeDistX > minSwipeDistX) {
					SignValueX = Mathf.Sign (endPos.x - startPos.x);
					if (SignValueX > 0) {
						//右方向にスワイプしたとき
						if (PlayerPrefs.GetInt ("selectBagel") == 2) {
							weight.value = 10;
							speed.value = 2;
							luck.value = 6;
							nomalBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
							greenBagel.gameObject.transform.DOLocalMove (new Vector3(33.2f, 0.6f, 0f), 1f);
							purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
							leftArrow.SetActive (false);
							PlayerPrefs.SetInt ("selectBagel", 1);
						} else if (PlayerPrefs.GetInt ("selectBagel") == 3) {
							weight.value = 5;
							speed.value = 5;
							luck.value = 6;
							nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
							greenBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
							purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
							rightArrow.SetActive (true);
							PlayerPrefs.SetInt ("selectBagel", 2);
						}
//						look.transform.LookAt (rightPanel.transform.position);
						print("Swipe Right");
					} else if (SignValueX < 0) {
						//左方向にスワイプしたとき
						if (PlayerPrefs.GetInt ("selectBagel") == 2) {
							weight.value = 4;
							speed.value = 9;
							luck.value = 10;
							nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
							greenBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
							purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-39.4f, 0.6f, 0f), 1f);
							rightArrow.SetActive (false);
							PlayerPrefs.SetInt ("selectBagel", 3);
						} else if (PlayerPrefs.GetInt ("selectBagel") == 1) {
							weight.value = 5;
							speed.value = 5;
							luck.value = 6;
							nomalBagel.gameObject.transform.DOLocalMove (new Vector3(-3.2f, 0.6f, 0f), 1f);
							greenBagel.gameObject.transform.DOLocalMove (new Vector3(15f, 0.6f, 0f), 1f);
							purpleBagel.gameObject.transform.DOLocalMove (new Vector3(-21.2f, 0.6f, 0f), 1f);
							leftArrow.SetActive (true);
							PlayerPrefs.SetInt ("selectBagel", 2);
						}
//						look.transform.LookAt (leftPanel.transform.position);
						print("Swipe Left");
					}
				} 
//				else if (swipeDistY > minSwipeDistY) {
//					SignValueY = Mathf.Sign (endPos.y - startPos.y);
//					if (SignValueY > 0) {
//						//上方向にスワイプしたとき
//						print("Swipe Up");
//					} else if (SignValueY < 0) {
//						//下方向にスワイプしたとき
//						print("Swipe Down");
//					}
//				}
				if (swipeDistX < minSwipeDistX && swipeDistY < minSwipeDistY) {
					// タップした時
					print("Tap");
				}
				break;
			}
		}
	}


}
