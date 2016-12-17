using UnityEngine;
using System.Collections;

public class HighLightObject : MonoBehaviour {

	public Transform model;
	//public Vector3 position;

	void Start(){
		//position = GameObject.Find ("Player").transform.position;
	}


	void OnMouseOver(){
		transform.GetComponent<Renderer>().material.shader = Shader.Find("Self-Illumin/Specular");
		if(Input.GetMouseButtonDown(0)){
			Instantiate(model);
		}	
	}

	void OnMouseExit(){
		transform.GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");
	}
}
