using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; // <---- 追加1


public class itemNumber : MonoBehaviour {
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
		this.GetComponent<Text>().text = PlayerPrefs.GetInt (this.gameObject.tag).ToString();
	}
}
