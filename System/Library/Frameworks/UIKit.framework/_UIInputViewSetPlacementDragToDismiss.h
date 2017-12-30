/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewSetPlacementOnScreen.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding> {

	float _offset;

}

@property (assign,nonatomic) float offset;              //@synthesize offset=_offset - In the implementation block
+(char)supportsSecureCoding;
+(id)placementWithOffset:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)isInteractive;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(Class)applicatorClassForKeyboard:(char)arg1 ;
@end

