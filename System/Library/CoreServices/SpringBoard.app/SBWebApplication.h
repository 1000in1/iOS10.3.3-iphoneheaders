/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplication.h>

@class SBBookmarkIcon, NSURL;

@interface SBWebApplication : SBApplication {

	SBBookmarkIcon* _bookmarkIcon;
	NSURL* _launchURL;

}

@property (nonatomic,retain) NSURL * launchURL;                          //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) SBBookmarkIcon * bookmarkIcon; 
+(id)_webClipIdentifierFromWebAppIdentifier:(id)arg1 ;
+(id)_snapshotManifest;
+(id)_webAppIdentifierFromWebClipIdentifier:(id)arg1 ;
+(id)_snapshotDirectory;
+(id)_primaryWebAppInfo;
+(id)_dataContainerURL;
-(id)iconIdentifier;
-(id)_snapshotManifest;
-(Class)iconClass;
-(id)_baseSceneIdentifier;
-(char)isWebApplication;
-(SBBookmarkIcon *)bookmarkIcon;
-(void)setBookmarkIcon:(SBBookmarkIcon *)arg1 ;
-(void)refreshLaunchImagesInSnapshotManifestIfNeededWithInfoDictionary:(id)arg1 ;
-(id)_customStartupImageForLaunchingOrientation:(int)arg1 ;
-(id)displayName;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSURL *)launchURL;
-(id)sandboxPath;
@end
