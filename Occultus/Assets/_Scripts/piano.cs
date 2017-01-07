using UnityEngine;
using System.Collections;

public class piano : MonoBehaviour {

	int[] array;
	int[] anotherArray;
	int count;
	public delegate void ClickAction();
	public static event ClickAction OnClicked;

	// Use this for initialization
	void Start () {
		array = new int[6];
		anotherArray = new int[]{2,1,2,1,2,0};
		count = 0;
	}

	public void setPianoArray(int value){
		if(count == 6)
			count = 0;

		array [count] = value;
		count++;
	}

	public bool validatePianoArray(){
		if (array.Length != anotherArray.Length)
			return false;
		for(int i = 0; i < array.Length; i++) {
			if(!array[i].Equals(anotherArray[i])) 
				return false;
		}
		return true;
	}

	public void openSecretDoor(){
		Debug.Log (validatePianoArray());
		if(validatePianoArray()){
			if (OnClicked != null)
				OnClicked ();
		}
	}

}
