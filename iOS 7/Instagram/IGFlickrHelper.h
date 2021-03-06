/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:35:13 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGFlickrAuthViewControllerDelegate.h>
#import <IGServiceHelperProtocol.h>

@interface IGFlickrHelper : NSObject <IGFlickrAuthViewControllerDelegate, IGServiceHelperProtocol> {
	NSString* _tokenKey; 
	NSString* _tokenSecret; 
}
+(id)sharedHelper;
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(BOOL)isConfigurable;
-(BOOL)hasAdvancedOptions;
-(BOOL)isAvailableInCurrentLocale;
-(BOOL)supportsMediaType:(int)arg1;
-(BOOL)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(BOOL)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(BOOL)hasEverBeenConfigured;
-(id)shortServiceName;
-(void)flickrAuthController:(id)arg1 didLoginWithTokenKey:(id)arg2 tokenSecret:(id)arg3;
-(void)flickrAuthControllerLoginFailed:(id)arg1;
-(void)loadTokens;
-(BOOL)hasTokens;
-(id)oldFlickrToken;
-(void)setTokenKey:(id)arg1 tokenSecret:(id)arg2 save:(BOOL)arg3;
-(id)callbackURLString;
-(id)serviceName;
-(id)init;
-(void)logout;
-(BOOL)isConfigured;
-(void).cxx_destruct;
@end