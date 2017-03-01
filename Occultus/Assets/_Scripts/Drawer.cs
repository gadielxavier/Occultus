using UnityEngine;
using System.Collections;

public class Drawer : MonoBehaviour {

	Animator animator;
	int drawerTrigger = Animator.StringToHash("drawerTrigger");
	AudioSource audio;

	void Start () {
		animator = GetComponent<Animator> ();
		audio = GetComponent<AudioSource> ();
	}
	
	void OnEnable()
	{
		piano.OnClicked += openSecretDoor;
	}


	void OnDisable()
	{
		piano.OnClicked -= openSecretDoor;
	}


	void openSecretDoor()
	{
		animator.SetTrigger (drawerTrigger);
		audio.Play ();
	}
}
