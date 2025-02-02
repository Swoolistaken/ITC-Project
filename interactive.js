const API_KEY= "5aa0d2ec8a2b48d118e3af0f7d1c725a";
const BASE_URL= "https://api.openweathermap.org/data/2.5/weather";

async function getweather(city) {
    try {
        const response = await fetch(`${BASE_URL}?q=${city}&units=metric&appid=${API_KEY}`);
        const data= await response.json();
        console.log("Data Cuaca:",data);

        const weatheroutput=document.getElementById("weatheroutput");

        weatheroutput.innerHTML=`
            <h2>Weather in ${data.name}</h2>
            <p>Temp: ${data.main.temp}°C</p>
            
        
        `;

        
        

    } catch (error){
        console.error("Gagal Mengambil Data:",error);
    }

}
    
getweather("Yogyakarta");
