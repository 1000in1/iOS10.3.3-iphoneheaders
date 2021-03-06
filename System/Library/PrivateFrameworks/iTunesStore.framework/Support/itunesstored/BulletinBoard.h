/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BulletinBoardSection, BBDataProviderConnection, NSObject, NSMutableDictionary, NSLock;

@interface BulletinBoard : NSObject {

	BulletinBoardSection* _appStoreSection;
	BBDataProviderConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sectionsByIdentifier;
	NSLock* _sectionsLock;

}

@property (readonly) BulletinBoardSection * appStoreSection; 
+(id)bulletinBoard;
-(BulletinBoardSection *)appStoreSection;
-(id)init;
-(void)dealloc;
-(id)sectionWithIdentifier:(id)arg1 ;
@end

