/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/HMAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSObject;

@interface HMAssistantSyncHome : NSObject <AFSyncHandler> {

	char _done;
	NSMutableArray* _anchors;
	NSMutableArray* _entities;
	NSString* _finalAnchor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * anchors;                        //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                       //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSString * finalAnchor;                          //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char done;                                       //@synthesize done=_done - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)finalAnchor;
-(char)shouldSyncForAnchor:(id)arg1 ;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)syncDidEnd;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(char)done;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)entities;
-(void)setDone:(char)arg1 ;
-(NSMutableArray *)anchors;
-(void)setAnchors:(NSMutableArray *)arg1 ;
@end

