/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSAttributedString, SAUIAssistantHintView;

@interface SiriHintViewController : SiriUIAceObjectViewController {

	NSAttributedString* _attributedString;

}

@property (nonatomic,retain) SAUIAssistantHintView * aceObject; 
-(id)_attributedStringForText:(id)arg1 regions:(id)arg2 ;
-(id)_attributedString;
-(void)_handleHintViewTap:(id)arg1 ;
-(void)loadView;
-(float)desiredHeightForWidth:(float)arg1 ;
@end

