using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class InputText : MonoBehaviour {

	public delegate void ClickAction();
	public static event ClickAction safeBoxEvent;

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
		Debug.Log (GetComponentInChildren<Text> ().text.Equals(" 322"));
		if(GetComponentInChildren<Text> ().text.Equals(" 322")){
			if (safeBoxEvent != null) {
				safeBoxEvent ();
			}
			Destroy (transform.parent.gameObject);
		}
	}
}
