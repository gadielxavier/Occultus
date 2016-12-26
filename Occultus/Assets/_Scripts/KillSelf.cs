using UnityEngine;
using System.Collections;

public class KillSelf : MonoBehaviour {

	void Update () {
		if(Input.GetKeyDown(KeyCode.Escape)){
			Destroy (this.gameObject);
		}
	}
}
