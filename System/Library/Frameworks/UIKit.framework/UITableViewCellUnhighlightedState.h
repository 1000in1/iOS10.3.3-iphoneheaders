/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface UITableViewCellUnhighlightedState : NSObject {

	char _opaque;
	char _highlighted;
	UIColor* _backgroundColor;

}

@property (assign) char opaque;                            //@synthesize opaque=_opaque - In the implementation block
@property (assign) char highlighted;                       //@synthesize highlighted=_highlighted - In the implementation block
@property (retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setHighlighted:(char)arg1 ;
-(char)highlighted;
-(char)opaque;
@end

