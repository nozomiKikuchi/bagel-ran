using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderController : MonoBehaviour {

	public Slider slider;
	float param = 0;
	public float max;

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {

		if (param > max) {
		} else {
			param += 0.2f;
			// HPゲージに値を設定
			slider.value = param;
		}
	}
}