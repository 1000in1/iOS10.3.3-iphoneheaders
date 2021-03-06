/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, SBBackBoardServicesInterface, FBSDisplayLayoutMonitor, NSString;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	SBBackBoardServicesInterface* _queue_bksInterface;
	FBSDisplayLayoutMonitor* _queue_displayLayoutMonitor;
	NSMutableSet* _queue_hitTestRegions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2 ;
-(float)touchRegionBuffer;
-(NSMutableSet*)_calculateTouchRegionsFromSceneRects:(NSMutableSet*)arg1 ;
-(NSMutableSet*)_calculateHitTestRegionsFromSceneRects:(NSMutableSet*)arg1 ;
-(void)_queue_handleHitTestRegionUpdate:(NSMutableSet*)arg1 forDisplay:(id)arg2 ;
-(void)_queue_handleDisplayLayoutUpdateWithSceneRects:(NSMutableSet*)arg1 forDisplay:(id)arg2 ;
-(void)setDisplayLayoutMonitor:(id)arg1 ;
-(id)displayLayoutMonitor;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
@end

