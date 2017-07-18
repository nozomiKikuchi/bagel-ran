using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour {

	public Slider slider;
	float param = 0;
//	public float maxWeight, maxSpeed, maxLuck;
	public float max1, max2, max3;

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("panelColor") == 1) {
			if (param > max1) {
			} else {
				param += 0.2f;
				// HPゲージに値を設定
				slider.value = param;
			}
		} else if (PlayerPrefs.GetInt ("panelColor") == 2) {
			if (param > max2) {
			} else {
				param += 0.2f;
				// HPゲージに値を設定
				slider.value = param;
			}
		} else if (PlayerPrefs.GetInt ("panelColor") == 3) {
			if (param > max3) {
			} else {
				param += 0.2f;
				// HPゲージに値を設定
				slider.value = param;
			}
		}

	}
}