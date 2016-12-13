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
	}

	void Update(){
		if(Input.GetMouseButtonDown(1)){
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
		if(GetComponentInChildren<Text> ().text.Equals(" 311")){
			GlobalVariables.isSafeBoxOpen = true;
			if (OnClicked != null)
				OnClicked ();
		}
	}
}
