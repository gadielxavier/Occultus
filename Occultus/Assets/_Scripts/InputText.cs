using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class InputText : MonoBehaviour {

	public delegate void ClickAction();
	public static event ClickAction OnClicked;

	void Start(){
		GetComponentInChildren<Text> ().text = " ";
		Cursor.lockState = CursorLockMode.None;
		Cursor.visible = true;
	}

	void Update(){
		if(Input.GetKeyDown(KeyCode.Escape)){
			SceneManager.LoadScene ("house");
		}
	}

	public void setInputText(string value){
		GetComponentInChildren<Text> ().text = GetComponentInChildren<Text> ().text + value;
	}

	public void deleteInputText(){
		GetComponentInChildren<Text> ().text = " ";
	}

	public void validadeInputText(){
		if(GetComponentInChildren<Text> ().text.Equals(" 322")){
			GlobalVariables.isSafeBoxOpen = true;
			if (OnClicked != null)
				OnClicked ();
			SceneManager.LoadScene ("house");
		}
	}
}
