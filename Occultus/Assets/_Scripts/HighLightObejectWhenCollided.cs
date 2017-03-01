using UnityEngine;
using System.Collections;

public class HighLightObejectWhenCollided : MonoBehaviour {

	public Transform model;
	public Transform canvas;
	bool collision;

	void Start(){
		collision = false;
	}

	void OnTriggerEnter(Collider col){
		collision = true;
	}

	void OnTriggerExit(Collider col) {
		collision = false;
		transform.GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");
	}

	void OnMouseOver(){
		if(collision){
			transform.GetComponent<Renderer>().material.shader = Shader.Find("Self-Illumin/Specular");

			if(Input.GetMouseButtonDown(0)){
				if(GlobalVariables.isPaused == false){
					GlobalVariables.isPaused = true;	
					Time.timeScale = 0;
					canvas.Find ("Image").gameObject.SetActive (true);
					GameObject.Find("Player").GetComponentInChildren<camMouseLook> ().enabled = false;
					Cursor.visible = true;
					Cursor.lockState = CursorLockMode.None;

					Transform myModel = (Transform)Instantiate(model, new Vector3 (0, 0, 0), Quaternion.identity);
					myModel.SetParent (canvas);
					myModel.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (32, -12);
				}
			}
		}
	}

	void OnMouseExit(){
		transform.GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");
	}
}
