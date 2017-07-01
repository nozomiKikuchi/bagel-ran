using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MovePanel : MonoBehaviour {

	void start() {
		this.gameObject.GetComponent<RectTransform>().DOLocalMove(new Vector3(20, 0, 0), 2f);
	}
}
