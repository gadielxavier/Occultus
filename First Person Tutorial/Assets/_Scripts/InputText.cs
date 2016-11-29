using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class InputText : MonoBehaviour {

	public delegate void ClickAction();
	public static event ClickAction OnClicked;

	void Start(){
		GetComponentInChildren<Text> ().text = " ";
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
