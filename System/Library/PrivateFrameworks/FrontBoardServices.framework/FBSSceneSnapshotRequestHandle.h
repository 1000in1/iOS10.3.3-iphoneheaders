/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject {

	unsigned _type;
	FBSSceneSnapshotContext* _context;
	FBSSceneSnapshotRequestAction* _action;
	char _canceled;

}
+(id)handleForRequestType:(unsigned)arg1 context:(id)arg2 ;
-(void)performRequestForScene:(id)arg1 ;
-(id)initWithRequestType:(unsigned)arg1 context:(id)arg2 ;
-(void)dealloc;
-(void)_clearAction;
-(void)cancelRequest;
@end

