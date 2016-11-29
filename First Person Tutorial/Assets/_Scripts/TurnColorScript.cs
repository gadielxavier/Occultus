using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TurnColorScript : MonoBehaviour {

	void OnEnable()
	{
		InputText.OnClicked += TurnColor;
	}


	void OnDisable()
	{
		InputText.OnClicked -= TurnColor;
	}


	void TurnColor()
	{
		GetComponentInChildren<Text> ().text = "10";
	}
}
