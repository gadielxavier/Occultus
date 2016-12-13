using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class safeBox : MonoBehaviour {

	private bool looking;
	Animator animator;
	int Open = Animator.StringToHash("Open");

	void Start(){
		animator = GetComponent<Animator> ();
		if(GlobalVariables.isSafeBoxOpen){
			animator.SetTrigger (Open);
		}
	}
		
	void OnTriggerStay(Collider col){
		if(col.gameObject.tag == "Player"){
			if(looking){
				transform.Find("front door").GetComponent<Renderer>().material.shader = Shader.Find("Self-Illumin/Specular");
				if(Input.GetMouseButtonDown(0)){
					GlobalVariables.playerPosition = GameObject.Find ("Player").transform.position;
					GlobalVariables.cameraRotation = GameObject.Find ("Main Camera").transform.rotation.eulerAngles;
					SceneManager.LoadScene ("safebox");
				}	
			}
		}
	}

	void OnTriggerExit(Collider col){
		looking = false;
		transform.Find("front door").GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");
	}
		
	void OnMouseOver(){
		looking = true;
	}

	void OnMouseExit(){
		looking = false;
		transform.FindChild("front door").GetComponent<Renderer>().material.shader = Shader.Find("Diffuse");
	}

}
