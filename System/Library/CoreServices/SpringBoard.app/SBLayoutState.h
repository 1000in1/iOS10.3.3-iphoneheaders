/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutContext.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface SBLayoutState : NSObject <SBLayoutContext, BSDescriptionProviding> {

	NSSet* _elements;
	int _interfaceOrientation;

}

@property (nonatomic,readonly) NSSet * elements;                      //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) int interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initialLayoutState;
+(int)_defaultOrientation;
-(id)layoutStateForTransitionContext:(id)arg1 ;
-(char)layoutContainsRole:(int)arg1 ;
-(id)_initWithElements:(id)arg1 interfaceOrientation:(int)arg2 ;
-(char)isEqualToLayoutState:(id)arg1 ;
-(id)_layoutStateForTransitionContext:(id)arg1 ;
-(id)_stateWithElements:(id)arg1 interfaceOrientation:(int)arg2 ;
-(id)_initWithElements:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(int)interfaceOrientation;
-(NSSet *)elements;
-(id)elementWithIdentifier:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)elementWithRole:(int)arg1 ;
@end
