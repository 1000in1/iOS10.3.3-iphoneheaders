/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureGraphElement.h>

@class UIGestureGraphNode;

@interface UIGestureGraphEdge : UIGestureGraphElement {

	char _directed;
	UIGestureGraphNode* _sourceNode;
	UIGestureGraphNode* _targetNode;

}

@property (nonatomic,readonly) UIGestureGraphNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) UIGestureGraphNode * targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
@property (getter=isDirected,nonatomic,readonly) char directed;              //@synthesize directed=_directed - In the implementation block
@property (getter=isLoop,nonatomic,readonly) char loop; 
-(id)description;
-(UIGestureGraphNode *)sourceNode;
-(char)isLoop;
-(UIGestureGraphNode *)targetNode;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(char)arg4 ;
-(char)isDirected;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
@end

