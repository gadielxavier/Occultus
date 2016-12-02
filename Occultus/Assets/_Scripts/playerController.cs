using UnityEngine;
using System.Collections;

public class playerController : MonoBehaviour {

	public float speed = 10.0f;

	// Use this for initialization
	void Start () {
		//turn off curso
		Cursor.lockState = CursorLockMode.Locked;
		transform.position = GlobalVariables.playerPosition;
	}
	
	// Update is called once per frame
	void Update () {
		float translation = Input.GetAxis ("Vertical") * speed;
		float straffle = Input.GetAxis ("Horizontal") * speed;
		translation *= Time.deltaTime;
		straffle *= Time.deltaTime;

		transform.Translate (straffle, 0, translation);

		if (Input.GetKeyDown ("escape"))
			Cursor.lockState = CursorLockMode.None;
	
	}
}
