/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIcon.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBLeafIconDataSource;
@class NSString, NSMutableSet;

@interface SBLeafIcon : SBIcon <NSCopying> {

	NSString* _leafIdentifier;
	NSString* _applicationBundleID;
	NSMutableSet* _dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;

}
-(void)launchFromLocation:(int)arg1 context:(id)arg2 ;
-(id)leafIdentifier;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(void)addIconDataSource:(id)arg1 ;
-(id)activeDataSource;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(char)arg1 ;
-(id)badgeNumberOrString;
-(id)accessoryTextForLocation:(int)arg1 ;
-(void)completeUninstall;
-(void)setUninstalled;
-(id)nodeIdentifier;
-(void)removeIconDataSourcesOfClass:(Class)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(void)removeIconDataSource:(id)arg1 ;
-(float)progressPercent;
-(char)progressIsPaused;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg1 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_updateActiveDataSource;
-(void)_noteActiveDataSourceDidGenerateIconFormat:(int)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(char)isRecentlyUpdated;
-(char)canEllipsizeLabel;
-(char)canTightenLabel;
-(char)launchEnabled;
-(char)isUninstallSupported;
-(id)generateIconImage:(int)arg1 ;
-(id)displayNameForLocation:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)applicationBundleID;
-(int)progressState;
-(char)isBeta;
@end

