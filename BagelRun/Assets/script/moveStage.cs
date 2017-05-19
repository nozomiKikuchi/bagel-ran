using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveStage : MonoBehaviour {
	public float speedx;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position += new Vector3(speedx*-0.1f, 0, 0);
	}
}
