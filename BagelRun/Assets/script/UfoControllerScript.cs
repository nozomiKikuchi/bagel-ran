using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UfoControllerScript : MonoBehaviour {

	public GameObject ufo;
	public GameObject wheat1;
	public GameObject wheat2;
	private float speed;
	private float radius;
	private float yPosition;
	float x;
	float y;
	float z;

	// Use this for initialization
	void Start () {
		speed = 3.0f;
		radius = 0.5f;
		yPosition = 30;
		PlayerPrefs.SetInt("StartButton", 0);
		PlayerPrefs.SetInt ("StopUFO", 0);

	}

	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("StartButton") == 1) {
			if (ufo.transform.position.x >= 5) {
				ufo.transform.position += new Vector3 (0, 0, 0);
				if (wheat1.transform.position.y >= 2.5) {
					wheat1.transform.position += new Vector3 (0, 0, 0);
					wheat2.transform.position += new Vector3 (0, 0, 0);
				} else {
					wheat1.transform.position += new Vector3 (0, 0.1f, 0);
					wheat2.transform.position += new Vector3 (0, 0.1f, 0);
				}

				PlayerPrefs.SetInt ("StopUFO", 1);
			} else {
				ufo.transform.position += new Vector3 (0.1f, 0, 0);
			}
		} else {
			ufo.transform.position = new Vector3 (x, y, z);
			x = radius * Mathf.Sin (Time.time * speed)-5;
			y = radius * Mathf.Cos (Time.time * speed)+3;
			z = 0;
		}
//		print (ufo.transform.position);
	}
}
