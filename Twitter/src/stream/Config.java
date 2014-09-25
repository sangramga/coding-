package stream;
import twitter4j.conf.ConfigurationBuilder;

 public class Config
 {
        // twitter user name & password in twitter developer and create new app then you will get accesstoken and all. 
   public static String username = "sahil_kharb";
   public static String password = "me4u.U4ME";
   public static void setUserAccessTokens(ConfigurationBuilder cb)
   {
     cb.setOAuthConsumerKey("");
     cb.setOAuthConsumerSecret("");
     cb.setOAuthAccessToken("");
     cb.setOAuthAccessTokenSecret("");

     cb.setJSONStoreEnabled(true);

     System.out.println("true is set");
  }
 }

