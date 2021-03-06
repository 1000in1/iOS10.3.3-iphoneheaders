/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>

@protocol SCATCandidateBarManagerDelegate;
@class NSArray;

@interface SCATCandidateBarManager : SCATSimpleElementManager {

	id<SCATCandidateBarManagerDelegate> _delegate;
	NSArray* _typingCandidates;

}

@property (assign,nonatomic) id<SCATCandidateBarManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * typingCandidates;                                //@synthesize typingCandidates=_typingCandidates - In the implementation block
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(char)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(void)setTypingCandidates:(NSArray *)arg1 ;
-(char)canBeActiveElementManager;
-(id)allElements;
-(void)didFetchElements:(id)arg1 foundNewElements:(char)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(char)arg4 ;
-(void)setDelegate:(id<SCATCandidateBarManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCATCandidateBarManagerDelegate>)delegate;
-(NSArray *)typingCandidates;
@end

