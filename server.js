// import * as dotenv from 'dotenv'; // see https://github.com/motdotla/dotenv#how-do-i-use-dotenv-with-import
// dotenv.config();
import express from 'express';
import ejs from 'ejs';
const app = express();

app.set("view engine", "ejs");

app.use(express.static("public"));

import { initializeApp } from "firebase/app";
import { getDatabase, ref, set , onValue , push} from "firebase/database";
import { getFirestore , collection , doc, setDoc , addDoc, getDocs } from "firebase/firestore";

const firebaseConfig = {
  apiKey: "AIzaSyCRWrvfB_Z5z4dhWGtt4lM8LcOjcpZ5kvY",
  authDomain: "elite-span-369011.firebaseapp.com",
  projectId: "elite-span-369011",
  storageBucket: "elite-span-369011.appspot.com",
  messagingSenderId: "233763711137",
  appId: "1:233763711137:web:bd6efc1bdda1554ee1a8e0",
  databaseURL : 'https://elite-span-369011-default-rtdb.firebaseio.com/',
  measurementId: "G-ML2MQRT3BN"
};

// Initialize Firebase
const apps = initializeApp(firebaseConfig);

//Instance of Realtime Database
const database = getDatabase(apps);
//Instance of Firestore
const db = getFirestore(apps);


async function insertDataFirestore(){
  const User = collection(db,"1234");
  await setDoc(doc(db, "data", "two"),{
    name: "Gupta",
    email: "tushargupta25860@gmail.com"
  });

}

async function getDataFirestore() {
  const User = collection(db,"1234");
    const citySnapshot = await getDocs(User);
    const cityList = citySnapshot.docs.map(doc => doc.data());
    console.log(cityList);
  }

async function setDataRealtime(){
  const ListRef = ref(database, '/users');
  const newPostRef = push(ListRef);
   set(newPostRef,{
    name : "Tushar",
    email : "tushargp",
    rating : "5"
  });
}

async function getDataRealtime(){
  const dbRef = ref(database, '/users');
  onValue(dbRef, (snapshot) => {
    snapshot.forEach((childSnapshot) => {
      const childKey = childSnapshot.key;
      const childData = childSnapshot.val();
      console.log(childData);
    });
  });
}




app.get('/', async function(req,res){
  // insertDataFirestore();
  // getDataFirestore();
  // getDataRealtime();
  // setDataRealtime();
  res.render("main")
});

app.listen('3000',function(){
});