using UnityEngine;
using System.Collections;

public class Door : MonoBehaviour {

	Animator animator;
	bool doorOpen;
	int Open = Animator.StringToHash("Open");
	int Close = Animator.StringToHash("Close");

	void Start () {
		doorOpen = false;
		animator = GetComponent<Animator> ();
	}

	void OnTriggerEnter(Collider col){
		if(col.gameObject.tag == "Player"){
			if (doorOpen) {
				DoorControl (Close);
			} else
				DoorControl (Open);
		}
	}
	
	void OnTriggerExit(Collider col) {
		if (doorOpen) {
			doorOpen = false;
		} else
			doorOpen = true;
	}

	void DoorControl(int direction){
		animator.SetTrigger (direction);
	}
}
