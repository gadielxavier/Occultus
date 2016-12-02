using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class safeBox : MonoBehaviour {

	void OnMouseOver()
	{
		transform.Find("front door").GetComponent<Renderer>().material.shader = Shader.Find("Self-Illumin/Specular");
		if(Input.GetMouseButtonDown(0)){
			
			SceneManager.LoadScene ("safebox");
		}

	}

	void OnMouseExit()
	{
		transform.Find("front door").GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");

	}
	
}
