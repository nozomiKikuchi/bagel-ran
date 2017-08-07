using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		PlayerPrefs.SetInt ("tomato",0);
		PlayerPrefs.SetInt ("bacon",0);
		PlayerPrefs.SetInt ("lettuce",0);
		
	}
	
	// Update is called once per frame
	void Update () {
	}
}
