﻿using UnityEngine;
using System.Collections;

public class playerController : MonoBehaviour {

	public float speed = 10.0f;

	void Start () {
		//turn off curso
		Cursor.lockState = CursorLockMode.Locked;
		Cursor.visible = false;
		transform.position = GlobalVariables.playerPosition;
	}
	
	void Update () {
		float translation = Input.GetAxis ("Vertical") * speed;
		float straffle = Input.GetAxis ("Horizontal") * speed;
		translation *= Time.deltaTime;
		straffle *= Time.deltaTime;

		transform.Translate (straffle, 0, translation);

		if (Input.GetKeyDown (KeyCode.Escape)){
			switch(Cursor.visible){
				case true:
					Cursor.visible = false;
					break;
			case false:
				Cursor.visible = true;
				break;
			}
		}
	}
}
