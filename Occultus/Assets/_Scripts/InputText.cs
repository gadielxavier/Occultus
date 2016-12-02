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
			GlobalVariables.playerPosition = new Vector3 (20, 2.5f, -15);
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
			if (OnClicked != null)
				OnClicked ();
		}
	}
}
