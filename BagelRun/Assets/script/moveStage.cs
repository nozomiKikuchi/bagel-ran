using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveStage : MonoBehaviour {
	public float speed = 1.0f;
	public float startPosition;
	public float endPosition;
	int start;

	// Use this for initialization
	void Start () {
		start = 0;
	}

	// Update is called once per frame
	void Update () {
		if (PlayerPrefs.GetInt ("jumpping") == 1) {
			start = 1;
		}
		if (start == 1) {
			
			transform.Translate (-1 * speed * Time.deltaTime, 0, 0);
		}
		if (transform.position.x <= endPosition) {
			ScrollEnd ();
		}
		if (PlayerPrefs.GetInt ("isGameOver") == 1 || PlayerPrefs.GetInt ("isGameClear") == 1) {
			speed = 0;
		}

	}

	void ScrollEnd() {
		transform.Translate (-1 * (endPosition - startPosition), 0, 0);
	}
}