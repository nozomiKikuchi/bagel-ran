using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UfoControllerScript : MonoBehaviour {

	public GameObject ufo;
	public GameObject wheat1;
	public GameObject wheat2;
//	public GameObject textbagel;
	public GameObject uforight;
	private float speed;
	private float radius;
	private float yPosition;
	float x;
	float y;
	float z;

	// Use this for initialization
	void Start () {
		speed = 4.0f;
		radius = 0.5f;
		yPosition = 30;
		PlayerPrefs.SetInt("StartButton", 0);
		PlayerPrefs.SetInt ("StopUFO", 0);
		PlayerPrefs.SetInt ("ufoMoveRight", 0);
		uforight.SetActive (false);
	}

	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("StartButton") == 1) {
			if (ufo.transform.position.x >= 4.5) {
				uforight.SetActive (true);
				ufo.transform.position += new Vector3 (0, 0, 0);
				if (wheat1.transform.position.y >= 2.0) {
					wheat1.SetActive (false);
					wheat2.SetActive (false);
					uforight.SetActive (false);
					if (ufo.transform.position.x > 20) {
						ufo.transform.position += new Vector3 (0, 0, 0);
						Application.LoadLevel ("SelectScene");
					} else {
						ufo.transform.position += new Vector3 (0.1f, 0, 0);
						PlayerPrefs.SetInt ("ufoMoveRight", 1);
					}
				} else {
					wheat1.transform.position += new Vector3 (0, 0.08f, 0);
					wheat2.transform.position += new Vector3 (0, 0.08f, 0);
				}

				PlayerPrefs.SetInt ("StopUFO", 1);
			} else {
				ufo.transform.position += new Vector3 (0.08f, 0, 0);
			}
		} else {
			ufo.transform.position = new Vector3 (x, y, z);
			x = radius * Mathf.Sin (Time.time * speed)-5;
			y = radius * Mathf.Cos (Time.time * speed)+3;
			z = 0;
			x = radius * Mathf.Cos (Time.time * speed)-5;
			y = radius * Mathf.Sin (Time.time * speed)+3;
		}
//		print (ufo.transform.position);
	}
}
