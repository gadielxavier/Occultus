using UnityEngine;
using System.Collections;

public class Pause : MonoBehaviour {

	public Transform canvas;

	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){
			pauseGame ();
		}	
	}

	public void pauseGame(){
		if(canvas.gameObject.activeInHierarchy == false){
			Time.timeScale = 0;
			canvas.gameObject.SetActive (true);
			GameObject.Find("Player").GetComponentInChildren<camMouseLook> ().enabled = false;
		}
		else{
			Time.timeScale = 1;
			canvas.gameObject.SetActive (false);
			GameObject.Find("Player").GetComponentInChildren<camMouseLook> ().enabled = true;
		}
	}
}
