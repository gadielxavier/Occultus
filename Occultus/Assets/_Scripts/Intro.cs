using UnityEngine;
using System.Collections;

public class Intro : MonoBehaviour {

	public Transform model;

	public void clickEvent(){
		Destroy (this.gameObject);

		Transform myModel = (Transform)Instantiate(model, new Vector3 (0, 0, 0), Quaternion.identity);
		myModel.SetParent (this.transform.parent);
		myModel.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (32, -12);
	}

}
