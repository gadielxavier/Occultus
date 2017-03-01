using UnityEngine;
using System.Collections;

public class Pause : MonoBehaviour {

	public Transform canvas;

	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){
			pauseGame ();
		}	
	}

	void OnEnable()
	{
		piano.OnClicked += pauseGame;
		InputText.safeBoxEvent += pauseGame;
	}


	void OnDisable()
	{
		piano.OnClicked -= pauseGame;
		InputText.safeBoxEvent -= pauseGame;
	}

	void pauseGame(){
		if(GlobalVariables.isPaused == false){
			Time.timeScale = 0;
			canvas.Find ("Image").gameObject.SetActive (true);
			GlobalVariables.isPaused = true;
			GameObject.Find("Player").GetComponentInChildren<camMouseLook> ().enabled = false;
			Cursor.visible = true;
			Cursor.lockState = CursorLockMode.None;
		}
		else{
			Time.timeScale = 1;
			canvas.Find ("Image").gameObject.SetActive (false);
			GlobalVariables.isPaused = false;
			GameObject.Find("Player").GetComponentInChildren<camMouseLook> ().enabled = true;
			Cursor.visible = false;
			Cursor.lockState = CursorLockMode.Locked;
		}
	}
}
