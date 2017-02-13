using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class safeBox : MonoBehaviour {

	Animator animator;
	int Open = Animator.StringToHash("Open");
	public Transform book;

	void Start(){
		animator = GetComponent<Animator> ();
		book.gameObject.SetActive (false);
	}
		
	void OnEnable()
	{
		InputText.safeBoxEvent += openSafeBox;
	}


	void OnDisable()
	{
		InputText.safeBoxEvent -= openSafeBox;
	}


	void openSafeBox()
	{
		animator.SetTrigger (Open);
		book.gameObject.SetActive (true);
	}

}
